// Copyright 2019 Erik Teichmann <kontakt.teichmann@gmail.com>

#include <vector>
#include "catch.hpp"
#include <toolbox/vector.hpp>

namespace tb = toolbox;

TEST_CASE("index-sort vector") {
  // Check intended beahviour
  REQUIRE(tb::GetSortedVectorIndices(std::vector<double>{1.})
          == std::vector<size_t>{0});
  REQUIRE(tb::GetSortedVectorIndices(std::vector<double>{1., 2.})
          == std::vector<size_t>{0, 1});
  REQUIRE(tb::GetSortedVectorIndices(std::vector<double>{2., 1.5})
          == std::vector<size_t>{1, 0});

  // Check handling of negative numbers
  REQUIRE(tb::GetSortedVectorIndices(std::vector<double>{-2., 1.5})
          == std::vector<size_t>{0, 1});
}
