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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.28.0/AquisitoCore.xcframework.zip",
            checksum: "d0b669731cd84f3b946be847ae5f29978e26fed5ac7a2d92ecc3de4b0fb4a8f7"
        )
    ]
)
