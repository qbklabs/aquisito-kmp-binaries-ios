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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.26.2/AquisitoCore.xcframework.zip",
            checksum: "7a34bab2ddbbcfa566024af51a0544b0b3cb928ec03750c6c50b16a5a1d54e68"
        )
    ]
)
