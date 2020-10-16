# include <iostream>
using namespace std;

class Matrix{
    int m[3][3];
    public:
    void get_data()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3;j++)
            {
                cin>>m[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3;j++)
            {
                cout<<m[i][j];
            }
            cout<<endl;
        }
    }
    friend Matrix operator*(Matrix, Matrix);
};
Matrix operator*(Matrix a, Matrix b)
{
    Matrix c;
    int sum =0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                sum += sum + a.m[i][k]*b.m[k][j];

            }
            c.m[i][j]=sum;
            sum=0;
        }
    }
    return c;
}
int main()
{
    Matrix a,b,c;
    cout<<"Enter the elements of first matrix ";
    a.get_data();
    cout<<"Enter the elemrnts of second matrix";
    b.get_data();
    c=a*b;
    cout<<"The product is: ";
    c.display();
}