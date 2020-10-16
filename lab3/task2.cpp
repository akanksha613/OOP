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
    void display()
    {
        cout<<real<<" + i "<<img<<endl;
    }
    friend Complex operator++(Complex);
    friend Complex operator++(Complex, int);
};
Complex operator ++(Complex x)
{
    Complex c;
    c.real = ++x.real;
    c.img = ++x.img;
    return c;
}
Complex operator++(Complex x,int )
{
    Complex c;
    c.real = x.real++;
    c.img = x.img++;
    return c;

}
int main()
{
    Complex c1(1, 2),c2,c3;
   c2 = ++c1;
   cout<<"Prefix: "<<endl;
   c2.display();
   c1.display();
   cout<<"Postfix"<<endl;
   c3 = c1++;
   c3.display();
   c1.display();

    return 0;
}
