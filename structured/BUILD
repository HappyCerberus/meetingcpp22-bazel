package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    deps = [
        "//structured/greeter:greet",
    ]
)

cc_binary(
    name = "hello_private",
    srcs = ["hello_private.cc"],
    deps = [
        "//structured/greeter:greet",
    ]
)

cc_binary(
    name = "hello_transitive",
    srcs = ["hello_transitive.cc"],
    deps = [
        "//structured/greeter:greet"
    ]
)