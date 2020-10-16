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
    Complex operator+(Complex x)
    {
        Complex c;
        c.real = real+ x.real;
        c.img = img + x.img;
        return c;
    }
};
int main()
{
    Complex c1, c2, c;
    c1.get_data();
    c2.get_data();
    c= c1+c2;
    c.display();
    return 0;
}