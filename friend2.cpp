
#include <iostream>
using namespace std;

class Upper
{
	friend class Lower;

	public:
		Upper() : Secret(0){}
		void printMember()
		{
			cout << Secret << endl;
		}
	private:
		int Secret;
};

class Lower
{
	public:
		void change( Upper& Lower, int x )
		{
			Lower.Secret = x;
		}
};

int main()
{
	Upper up;
	Lower low;
	up.printMember();
	low.change( up, 5 );
	up.printMember();
	return 0;
}

