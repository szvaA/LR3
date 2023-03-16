
class CVector{
    friend void scalar(double* ,double* ,int );
    friend void vectorangle(double* ,double* ,int );
    friend void modul(double* , double* , int );
    friend void sum(double* , double* , int );
    friend void vichit(double* , double* , int  , float );
protected:
    int m_size;
    double *m_pdata;
public:
    //explicit CVector(int size=0, double*pdata=nullptr);
    CVector(const CVector &v);
    ~CVector();
    void clear();
    //bool copy(int size, double *pdata);
    bool copy(const CVector &v);
    //void out();
protected:
    void init();
};
