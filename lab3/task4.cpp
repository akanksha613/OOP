#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex()
    {
        real=0;
        img = 0;
    }
    void get_data()
    {
        cout<<"Enter the real and imaginary part: ";
        cin>>real>>img;
    }
    void display()
    {
        cout<<"The sum is: "<<real<<" +i "<<img;
    }
     friend Complex operator*(Complex, Complex );
};
Complex operator*(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real*c2.real-c1.img*c2.img;
    c.img  = c1.real*c2.img+ c1.img*c2.real;
    return c;
}
int main()
{
    Complex c1, c2, c;
    c1.get_data();
    c2.get_data();
    c= c1*c2;
    c.display();
    return 0;
}