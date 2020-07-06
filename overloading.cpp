#include<iostream>
using namespace std;

class Find_area{
public:
        int areas(int r,int y)
        {
                int ar;
                ar = 3.14*r*y;
                return ar;
        }
        int areas(int r)
        {
                int ar;
                ar = r*r;
                return ar;
        }
};

int main(void)
{
        Find_area fr;
        cout<<fr.areas(2,3)<<endl;
        cout<<fr.areas(9);
        return 0;
}


