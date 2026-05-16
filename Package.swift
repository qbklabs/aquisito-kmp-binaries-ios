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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/v0.27.2/AquisitoCore.xcframework.zip",
            checksum: "55f9a81e2f6a0a641dde4f3ff4bea24e127959a010081afe16d6c5f79b91c8dd"
        )
    ]
)
