// By Toizi
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

bool is_palindrome(int x, int base) {
  // collect digits in specified base representation
  int n = x;
  std::vector<int> v{};
  do {
    v.push_back(n % base);
  } while ((n = n / base) > 0);

  // start from both sides and compare digits
  // if we find an unequal digit, no palindrome
  auto len = v.size();
  for (int i = 0; i < len / 2; ++i) {
    if (v[i] != v[len - 1 - i]) {
      return false;
    }
  }

  // palindrome (single digit is also palindrome)
  return true;
}

int main() {
  int N, k, sum = 0;
  std::cin >> N >> k;

  for (int i = 1; i < N; ++i) {
    if (is_palindrome(i, 10) && is_palindrome(i, k))
      sum += i;
  }
  std::cout << sum;

  return 0;
}
