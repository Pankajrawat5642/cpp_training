#include <iostream>
using namespace std;

class Area
{
	public:
		int length;
		int breadth;
		int ar;
	public:
		Area(int x, int y)
		{
			length = x;
			breadth = y;
			ar = x*y;
			cout<<"Area: "<<ar;
		}
};

int main()
{
	Area obj(5,10);
	return 0;
}

			
