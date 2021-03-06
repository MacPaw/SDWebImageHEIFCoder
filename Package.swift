// swift-tools-version:5.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SDWebImageHEIFCoder",
    platforms: [
        .macOS(.v10_10), .iOS(.v8), .tvOS(.v9), .watchOS(.v2)
    ],
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "SDWebImageHEIFCoder",
            targets: ["SDWebImageHEIFCoder"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.8.0"),
        .package(url: "https://github.com/SDWebImage/libheif-Xcode.git", from: "1.6.1")
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages which this package depends on.
        .target(
            name: "SDWebImageHEIFCoder",
            dependencies: ["SDWebImage", "libheif"],
            path: ".",
            sources: ["SDWebImageHEIFCoder/Classes"],
            publicHeadersPath: "SDWebImageHEIFCoder/Classes",
            cSettings: [.define("HAVE_LIBDE265")]
        )
    ]
)
