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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.12.0/AquisitoCore.xcframework.zip",
            checksum: "45fdedcdf1b0c1cdc4d296c72967253cd5768f3041856846f530d197e3d7a63c"
        )
    ]
)
