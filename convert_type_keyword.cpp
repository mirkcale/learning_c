/**
 * Ϊ��ʹǱ�ڷ��ո���ϸ����ʹ����׷�ݸ��ӷ��㣬ʹ��д��ʽ���ӹ淶��C++ ������ת�������˷��࣬���������ĸ��ؼ���������֧��
 * - `static_cast` ��������ת����һ�㲻�ᵼ�����ⷢ�������պܵ͡�
 * - `const_cast` ���� const ��� const��volatile ��� volatile ֮���ת����
 * - `reinterpret_cast` �߶�Σ�յ�ת��������ת�������ǶԶ�����λ�����½��ͣ�����������е�ת����������ݽ��е��������ǿ���ʵ�������� C++ ����ת����
 * - `dynamic_cast` ���� RTTI���������Ͱ�ȫ������ת�ͣ�Downcasting����
 * 
 * usage xxx_cast<newType>(data) eg: double scores = 95.5;int n = static_cast<int>(scores);
 */

#include <iostream>
#include <cstdlib>
using namespace std;
class Complex
{
public:
    Complex(double real = 0.0, double imag = 0.0) : m_real(real), m_imag(imag) {}

public:
    operator double() const { return m_real; } //����ת������
private:
    double m_real;
    double m_imag;
};
int main()
{
    //��������ȷ���÷�
    int m = 100;
    Complex c(12.5, 23.8);
    long n = static_cast<long>(m);                          //��ת����û����Ϣ��ʧ
    char ch = static_cast<char>(m);                         //խת�������ܻᶪʧ��Ϣ
    int *p1 = static_cast<int *>(malloc(10 * sizeof(int))); //��voidָ��ת��Ϊ��������ָ��
    void *p2 = static_cast<void *>(p1);                     //����������ָ�룬ת��Ϊvoidָ��
    double real = static_cast<double>(c);                   //��������ת������

    //������÷��Ǵ����
    float *p3 = static_cast<float *>(p1); //�����������������͵�ָ��֮�����ת��
    p3 = static_cast<float *>(0X2DF9);    //���ܽ�����ת��Ϊָ������
    return 0;
}