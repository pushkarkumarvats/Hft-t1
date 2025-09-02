#include "lib.hpp"
#include <iostream>

int main(int argc, char** argv) {
    std::string who = (argc>1) ? argv[1] : "";
    std::cout << hftpp::greet(who) << std::endl;
    return 0;
}
