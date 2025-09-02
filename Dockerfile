FROM ubuntu:24.04
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential cmake git ccache \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /src
COPY . /src

RUN mkdir -p build && cd build \
    && cmake .. -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF \
    && cmake --build . -- -j$(nproc)

ENTRYPOINT ["/src/build/hftpp"]
