
#include <iostream>

using namespace std;

template <class T>
class Polygon
{
protected:
    T length;

public:
    Polygon() {}
    ~Polygon() {}
    void setLength(T);
    void getLength() const;
};

template <class T>
class Pentagon : public Polygon<T>
{
public:
    Pentagon() {}
    ~Pentagon() {}
    void getPerimeter() const;
};

int main()
{
    Pentagon<int> pen;
    pen.setLength(10);
    pen.getLength();
    pen.getPerimeter();

    return 0;
}

template <class T>
void Polygon<T>::setLength(T length)
{
    this->length = length;
}

template <class T>
void Polygon<T>::getLength() const
{
    cout << "Length of the sides of polygon: " << length << endl;
}

// The this pointer is needed to access to protected member in base class due to the way that c++ handles templates and inheritance
template <class T>
void Pentagon<T>::getPerimeter() const
{
    cout << "Perimeter of the pentagon: " << 5 * this->length;
}
