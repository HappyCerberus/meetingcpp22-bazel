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
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/928eb070ac19531b8971d347cb6962f6b2ff6b2a.tar.gz",
    strip_prefix = "bazel-compile-commands-extractor-928eb070ac19531b8971d347cb6962f6b2ff6b2a",
    sha256 = "d41604528e5655cb77cced6d11481c2ac4072fe1cc9ae10b2ded8bd04ba23019",
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

# [7] WASM
http_archive(
    name = "emsdk",
    sha256 = "1546a493149ad9b566056a1ff9d629ff3a0359fb77be8955b93e1615d5721c02",
    strip_prefix = "emsdk-005063304bb4e575f97b7c5f50368f937c06cb54/bazel",
    url = "https://github.com/emscripten-core/emsdk/archive/005063304bb4e575f97b7c5f50368f937c06cb54.tar.gz",
)

load("@emsdk//:deps.bzl", emsdk_deps = "deps")
emsdk_deps()

load("@emsdk//:emscripten_deps.bzl", emsdk_emscripten_deps = "emscripten_deps")
emsdk_emscripten_deps(emscripten_version = "3.1.8")

load("@emsdk//:toolchains.bzl", "register_emscripten_toolchains")
register_emscripten_toolchains()


# [8] Artefacts
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