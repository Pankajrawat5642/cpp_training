#include <iostream>
using namespace std;

struct emp
{
    char name[10];
    int age;
    char desig[10];
};

int main()
{
    emp e1;
    
    cout << "Enter name of the employee: ";
    cin.get(e1.name, 10);
    cout << "Enter age: ";
    cin >> e1.age;
    cout << "Designation: ";
    cin >> e1.desig ;

   
    cout << "Name: " << e1.name << endl;
    cout <<"Age: " << e1.age << endl;
    cout << "Designation: " << e1.desig << endl;

    return 0;
}
