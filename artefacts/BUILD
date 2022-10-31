load("@rules_pkg//pkg:deb.bzl", "pkg_deb")
load("@rules_pkg//pkg:tar.bzl", "pkg_tar")

cc_binary(
    name = "custom_command",
    srcs = ["custom_command.cc"]
)

pkg_tar(
    name = "pkg-bin",
    strip_prefix = "/artefacts",
    package_dir = "/usr/bin",
    srcs = ["//artefacts:custom_command"],
    mode = "0755",
)

filegroup(
    name = "custom_command_data",
    srcs = [
        "file.txt",
    ]
)

pkg_tar(
    name = "pkg-data",
    strip_prefix = "/artefacts",
    package_dir = "/usr/share/custom_command",
    srcs = ["//artefacts:custom_command_data"],
    mode = "0644",
)

pkg_tar(
    name = "debian-data",
    extension = "tar.gz",
    deps = [
        ":pkg-bin",
        ":pkg-data",
    ],
)

pkg_deb(
    name = "customcommand-debian",
    architecture = "amd64",
    data = ":debian-data",
    description_file = "description",
    homepage = "https://simontoth.eu",
    maintainer = "Simon Toth (business@simontoth.eu)",
    package = "customcommand",
    version = "1.0.0",
)