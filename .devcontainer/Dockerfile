FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive

RUN set -ex && \
    apt-get update && \
    apt-get install -y gpg git lsb-release wget software-properties-common nodejs

RUN wget https://go.dev/dl/go1.19.3.linux-amd64.tar.gz && \
    tar -xf go1.19.3.linux-amd64.tar.gz -C /usr/local && \
    rm go1.19.3.linux-amd64.tar.gz

ENV PATH="${PATH}:/usr/local/go/bin"

RUN set -ex && \
    GOBIN=/usr/local/go/bin go install github.com/bazelbuild/bazelisk@latest && \
    GOBIN=/usr/local/go/bin go install github.com/bazelbuild/buildtools/buildifier@latest && \
    ln -s /usr/local/go/bin/bazelisk /usr/local/bin/bazel

RUN wget https://apt.llvm.org/llvm.sh &&\
	chmod +x llvm.sh && \
	./llvm.sh 16 all

RUN mkdir /cache && \
    chown www-data:www-data /cache
