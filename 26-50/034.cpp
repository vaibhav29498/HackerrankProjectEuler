#include <algorithm>
#include <array>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

const std::array<unsigned long, 10> factorial_map = {
    1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

bool is_curious(int x) {
  int n = x;
  std::vector<int> v{};
  do {
    v.push_back(n % 10);
  } while ((n = n / 10) > 0);

  unsigned long factorial_sum = 0;
  for (int i : v) {
    factorial_sum += factorial_map[i];
  }
  int divisor = factorial_sum / x;
  return divisor * x == factorial_sum;
}

int main() {
  int N;
  int sum = 0;
  std::cin >> N;

  for (int i = 10; i < N; ++i) {
    if (is_curious(i))
      sum += i;
  }

  std::cout << sum;
  return 0;
}