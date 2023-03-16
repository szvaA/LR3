#include <iostream>
#include "lr3func.h"
using namespace std;

int main()
{
    int dimension;
    double *vector1;
    double *vector2;
    double *vector;
    while (true) {
        cout << "Введите размерность: ";
        cin >> dimension;
        if (dimension == 0) break;
        if (dimension < 0) {
            cout << "Введена некоректная размерность. Введите снова. ";
            continue;
        }
        vector1 = new double[dimension];
        vector2 = new double[dimension];
        cout << "Введите координаты первого вектора: ";
        for (int i = 0; i < dimension; i++)
            cin >> vector1[i];
        cout << "Введите координаты второго вектора: ";
        for (int i = 0; i < dimension; i++)
            cin >> vector2[i];
        vector.scalar(double* vector1, double* vector2);
        //они не выводятся
    }

    return 0;
}

//int main()
//{
//
//    int dimension;
//    cout << "Введите размерность: ";
//    cin >> dimension;
//    double *vector = new double [dimension];
//    cout << "Введите координаты вектора: ";
//    for (int i=0; i<dimension; i++)
//        cin >> vector[i];
//    //CVector vector1(dimension, vector);
//    //    vector1.out();
//    //    CVector vector2(vector1);
//    //    vector2.out();
//    //    CVector vector3;
//    //    vector3.copy(vector1);
//    //    vector3.out();
//    return 0;
//}


