#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>
#include "../HumAlg_lib.h"
#include <iostream>

using namespace std;

void TEST (Matrix A, Matrix B){
    //Matrix : table;
    int error = true;
    //A.matrix_print(A);
    for (int col = 0; col < A.cols; col++) {
        if (A.data[col] != B.data[col]) {
            error = false;
        }
    }
    cout << endl;
    if (error) {
        cout << "Passed" << endl;
        cout << endl;
    }
    else {
        cout << "FALED!!!!" << endl;
        A.matrix_print(A);
        cout << endl;
    }
}
int main() {
    cout << "Start testing" << endl;
    Matrix A;
    Matrix B;
    //test 1
    int dA1[5][5] = {{7,3,6,9,5},
                     {7,5,7,5,6},
                     {7,6,8,8,9},
                     {3,1,6,5,7},
                     {2,4,9,9,5}};
    A.rows=5;
    A.cols=5;
    A.data=*dA1;
    int dB1[1][5] = {5,4,3,2,1};
    B.rows=1;
    B.cols=5;
    B.data=*dB1;
    cout << "test 1" << endl;
    cout << endl;
    A.matrix_print(A);
    cout << endl;
    TEST (A.veng(A),B);

}
