
class CVector{
    friend double scalar(const CVector& , const CVector& );
    friend void summ(const CVector&, const CVector& );
    friend void diff(const CVector& , const CVector& );
//private:
    //float mod();
    //float addit(const CVector&, const CVector& );
protected:
    int m_size;
    double *m_pdata;
public:
    explicit CVector(int size=0, double*pdata=nullptr);
    CVector(const CVector &v);
    ~CVector();
    void clear();
    bool copy(int size, double *pdata);
    bool copy(const CVector &v);
    void out();
    float mod();
    float addit(const CVector&, const CVector& );
protected:
    void init();
};