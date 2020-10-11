#include<stdio.h>

struct Complex{
    int real;
    int img;
};
int main()
{
    Complex c1,c2,c;
    printf("enter the real and imaginay value for first:");
    scanf("%d%d",&c1.real,&c1.img);
    printf("enter the real and imaginary value for second:");
    scanf("%d%d",&c2.real, &c2.img);
    c.real = c1.real+c2.real;
    c.img = c1.img+c2.img;
    printf("The sum is: %d + %d i",c.real,c.img);
    return 0;
}
