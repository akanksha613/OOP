#include<iostream>
using namespace std;

class Complex

{
int real,imag;

public:
Complex()
{
    real =0;
    img=0;
}
void get_data()
{
cout<<"enter real &img: ";
cin>>real>>imag;
}

friend Complex operator+(Complex,Complex);

void display()
{
cout<<"The sum is: "<<real<<"+i"<<imag;
}
};



Complex operator+(Complex c1,Complex c2)
{
Complex temp;
temp.real=c1.real+c2.real;
temp.imag=c1.imag+c2.imag;
return(temp);
}


int main()
{
Complex c1,c2;
c1.get_data();
c2.get_data();

Complex c=c1+c2;

c.display();


return(0);



}
