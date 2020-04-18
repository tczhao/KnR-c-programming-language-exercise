FROM ubuntu:18.04

RUN apt-get update && \
    apt-get -y install gcc make && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /project