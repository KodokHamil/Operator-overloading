#ifndef __PersegiPanjang_HPP__
#define __PersegiPanjang_HPP__

using namespace std;

class persegiPanjang
{
    private:
        float xmin, xmax, ymin, ymax;

    public :
        persegiPanjang();
        persegiPanjang(float MPx, float MPy, float l, float w);
        bool operator==(persegiPanjang const &) const;
        persegiPanjang operator+(persegiPanjang const &);
        persegiPanjang operator-(persegiPanjang const &);
        void operator++(int);
        void operator--(int);
        float operator[](int);
        void print();
};

#endif