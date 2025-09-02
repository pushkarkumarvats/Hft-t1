# hftpp

Minimal production-ready C++ project template for `hftpp`.

## Features
- CMake build (out-of-source)
- Small core library and executable
- Simple unit-test harness (no external test frameworks required)
- GitHub Actions CI for Linux/macOS
- Dockerfile for reproducible builds
- MIT license

## Quickstart (local)
```bash
git clone <repo-url>
cd hftpp
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . -- -j$(nproc)
./hftpp "YourName"
```

## Build with tests
```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=ON
cmake --build . -- -j$(nproc)
ctest --output-on-failure
```

## Docker
```bash
docker build -t hftpp:latest .
docker run --rm hftpp:latest
```

## License
MIT
