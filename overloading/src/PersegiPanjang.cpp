#include <iostream>
#include "include/PersegiPanjang.hpp"
#include <stdlib.h>

using namespace std;

persegiPanjang::persegiPanjang() {}

persegiPanjang::persegiPanjang(float MPx, float MPy, float l, float w)
{
    this->xmin = MPx - l / 2;
    this->xmax = MPx + l / 2;

    this->ymin = MPy - w / 2;
    this->ymax = MPy + w / 2;
}

bool persegiPanjang::operator==(persegiPanjang const &def) const
{
    if (this->xmin == this->xmax || this->ymax == this->ymin || def.xmin == def.xmax || def.ymax == def.ymin)
        return false;
    if (this->xmin >= def.xmax || def.xmin >= this->xmax)
        return false;
    if (this->ymin >= def.ymax || def.ymin >= this->ymax)
        return false;
    return true;
}

persegiPanjang persegiPanjang::operator+(persegiPanjang const &def)
{
    float MPx, MPy, l, w;
    if (*this == def)
    {
        persegiPanjang temp(0, 0, 0, 0);

        temp.xmin = min(this->xmin, def.xmin);
        temp.xmax = max(this->xmax, def.xmax);

        temp.ymin = min(this->ymin, def.ymin);
        temp.ymax = max(this->ymax, def.ymax);

        return temp;
    }
    else
        cout << "Persegi panjang tidak beririsan" << endl;
}

persegiPanjang persegiPanjang::operator-(persegiPanjang const &def)
{
    float MPx, MPy, l, w;
    if (*this == def)
    {
        persegiPanjang temp(0, 0, 0, 0);

        temp.xmin = max(this->xmin, def.xmin);
        temp.xmax = min(this->xmax, def.xmax);

        temp.ymin = max(this->ymin, def.ymin);
        temp.ymax = min(this->ymax, def.ymax);

        return temp;
    }
    else
        cout << "Persegi panjang tidak beririsan" << endl;
}

void persegiPanjang::operator++(int)
{
    float temp_p, temp_l, MPx, MPy;

    temp_p = this->xmax - this->xmin;
    temp_l = this->ymax - this->ymin;

    MPx = temp_p / 2 + this->xmin;
    MPy = temp_l / 2 + this->ymin;

    temp_p = temp_p * 2;
    temp_l = temp_l * 2;

    this->xmax = MPx + temp_p / 2;
    this->xmin = MPx - temp_p / 2;

    this->ymin = MPy - temp_l / 2;
    this->ymax = MPy + temp_l / 2;
}

void persegiPanjang::operator--(int)
{
    float temp_p, temp_l, MPx, MPy;
    temp_p = this->xmax - this->xmin;
    temp_l = this->ymax - this->ymin;

    MPx = temp_p / 2 + this->xmin;
    MPy = temp_l / 2 + this->ymin;

    temp_p = temp_p / 2;
    temp_l = temp_l / 2;

    this->xmax = MPx + temp_p / 2;
    this->xmin = MPx - temp_p / 2;

    this->ymin = MPy - temp_l / 2;
    this->ymax = MPy + temp_l / 2;
}

float persegiPanjang::operator[](int index)
{
    if (index == 1)
    {
        return this->xmin;
    }
    else if (index == 2)
    {
        return this->xmax;
    }
    else if (index == 3)
    {
        return this->ymin;
    }
    else if (index == 4)
    {
        return this->ymax;
    }
}

void persegiPanjang::print()
{
    float temp_p, temp_l, MPx, MPy, area;

    temp_p = this->xmax - this->xmin;
    temp_l = this->ymax - this->ymin;

    MPx = temp_p / 2 + this->xmin;
    MPy = temp_l / 2 + this->ymin;

    area = temp_p * temp_l;

    cout << "titik tengah (x) : " << MPx << endl;
    cout << "titik tengah (y) : " << MPy << endl;
    cout << "panjang : " << temp_p << endl;
    cout << "lebar : " << temp_l << endl;
    cout << "Nilai xmin : " << this->xmin << endl;
    cout << "Nilai xmax : " << this->xmax << endl;
    cout << "Nilai ymin : " << this->ymin << endl;
    cout << "Nilai ymax : " << this->ymax << endl;
    cout << "Luasan persegi panjang : " << area << endl
         << endl;
}