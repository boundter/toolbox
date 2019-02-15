// Copyright 2019 Erik Teichmann <kontakt.teichmann@gmail.com>

#include <cmath>
#include "catch.hpp"
#include <toolbox/math.hpp>


namespace tb = toolbox;

TEST_CASE("distance on the circle") {
  // test invariance of input ordering
  REQUIRE(tb::DistanceOnCircle(0., M_PI/2.) == Approx(M_PI/2.));
  REQUIRE(tb::DistanceOnCircle(M_PI/2., 0.) == Approx(M_PI/2.));

  // test invariance to location
  REQUIRE(tb::DistanceOnCircle(M_PI, M_PI/2.) == Approx(M_PI/2.));
  REQUIRE(tb::DistanceOnCircle(M_PI/2., M_PI) == Approx(M_PI/2.));

  // test edgecase
  REQUIRE(tb::DistanceOnCircle(0., M_PI) == Approx(M_PI));

  // test short distance
  REQUIRE(tb::DistanceOnCircle(3.*M_PI/2., 0.) == Approx(M_PI/2.));
}
