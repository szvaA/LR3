#include <iostream>
#include "lr3func.h"
using namespace std;

int main()
{
    int dim1, dim2;
    double *vec2;
    while (true) {
        cout << "Введите размерность первого вектора: ";
        cin >> dim1;
        cout << "Введите размерность второго вектора: ";
        cin >> dim2;
        if (dim1 == 0 || dim2 == 0) break;
        if (dim1 < 0 || dim2 < 0) {
            cout << "Введена некоректная размерность. Введите снова. ";
            continue;
        }
        vec1 = new double[dim1];
        vec2 = new double[dim2];
        cout << "Введите координаты первого вектора: ";
        for (int i = 0; i < dim1; i++)
            cin >> vec1[i];
        cout << "Введите координаты второго вектора: ";
        for (int i = 0; i < dim2; i++)
            cin >> vec2[i];

    }
    CVector vec1;
    CVector vec2;
    double scalars = scalar(vec1, vec2);
    cout << "Скалярное проивездение: "<< scalars << endl;

    float mod1 = vec1.mod();
    cout << "Модуль первого вектора: "<< mod1 << endl;
    float mod2 = vec2.mod();
    cout << "Модуль второго вектора: "<< mod2 << endl;

    cout << "Сумма векторов: "<< endl;
    summ(vec1, vec2);

    cout << "Разность векторов: " << endl;
    diff(vec1, vec2);



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


