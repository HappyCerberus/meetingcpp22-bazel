# Living comfortably at HEAD with Bazel

This is a repository for the Meeting C++ 2022 talk: "Living comfortably at HEAD with Bazel".

[Slides PDF](https://github.com/HappyCerberus/meetingcpp22-bazel/raw/main/slides/slides-final.pdf)

[![Slides PDF](https://github.com/HappyCerberus/meetingcpp22-bazel/raw/main/slides/slides.png)](https://github.com/HappyCerberus/meetingcpp22-bazel/raw/main/slides/slides-final.pdf)

## Basics

- [Bazelisk](https://github.com/bazelbuild/bazelisk)
- [C++ tutorial](https://bazel.build/start/cpp)
- [visibility](https://bazel.build/concepts/visibility)
- [Bazel Modules](https://bazel.build/build/bzlmod)

## Testing

- [Testing](https://bazel.build/reference/test-encyclopedia)
- [Runfiles library](https://github.com/bazelbuild/bazel/blob/master/tools/cpp/runfiles/runfiles_src.h)

## Platforms

- [Platforms](https://bazel.build/extending/platforms)
- [select()](https://bazel.build/docs/configurable-attributes)

## Toolchains

- [Configuring a C++ toolchain](https://bazel.build/tutorials/ccp-toolchain-config)

## Packaging

- [tar, zip, deb, rpm](https://github.com/bazelbuild/rules_pkg)
- [Docker](https://github.com/bazelbuild/rules_docker)

## Multidev

- [Github Cache](https://github.com/actions/cache)
- [Remote Caching](https://bazel.build/remote/caching)

## Windows

- [Bazel on Windows](https://bazel.build/configure/windows)

## C++20 modules

- [Clang Modules](https://github.com/rnburn/rules_cc_module)
- [C++20 modules](https://github.com/eomii/rules_ll)

## External dependencies

- [rules_foreign_cc](https://github.com/bazelbuild/rules_foreign_cc)
- [Conan + Bazel](https://docs.conan.io/en/1.44/integrations/build_system/bazel.html)
- [Manual BUILD file](https://bazel.build/rules/lib/repo/http#http_archive-build_file)