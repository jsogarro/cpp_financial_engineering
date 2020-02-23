load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main",
    srcs = ["main.ccp"],
    deps = [
        "//api:Api",
        "//auth:Auth",
        "//orders:Order",
        "//publishers:Publisher",
        "//strategies:Strategy",
        "//structs:Product",
        "//utils:Utils",
        "//websockets:Websocket",
    ],
)