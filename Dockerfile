FROM ubuntu:18.04

RUN apt-get update && \
    apt-get -y install gcc && \
    rm -rf /var/lib/apt/lists/*