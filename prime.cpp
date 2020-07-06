#include<iostream>
using namespace std;

class Get
{
	public:
		int num;
	public:
		void getnumber()
		{
			cout<<"Enter number to check: ";
			cin>>num;
		}
};

class Check:public Get
{
	int flag =0;
	public:
		void check_prime()
		{
			for(int i=2; i<num;i++)
			{
				if(num%i == 0)
				{
					flag =1;
					break;
				}
			}
			if(flag == 0)
			{
				cout<<num<<"is a prime";
			}
			else
			{
				cout<<"nonprime";
			}
		}
	
};

int main(void)
{
	Check ch;
	ch.getnumber();
        ch.check_prime();
        return 0;
}

