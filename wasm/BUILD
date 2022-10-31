load("@emsdk//emscripten_toolchain:wasm_rules.bzl", "wasm_cc_binary")

cc_binary(
    name = "main",
    srcs = ["main.cc"],
)

wasm_cc_binary(
    name = "main_wasm",
    cc_target = ":main",
)