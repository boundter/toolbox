// Copyright 2019 Erik Teichmann <kontakt.teichmann@gmail.com>

#include <toolbox/vector.hpp>

namespace tb = toolbox;

struct IndxPair {
  size_t indx;
  double value;
};

bool CompareIndxPair(const IndxPair& pair_1, const IndxPair& pair_2) {
  return (pair_1.value < pair_2.value);
}

std::vector<size_t> tb::GetSortedVectorIndices(
    const std::vector<double>& input_vector) {
  std::vector<IndxPair> indexed_vector(input_vector.size());
  for (auto i = 0; i < input_vector.size(); ++i) {
    indexed_vector[i] = {i, input_vector[i]};
  }
  std::sort(indexed_vector.begin(), indexed_vector.end(), CompareIndxPair);
  std::vector<size_t> sorted_indices;
  for (auto it = indexed_vector.begin(); it != indexed_vector.end(); ++it) {
    sorted_indices.push_back(it->indx);
  }
  return sorted_indices;
}
