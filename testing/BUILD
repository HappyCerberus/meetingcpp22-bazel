cc_library(
    name = "library",
    srcs = ["library.cc"],
    hdrs = ["library.h"],
)

cc_test(
    name = "library_test",
    srcs = ["library_test.cc"],
    size = "small",
    deps = [
        ":library",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        ]
)

cc_test(
    name = "library_catch_test",
    srcs = ["library_catch_test.cc"],
    size = "small",
    deps = [
        ":library",
        "@com_github_catchorg_catch2//:catch2",
        "@com_github_catchorg_catch2//:catch2_main"
        ]
)

cc_binary(
    name = "binary",
    srcs = [ "binary.cc", ],
)

sh_test(
    name = "blackbox_test",
    size = "small",
    srcs = ["blackbox_test.sh"],
    data = [":binary"],
    args = ["$(location :binary)"],
)

cc_test(
    name = "data_test",
    srcs = ["data_test.cc"],
    deps = ["@bazel_tools//tools/cpp/runfiles"],
    data = ["file.txt"],
)