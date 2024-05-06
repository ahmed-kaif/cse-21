#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<int> i = {1, 1, 2, 3, 4, 5, 5, 5};

  std::sort(i.begin(), i.end());

  auto iter = std::unique(i.begin(), i.end());

  i.erase(iter, i.end());

  for (const auto &s : i) {
    std::cout << s << " ";
  }
  std::cout << std::endl;

  return 0;
}
