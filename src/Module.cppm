module;

#include <iostream>

export module Module;

int hidden() { return 42; }

export void printMessage() {
  std::cout << "The hidden value is " << hidden() << "\n";
}
