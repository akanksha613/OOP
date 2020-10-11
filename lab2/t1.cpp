#include<iostream>
#include<iomanip>
using namespace std;

class Student{
    char name[50];
    int roll;
    float marks;
    char address[50];
public:
    void get_data();
    void show_data();

};
void Student::get_data()
{
    cout<<"Enter the name of student";
    cin>>name;
    cout<<"Enter the roll no of student";
    cin>>roll;
    cout<<"Enter the marks of student";
    cin>>marks;
    cout<<"Enter the address of student";
    cin>>address;
}
void Student::show_data()
{
    cout<<"Name:"<<name<<"  "<<"Roll. no: "<<roll<<"  "<<"Marks: "<<marks<<"  "<<"Address: "<<address<<endl;
}
int main()
{
    Student s;
    s.get_data();
    s.show_data();
    return 0;

}
