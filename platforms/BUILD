cc_library(
    name = "library",
    srcs = ["library.cc"],
    hdrs = ["library.h"],
)

# Windows/x86_64 only test
cc_test(
    name = "library_test",
    srcs = ["library_test.cc"],
    deps = [":library"],
    target_compatible_with = [
        '@platforms//os:windows',
        '@platforms//cpu:x86_64'
    ]
)

cc_library(
    name = "platform_windows",
    srcs = [ "platform_windows.cc" ],
    hdrs = [ "platform.h" ],
    target_compatible_with = [
        '@platforms//os:windows'
    ]
)

cc_library(
    name = "platform_linux",
    srcs = [ "platform_linux.cc" ],
    hdrs = [ "platform.h" ],
    target_compatible_with = [
        '@platforms//os:linux',
    ]
)

cc_binary(
    name = "multi_platform",
    srcs = ["multi_platform.cc"],
    deps = select({
        "@platforms//os:windows": [":platform_windows"],
        "@platforms//os:linux": [":platform_linux"],
    }),
)
