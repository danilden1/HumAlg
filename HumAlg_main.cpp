//
// Created by Данил on 11.11.2018.
//
#include <iostream>
#include "HumAlg_lib.h"

using namespace std;

int main(){

    Matrix A;
    Matrix B;
    int dA[4][4] = {{1,7,1,3},
                    {1,6,4,6},
                    {17,1,5,1},
                    {1,6,10,4}};
    A.rows=4;
    A.cols=4;
    A.data=*dA;
    A.matrix_print(A);
    cout << endl;
    B = A.get_zero(A);
    B.matrix_print(B);

    return 0;
}