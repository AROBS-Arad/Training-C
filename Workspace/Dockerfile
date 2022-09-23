FROM ubuntu:22.04

ENV DEBIAN_FRONTEND='noninteractive'

RUN apt-get update && apt-get install --no-install-recommends -y \
    iputils-ping \
    build-essential \
    openssh-server \
    mysql-client \
    cmake \
    wget \
    git \
    doxygen \
    lcov \
    clang \
    llvm \
    valgrind \
    clang-format \
    clang-tidy \
    cppcheck \
    iwyu \
    python3-pip \
    python3-venv && \
    rm -rf /var/lib/apt/lists/* && \
    pip3 install cpplint

COPY use_clang.sh use_gcc.sh /usr/bin/

RUN ln -s /usr/bin/python3 /usr/bin/python
RUN mkdir /var/run/sshd
#expose port 22
EXPOSE 22

#Commands to be executed by default
CMD ["/usr/sbin/sshd","-D"]