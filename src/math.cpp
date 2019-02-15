#include <toolbox/math.hpp>

namespace tb = toolbox;

// Calculate the distance first counterclockwise, then the complement
// and choose the smalles one.
double tb::DistanceOnCircle(double phase_1, double phase_2) {
  auto distance_1 = std::max(phase_1, phase_2) - std::min(phase_1, phase_2);
  auto distance_2 = 2*M_PI - distance_1;
  return std::min(distance_1, distance_2);
}

