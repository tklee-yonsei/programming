FROM ubuntu:latest

# 필수 패키지 설치
RUN apt-get update && apt-get install -y \
    build-essential \
    gcc \
    gdb \
    cmake \
    git \
    vim \
    && rm -rf /var/lib/apt/lists/*

# 작업 디렉토리 설정
WORKDIR /workspace