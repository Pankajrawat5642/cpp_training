#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int len;
		int breadth;
		Rectangle( int l, int b )
		{
			len = l;
			breadth = b;
		}
		int printArea()
		{
			return len * breadth;
		}
};
int main()
{
	Rectangle rt1( 7, 4 );
	Rectangle rt2( 4, 5 );
	cout<<"Area of first rectangle"<<rt1.printArea()<<endl;
	cout<<"Area of second rectangle"<<rt2.printArea()<<endl;
	return 0;
}
