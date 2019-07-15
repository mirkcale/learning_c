#include <iostream>
using namespace std;

class complex
{
public:
    complex() : real(0.0), imag(0.0){};
    complex(double real, double imag) : real(real), imag(imag){};
    friend complex operator+(const complex &A, const complex &B);
    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }

private:
    double real;
    double imag;
};

complex operator+(const complex &A, const complex &B)
{
    return complex(A.real + B.real, A.imag + B.imag);
}

int main()
{
    complex c1(4.3, 5.85);
    complex c2(2.2, 3.7);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}