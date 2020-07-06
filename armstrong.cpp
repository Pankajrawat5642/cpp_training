#include<iostream>
using namespace std;
int main()
{
	int n, temp, num=0, rem;
	cout<<"Enter the number : ";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		num=num + rem*rem*rem;
		temp=temp/10;
	}
	if(num==n)
	{
		cout<<"Armstrong Number";
	}
	else
	{
		cout<<"No";
	}


	return 0;	
}
