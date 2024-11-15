#include <module1/header.hpp>

#include <iostream>
#include <fmt/color.h>

int main() {
    fmt::print(fg(fmt::terminal_color::bright_yellow), "From main function: sum(1, 1): {}\n", module1::sum(1, 1));
    return 0;
}