#include <cmath>
#define _USE_MATH_DEFINES
class CVector{
protected:
    int m_size;
    double *m_pdata;
    friend void scalar(double* ,double* ,int );
    friend void vectorangle(double* ,double* ,int );
    friend void modul(double* , double* , int );
    friend void sum(double* , double* , int );
    friend void vichit(double* , double* , int  , float );
public:
    explicit CVector(int size=0, double*pdata=nullptr);
    CVector(const CVector &v);
    ~CVector();
    void clear();
    bool copy(int size, double *pdata);
    bool copy(const CVector &v);
    friend void scalar(double*vector1,double*vector2,int dimension)
    {
        double s=0;
        for (int i=0; i<dimension; i++)
            s=s+vector1[i]*vector2[i];

        std::cout << s << std::endl;
    };
    friend void vectorangle(double*vector1,double*vector2,int dimension)
    {
        float vectorscalar, cos, angle;
        double l1,l2;
        l1=sqrt(scalar(vector1,vector1, dimension));
        l2=sqrt(scalar(vector2, vector1, dimension));
        vectorscalar=scalar(vector1,vector2,dimension);
        cos=(vectorscalar/l1/l2);
        angle=round((acos(cos)*180/M_PI));
        std::cout << angle << std::endl;
    };
    friend void modul(double*vector1, double*vector2, int dimension)
    {
        double sum = 0;
        for (j = 0; j < dimension; j++)
        {
            vector1[j] -=vector2[j];
            sum += vector1[j]*vector1[j];
        }
        std::cout<<sqrt(sum)<<std::endl;
    };
    friend void sum(double*vector1, double*vector2, int dimension);// это же одно и то же.....
    friend void vichit(double*vector1, double*vector2, int dimension, float number);//
    //void out();
protected:
    void init();
};