#include <iostream>
#include "lr3func.h"
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

CVector::CVector(int size, double* pdata){
    init();
    copy(size, pdata);
}

CVector::~CVector(){
    clear();
}
CVector::CVector(const CVector &v){
    init();
    copy(v);
}
double scalar(const CVector& vec1, const CVector& vec2) //скалярное произведение
{
    float scal = 0;
    int a = min(vec1.m_size, vec2.m_size);
    for(int i = 0; i < a; i++){
        scal += vec1.m_pdata[i]*vec2.m_pdata[i];
    }
    return scal;
}
float CVector::mod(){ //модуль
    float m = scalar(*this, *this);
    return sqrt(m);
}

void summ(const CVector& vec1, const CVector& vec2){ //сумма
    int a = max(vec1.m_size, vec2.m_size);
    if (vec1.m_size < vec2.m_size)
        for (int i = vec2.m_size - vec1.m_size; i < vec2.m_size; i ++)
            vec1.m_pdata[i] = vec1.m_pdata[i] + 0;
    else
        for (int i = vec1.m_size - vec2.m_size; i < vec1.m_size; i ++)
            vec2.m_pdata[i] = vec2.m_pdata[i] + 0;
    double* k = new double[a];
    for(int i = 0; i < a; i ++)
        k[i] = vec1.m_pdata[i] + vec2.m_pdata[i];
    CVector v(a, k);
    v.out();
}
void diff(const CVector& vec1, const CVector& vec2){ //разность
    int a = max(vec1.m_size, vec2.m_size);
    if (vec1.m_size < vec2.m_size)
        for (int i = vec2.m_size - vec1.m_size; i < vec2.m_size; i ++)
            vec1.m_pdata[i] = vec1.m_pdata[i] + 0;
    else
        for (int i = vec1.m_size - vec2.m_size; i < vec1.m_size; i ++)
            vec2.m_pdata[i] = vec2.m_pdata[i] + 0;
    double* k = new double[a];
    for(int i = 0; i < a; i ++)
        k[i] = vec1.m_pdata[i] - vec2.m_pdata[i];
    CVector v(a, k);
    v.out();
}

void CVector::out()
{
    //cout << "Data: ";
    for (int i=0; i<m_size; i++){
        cout << m_pdata[i] << ' ';
    }
    cout << endl;
}
void CVector::init(){
    m_size = 0;
    m_pdata = nullptr;
}
void CVector::clear(){
    if (m_pdata) delete [] m_pdata;
    init();
}
bool CVector::copy(int size, double *pdata){
    if (pdata == m_pdata ) return true;
    double *pd=nullptr;
    if (size)
    {
        pd = new double[size];
        if (pd)
        {
            for (int i = 0; i < size; i++)
            {
                pd[i] = pdata[i];
            }
        }
        else
        {
            return false;
        }
    }
    clear();
    m_pdata = pd;
    m_size = size;
    return true;
}
bool CVector::copy(const CVector &v){
    if (this == &v) return true;
    return copy(v.m_size, v.m_pdata);
}







//float CVector::addit(const CVector &, const CVector &) {
//}

//float addit(const CVector&, const CVector& );
//"Num: " << m_size <<
//float CVector::addit(const CVector& vec1, const CVector& vec2) {
//    double j;
//    cout << "Введите число: " << endl;
//    cin >> j;
//    int sizeV1 = vec1.m_size;
//    int sizeV2 = vec2.m_size;
//    double j = new double[sizeV1];
//    double* f1 = new double[sizeV1];
//    for(int i = 0; i < sizeV1; i ++)
//
//}