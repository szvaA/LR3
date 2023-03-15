#include <iostream>
#include "lr3func.h"
#define _USE_MATH_DEFINES
using namespace std;

//CVector::CVector(int dimension, double* vector1, double* vector2){
//    init();
//    copy(size, vector1, vector2);
//}

CVector::~CVector(){
    clear();
    //cout <<"Вызван дестркутор" << endl;
}
CVector::CVector(const CVector &v){
    init();
    copy(v);
}

//void CVector::out()
//{
//    cout << "Num: " << m_size << " Data: ";
//    for (int i=0; i<m_size; i++){
//        cout << m_pdata[i] << ' ';
//    }
//    cout << endl;
//}

void CVector::init(){
    m_size = 0;
    m_pdata = nullptr;
}
void CVector::clear(){
    if (m_pdata) delete [] m_pdata;
    init();
}
//bool CVector::copy(int dimension, double *vector1, double* vector2){
//    //if (pdata == m_pdata ) return true;
//    //double *pd=nullptr;
//    if (size)
//    {
//        pd = new double[size];
//        if (pd)
//        {
//            for (int i = 0; i < size; i++)
//            {
//                pd[i] = pdata[i];
//            }
//        }
//        else
//        {
//            return false;
//        }
//    }
//    clear();
//    m_pdata = pd;
//    m_size = size;
//    return true;
//}
bool CVector::copy(const CVector &v){
    if (this == &v) return true;
    return copy(v.m_size, v.m_pdata);
}