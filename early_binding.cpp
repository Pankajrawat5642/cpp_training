#include<iostream>
using namespace std;

class Upper
{
        public:
                void check()
		{
			cout<<"from upper class";
		}
};

class Lower:public Upper
{
        public:
                void check()
                {
                        cout<<"from lower class";
                }
};

int main()
{
        Upper *up = new Lower();
        up->check();
        return 0;
}

