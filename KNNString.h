//
// Created by yahya on 1/12/2024.
//

// KNNString.h
#ifndef KNN_STRING_H
#define KNN_STRING_H

#include "KNN.h"
#include <string>
#include <algorithm> // For std::min

class KNNString : public KNN<std::string> {
public:
    using KNN<std::string>::KNN;

    // Overridden similarity measure method for string data type
    virtual double similarityMeasure(const std::string& a, const std::string& b) const override {
        // Implementing a basic form of the Levenshtein distance
        const std::size_t len1 = a.size(), len2 = b.size();
        std::vector<std::vector<unsigned int>> d(len1 + 1, std::vector<unsigned int>(len2 + 1));

        d[0][0] = 0;
        for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
        for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

        for(unsigned int i = 1; i <= len1; ++i)
            for(unsigned int j = 1; j <= len2; ++j)
                d[i][j] = std::min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (a[i - 1] == b[j - 1] ? 0 : 1) });

        return d[len1][len2];
    }
};

#endif // KNN_STRING_H
