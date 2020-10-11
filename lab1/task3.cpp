#include<iostream>
using namespace  std;
#define PI 3.14

int area(int r)
{
  cout<<"Area of Circle: "<<endl;
  return PI*r*r;
}
int area(int l, int b)
{
  cout<<"Area of Rectangle:"<<endl;
  return l*b;
}

int main()
{
    cout<<area(5)<<endl;
    cout<<area(6,8);
    return 0;
}
