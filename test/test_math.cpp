#include "catch.hpp"

#include <cmath>

#include <toolbox/math.hpp>


namespace tb = toolbox;

TEST_CASE("distance on the circle") {
  REQUIRE(tb::DistanceOnCircle(0., M_PI/2.) == Approx(M_PI/2.));
  REQUIRE(tb::DistanceOnCircle(M_PI/2., 0.) == Approx(M_PI/2.));

  REQUIRE(tb::DistanceOnCircle(0., M_PI) == Approx(M_PI));

  REQUIRE(tb::DistanceOnCircle(3.*M_PI/2., 0.) == Approx(M_PI/2.));
}
