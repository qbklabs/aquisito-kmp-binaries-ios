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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.25.0/AquisitoCore.xcframework.zip",
            checksum: "906a970e55dbb180f2baf427ea9c4dd9f8dab4ac5b50a1d5abe0250575aaab7a"
        )
    ]
)
