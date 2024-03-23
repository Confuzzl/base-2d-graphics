export module math;

import <random>;
import glm;

std::random_device rd;
std::mt19937 mt{rd()};

export template <typename T = int> T random_int(const T a, const T b) {
  return std::uniform_int_distribution<T>{a, b}(mt);
}