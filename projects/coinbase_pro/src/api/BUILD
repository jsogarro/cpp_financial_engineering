load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "api",
    srcs = ["Api.cpp"],
    hdrs = ["Api.h"],
    visibility = ["//main:__pkg__"],
)

cc_binary(
    name = "api",
    srcs = ["Api.cpp"],
    deps = [
        "//auth:auth",
    ],
)