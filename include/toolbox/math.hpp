// Copyright 2019 Erik Teichmann <kontakt.teichmann@gmail.com>

/*! \file
 *  \brief Some useful math functions.
 */

#ifndef INCLUDE_TOOLBOX_MATH_HPP_
#define INCLUDE_TOOLBOX_MATH_HPP_

#include <algorithm>
#include <cmath>

namespace toolbox {

/*! \function
 *  \brief Calculate the shortest distance on the circle.
 *
 *  The distance of two phases on the circle is calculated and the smallest one
 *  is returned. the result is in the range [0, pi].
 */
double DistanceOnCircle(double phase_1, double phase_2);

}  // namespace toolbox

#endif  // INCLUDE_TOOLBOX_MATH_HPP_
