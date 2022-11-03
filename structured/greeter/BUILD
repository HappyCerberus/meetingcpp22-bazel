cc_library(
    name = "format",
    srcs = ["format.cc"],
    hdrs = ["format.h"],
)

cc_library(
    name = "greet",
    srcs = [
        "greet.cc",
        "greet_defs.h"
    ],
    hdrs = ["greet.h"],
    implementation_deps = [
        ":format"
    ],
    visibility = ["//visibility:public"],
)