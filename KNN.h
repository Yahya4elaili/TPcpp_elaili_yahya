//
// Created by yahya on 1/12/2024.
//

// KNN.h
#ifndef KNN_H
#define KNN_H

#include <vector>
#include <utility> // For std::pair

template <typename T>
class KNN {
protected:
    int k;
    std::vector<T> data;

public:
    // Constructor
    explicit KNN(int k) : k(k) {}

    // Method to add data points
    void addDataPoint(const T& point) {
        data.push_back(point);
    }

    // Pure virtual method for similarity measure
    virtual double similarityMeasure(const T& a, const T& b) const = 0;

    // Method to find the k-nearest neighbours of a given point
    std::vector<T> findNearestNeighbours(const T& point) const;
};

#endif // KNN_H
