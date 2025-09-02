#include "lib.hpp"

namespace hftpp {
    std::string greet(const std::string &who) {
        if (who.empty()) return "Hello, world from hftpp!";
        return "Hello, " + who + " — welcome to hftpp!";
    }
}
