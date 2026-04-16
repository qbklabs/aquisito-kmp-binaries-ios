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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.26.4/AquisitoCore.xcframework.zip",
            checksum: "1606778eb4f016fb3fa8bc925e55ee5e5efd9fbff762c5aeaed0b25c2f7e1de8"
        )
    ]
)
