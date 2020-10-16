#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex()
    {
        this->real =0;
        this->img = 0;
    }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    Complex operator++()
    {
        Complex c;
        c.real = ++real;
        c.img = ++img;
        return c;
    }
    Complex operator++(int)
    {
        Complex c;
        c.real = real++;
        c.img = img++;
        return c;
    }
    void display()
    {
        cout<<real<<" + i "<<img<<endl;
    }

};
int main()
{
    Complex c1(5, 2),c, c2;
    c = ++c1;
    c.display();
    c1.display();
    c2 = c1++;
    c2.display();
    c1.display();
    return 0;
}
