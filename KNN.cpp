//
// Created by yahya on 1/12/2024.
//
#include "KNN.h"
#include <algorithm> // For std::sort

template <typename T>
std::vector<T> KNN<T>::findNearestNeighbours(const T& point) const {
    // Calculate similarity measure for each point
    std::vector<std::pair<double, T>> distances;
    for (const auto& p : data) {
        double distance = similarityMeasure(point, p);
        distances.push_back(std::make_pair(distance, p));
    }

    // Sort the points by their distance (similarity measure)
    std::sort(distances.begin(), distances.end());

    // Select the top k points
    std::vector<T> neighbours;
    for (int i = 0; i < k && i < distances.size(); ++i) {
        neighbours.push_back(distances[i].second);
    }

    return neighbours;
}
