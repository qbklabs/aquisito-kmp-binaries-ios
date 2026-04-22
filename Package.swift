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
            url: "https://github.com/qbklabs/aquisito-kmp-binaries-ios/releases/download/0.27.0/AquisitoCore.xcframework.zip",
            checksum: "b988992b8f8a0989f0333145478d42e7378f4cb4cfaa2ddc09d26f9dc9b04442"
        )
    ]
)
