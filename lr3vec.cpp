#include <iostream>
#include "lr3func.h"
#include <cmath>
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

void scalar(double*vector1,double*vector2,int dimension){
    float s=0;
    for (int i=0; i<dimension; i++)
        s=s+vector1[i]*vector2[i];

    std::cout << s << std::endl;
}
void vectorangle(double*vector1,double*vector2,int dimension)
{
    float vectorscalar, cos, angle;
    double l1,l2;
    l1=sqrt(scalar(vector1,vector1, dimension));
    l2=sqrt(scalar(vector2, vector1, dimension));
    vectorscalar=scalar(vector1,vector2,dimension);
    cos=(vectorscalar/l1/l2);
    angle=round((acos(cos)*180/M_PI));
    std::cout << angle << std::endl;
}
void modul(double*vector1, double*vector2, int dimension)
{
    double sum = 0;
    for (int j = 0; j < dimension; j++)
    {
        vector1[j] -=vector2[j];
        sum += vector1[j]*vector1[j];
    }
    std::cout<<sqrt(sum)<<std::endl;
};

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