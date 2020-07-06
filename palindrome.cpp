#include <iostream>
using namespace std;

int main()
{
     int num,re, rev = 0;

     cout << "Enter number: ";
     cin >> num;

     int n = num;

     do
     {
         re = num % 10;
         rev = (rev * 10)+re;
         num = num / 10;
     } while (num != 0);

    

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout<<"The number is not a palindrome.";
    return 0;
}
