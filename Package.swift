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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.23.0/AquisitoCore.xcframework.zip",
            checksum: "0d09185f4f9fe23618f00ffbe7b9df5bbc3189dcf6bd561a01d78ff3b442f37a"
        )
    ]
)
