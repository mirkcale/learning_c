#include <iostream>
using namespace std;

class complex
{
public:
    complex() : real(0.0), imag(0.0){};
    complex(double real, double imag) : real(real), imag(imag){};
    complex operator+(const complex &A) const
    {
        complex B;
        B.imag = this->imag + A.imag;
        B.real = this->real + A.real;
        return B;
        // return complex(this->real + A.real, this->imag + A.imag);
    };
    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }

private:
    double real;
    double imag;
};

int main()
{
    complex c1(4.0, 3.14);
    complex c2(2.3, 5.5);
    complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}