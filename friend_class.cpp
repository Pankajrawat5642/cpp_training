#include<iostream>
using namespace std;

class Upper
{
	friend class lower;
	int a;
	private:
		void put(int b)
		{
			a= b;
		}
};

class Lower
{
	public:
		void show(Upper c)
		{
			b=c.a;
			cout<<"here is data a= "<<b;
		}
};

int main()
{
	Upper put(5);
	Lower l;
	l.show();
	return 0;
}
