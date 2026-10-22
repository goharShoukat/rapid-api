#include  <iostream>
#include <fmt/core.h>

int main() {
    std::cout << "Hello World from std!" << std::endl;
    fmt::print("hello from {} with fmt {}\n", "C++", FMT_VERSION);
}
