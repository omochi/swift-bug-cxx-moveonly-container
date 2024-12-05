// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "swift-bug-cxx-moveonly-container",
    products: [
        .library(
            name: "BugDemo",
            targets: ["BugDemo"]),
    ],
    targets: [
        .target(
            name: "CxxCats"
        ),
        .target(
            name: "BugDemo",
            dependencies: ["CxxCats"],
            swiftSettings: [
                .interoperabilityMode(.Cxx)
            ]
        ),
    ],
    cxxLanguageStandard: .cxx17
)
