#include <iostream>
using namespace std;
class Upper;
class Lower
{
	public:
  	void print(Upper& x);
};

class Upper
{
	int a, b;
	friend void Lower::print(Upper& x);
	public:
	Upper() : a(1), b(2) { }
};

void Lower::print(Upper& x)
{
	cout << "a is " << x.a << endl;
	cout << "b is " << x.b << endl;
}

int main()
{
	Upper obj1;
	Lower obj2;
 	obj2.print(obj1);
}
