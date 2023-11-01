// Kieren Armas
// karmas@csu.fullerton.edu
// @ItsKieren
// Partners: @VINNY2x

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if ((arguments.size() -1) < 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double add_up = 0.0;
  bool first_index = true;
  for (std::string val : arguments) {
    if (first_index) {
      first_index = false;
      continue;
    }
    add_up += std::stod(val);
  }
  double divide = arguments.size() - 1;
  double result = add_up / divide;
  std::cout << "average = " << result;
  return 0;
}