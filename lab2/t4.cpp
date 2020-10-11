#include <iostream>
using namespace std;

class Value
{
 int X,Y;
public:

Value()
{
X = 0;
Y = 0;
}
Value(int A, int B)
{
    X = A;
    Y = B;
}
Value(Value &v)
{
    X=v.X;
    Y=v.Y;
}

~Value()
{
cout << endl << "Destructor Called" << endl;
}

void putValues()
{
cout << endl << "Value of X : " << X;
cout << endl << "Value of Y : " << Y << endl;
}
};

int main()
{
    Value v1(5,6), v2(v1),v3;
    cout << endl <<"The first value is : ";
    v1.putValues();
    v2.putValues();
    v3.putValues();
    return 0;
}
