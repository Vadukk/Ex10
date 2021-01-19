// Copyright 2021 Vadukk

#include <iostream>
#include <string>

#include "../include/postfix.h"

int main() {
  std::string infix = "3 + 8 * 1 / (2 - 1) + 9 * 8 * 9 / 3";
  std::cout << infix << std::endl;
  std::string postfix = infix2postfix(infix);
  std::cout << postfix << std::endl;
  return 0;
}
