#include <iostream>
using namespace std;

struct emp
{
    char name[10];
    int age;
    char desig[10];
}e[3];

int main()
{
    
	for(int i=0;i<3;++i)
	{
	    cout << "Enter name of the employee: ";
	    cin >> e[i].name;
	    cout << "Enter age: ";
	    cin >> e[i].age;
	    cout << "Designation: ";
	    cin >> e[i].desig ;
	}

	for(int i=0;i<3;++i)
	{
	
	    cout << "Name: " << e[i].name << endl;
	    cout <<"Age: " << e[i].age << endl;
	    cout << "Designation: " << e[i].desig << endl;
	}
    return 0;
}

