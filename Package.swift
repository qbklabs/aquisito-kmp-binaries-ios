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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/0.2.1-rc/AquisitoCore.xcframework.zip",
            checksum: "e20fe03881ab2d5a2f4caece7cda191d4e186e1b9058b44e32683c0c2c95fb5a"
        )
    ]
)
