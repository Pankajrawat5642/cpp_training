#include<iostream>
using namespace std;

int main()
{
	int a;
	int *ptr;
        cout<<"Enter a: ";
	cin>>a;
	ptr = &a;

	cout<< "a is : "<< a<<endl;
	cout<< "address is : "<<&a<<endl;

	return 0;
}
