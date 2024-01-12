//
// Created by yahya on 1/12/2024.
//

#include "KNN.h"
#include <cmath> // For std::abs

class KNNDouble : public KNN<double> {
public:
    using KNN<double>::KNN;

    // Overridden similarity measure method for double data type
    virtual double similarityMeasure(const double& a, const double& b) const override {
        return std::abs(a - b); // Absolute difference as a measure of similarity
    }
};


