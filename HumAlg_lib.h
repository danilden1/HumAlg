//
// Created by Данил on 11.11.2018.
//

#ifndef HUMALG_HUMALG_H
#define HUMALG_HUMALG_H

#include <vector>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

typedef pair<int, int> PInt;
typedef vector<int> VInt;
typedef vector<VInt> VVInt;
typedef vector<PInt> VPInt;

const int inf = INT_MAX;

class Matrix {
public:
    int rows;
    int cols;
    int *data;
    int *result;
public:
    Matrix hungarian_algorithm (const Matrix mat);
    void matrix_print(const Matrix mat);
    Matrix get_zero (const Matrix mat);

};
//class table:Matrix{};

#endif //HUMALG_HUMALG_H