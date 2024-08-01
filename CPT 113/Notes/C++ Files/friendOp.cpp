#include <iostream>

using namespace std;

// Forward Declaration
class Real;
class Img;

class Calc
{
private:
    int real, img;

public:
    Calc() {}
    ~Calc() {}
    void print(const Real &, const Img &);
};

class Real
{
private:
    int real;

public:
    Real(int real = 0) { this->real = real; }
    ~Real() {}
    void operator*(const Img &);
    friend void Calc::print(const Real &, const Img &);
};

class Img
{
private:
    int img;

public:
    Img(int img = 0) { this->img = img; }
    ~Img() {}
    friend void Calc::print(const Real &, const Img &);
    friend void Real::operator*(const Img &);
};

int main()
{
    Real real(5);
    Img img(6);
    Calc calc;
    calc.print(real, img);
    real * img;

    return 0;
}

void Calc::print(const Real &left, const Img &right)
{
    cout << "The complex form is " << left.real << " + " << right.img << "i.\n";
}

void Real::operator*(const Img &obj)
{
    cout << "The complex form is " << this->real << " + " << obj.img << "i.\n";
}
