// swift-tools-version:5.6
// Automatically generated - do not edit manually
import PackageDescription

let package = Package(
    name: "AquisitoCore",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "AquisitoCore",
            targets: ["AquisitoCore"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "AquisitoCore",
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/V0.22.0/AquisitoCore.xcframework.zip",
            checksum: "af84fbbe0539bac623dd9487c445955b92a2f45fe406c99aa9d9d9480e7d447b"
        )
    ]
)
