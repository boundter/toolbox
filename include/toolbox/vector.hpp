// Copyright 2019 Erik Teichmann <kontakt.teichmann@gmail.com>

/*! \file
 *  \brief Some useful vector functions
 */

#ifndef INCLUDE_TOOLBOX_VECTOR_HPP_
#define INCLUDE_TOOLBOX_VECTOR_HPP_

#include <algorithm>
#include <vector>

namespace toolbox {

/*! \function
 *  \brief Return the indeces that sort a given vector.
 */
std::vector<size_t> GetSortedVectorIndices(
    const std::vector<double>& input_vector);

}  // namespace toolbox

#endif  // INCLUDE_TOOLBOX_VECTOR_HPP_
