workspace(name = "bazel_demo")

# [3] Testing
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Catch2
http_archive(
    name = "com_github_catchorg_catch2",
    strip_prefix = "Catch2-3.1.1",
    urls = ["https://github.com/catchorg/Catch2/archive/v3.1.1.tar.gz"],
    sha256 = "2106bccfec18c8ce673623d56780220e38527dd8f283ccba26aa4b8758737d0e",
)

# [5] Static analyzers

# Compilation database
# https://github.com/hedronvision/bazel-compile-commands-extractor
http_archive(
    name = "hedron_compile_commands",
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/7082b8e31e6a4fe612394f0d7f19236fc75f8c85.tar.gz",
    strip_prefix = "bazel-compile-commands-extractor-7082b8e31e6a4fe612394f0d7f19236fc75f8c85",
    sha256 = "5591c1da51f0c824b6186bfe674c868eef135e8740467f851c79f7ae7599171b",
)
load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")
hedron_compile_commands_setup()
# To run: bazel run @hedron_compile_commands//:refresh_all

# Clang-tidy direct integration
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
       name = "bazel_clang_tidy",
       commit = "41d3033cce4f6e42f7b683894e7b78ecf8491417",
       remote = "https://github.com/erenon/bazel_clang_tidy.git",
       shallow_since = "1665996490 +0200"
)

# WASM
# Patched emsdk
http_archive(
    name = "emsdk",
    sha256 = "19170aeef43a5b558bd609c8c1ae3c1666aeea1c69825e309eab0eb36efb1d6f",
    strip_prefix = "emsdk-6410e91e1452d9db81166d790164af66d3a2062a/bazel",
    url = "https://github.com/HappyCerberus/emsdk/archive/6410e91e1452d9db81166d790164af66d3a2062a.tar.gz",
)

load("@emsdk//:deps.bzl", emsdk_deps = "deps")
emsdk_deps()

load("@emsdk//:emscripten_deps.bzl", emsdk_emscripten_deps = "emscripten_deps")
emsdk_emscripten_deps(emscripten_version = "2.0.31")

load("@emsdk//:toolchains.bzl", "register_emscripten_toolchains")
register_emscripten_toolchains()


# Artefacts
http_archive(
    name = "rules_pkg",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_pkg/releases/download/0.7.1/rules_pkg-0.7.1.tar.gz",
        "https://github.com/bazelbuild/rules_pkg/releases/download/0.7.1/rules_pkg-0.7.1.tar.gz",
    ],
    sha256 = "451e08a4d78988c06fa3f9306ec813b836b1d076d0f055595444ba4ff22b867f",
)
load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")
rules_pkg_dependencies()