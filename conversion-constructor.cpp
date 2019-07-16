#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0): real(real), imag(imag){ }
    friend ostream &operator<<(ostream &out, Complex &c)
    {
        return out << c.real << " + " << c.imag << "i";
        ;
    }
};

int main(){
    Complex a(10, 20);
    cout <<a<<endl;

    a = 25.6;
    cout <<a<<endl;

    return 0;
}