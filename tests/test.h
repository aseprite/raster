// Raster Library
// Copyright (C) 2015 David Capello

#pragma once

#include <cstdlib>
#include <iostream>

template<typename T, typename U>
inline void expect_eq(const T& expected, const U& value,
                      const char* file, const int line) {
  if (expected != value) {
    std::cout << file << ":" << line << ": failed\n"
              << "  Expected: " << expected << "\n"
              << "  Actual: " << value << std::endl;
    std::exit(1);
  }
}

#define EXPECT_EQ(expected, value)                      \
  expect_eq(expected, value, __FILE__, __LINE__);
