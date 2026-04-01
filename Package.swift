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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.24.0/AquisitoCore.xcframework.zip",
            checksum: "18e27070fd563e724484c7c4ebd8f776d05cc58583fd2cfe298e2ffd56a5e8a0"
        )
    ]
)
