//
// Created by Данил on 11.11.2018.
//
#include "HumAlg_lib.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;



void Matrix::matrix_print(Matrix A) {
    for(int row=0; row<A.rows; row++) {
        for (int col = 0; col < A.cols; col++) {
            cout << A.data[row * A.cols + col] << " ";
        }
        cout << endl;
    }
}


Matrix  Matrix::hungarian_algorithm (const Matrix A) {
    Matrix B;
    B.cols = A.cols;
    B.rows = A.rows;
    B.data = new int(A.cols * A.rows);
    B.data = A.data;

    int height = B.rows;
    int width = B.cols;

    int Hmax[height];
    int Wmax[width];

    B = B.get_zero(B); // в каждом столбце и каждой строке есть минимум по одному нулю

    return B;
}


Matrix Matrix::get_zero (const Matrix mat){
    Matrix A;
    A.cols = mat.cols;
    A.rows = mat.rows;
    A.data = new int(A.cols * A.rows);
    A.data = mat.data;
    //получаем нули в строках
    for (int row = 0; row < A.rows; row++){
        int min = INT_MAX;
        for(int col = 0; col < A.cols; col++){
            if(A.data[row * A.cols + col] < min)
                min = A.data[row * A.cols + col];
        }
        for(int col = 0; col < A.cols; col++)
            A.data[row * A.cols + col] = A.data[row * A.cols + col] - min;
    }
    A.matrix_print(A);
    cout << endl;
    //Получаем нули в столбцах
    for (int col = 0; col < A.cols; col++){
        int min = INT_MAX;
        for(int row = 0; row < A.rows; row++){
            if(A.data[row * A.cols + col] < min)
                min = A.data[row * A.cols + col];
        }
        for(int row = 0; row < A.rows; row++)
            A.data[row * A.cols + col] = A.data[row * A.cols + col] - min;
    }

    return A;
}

