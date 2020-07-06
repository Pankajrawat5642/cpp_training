#include<iostream>
using namespace std;

class A
{
	public:
		void test()
		{
			cout<<"Working in parent";
		}
};

class B: public A
{
	public:
		void test()
		{
			cout<<"working in child";
		}
};

int main(void)
{
	A obj =B();
	obj.test();
	return 0;
}

