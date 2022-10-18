FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive

RUN set -ex && \
    apt-get update && \
    apt-get install -y golang gpg git lsb-release wget software-properties-common

RUN set -ex && \
    GOBIN=/usr/local/bin go install github.com/bazelbuild/bazelisk@latest && \
    GOBIN=/usr/local/bin go install github.com/bazelbuild/buildtools/buildifier@latest && \
    ln -s /usr/local/bin/bazelisk /usr/local/bin/bazel

RUN wget https://apt.llvm.org/llvm.sh &&\
	chmod +x llvm.sh && \
	./llvm.sh 16 all
