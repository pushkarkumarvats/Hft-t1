#include "lib.hpp"
#include <cassert>
#include <iostream>

int main() {
    using namespace hftpp;
    // simple deterministic tests (no external test framework)
    assert(greet("") == "Hello, world from hftpp!");
    assert(greet("Alice") == "Hello, Alice — welcome to hftpp!");
    std::cout << "All tests passed\n";
    return 0;
}
