#include <iostream>
using namespace std;
int main()
{
    int n,x,y,z,s;

    cout<<"DETERMINE IF THE THREE DIGIT NUMBER IS ARMSTRONG OR NOT"<<endl;
    cout<<"Enter the THREE digit number you wish to check"<<endl;
    cin>>n;

    if(n>=100 && n<=999)
    {
        cout<<"NUMBER IN RANGE"<<endl;

        x=n%10;
        y=n/10;
        z=y%10;
        s=y/10;

        if(n==(x*x*x)+(z*z*z)+(s*s*s))
        {
            cout<<"NUMBER IS AN ARMSTRONG"<<endl;
        }
        else
        {
            cout<<"NUMBER IS NOT AN ARMSTRONG"<<endl;
        }
    }
    else
    {
        cout<<"NUMBER OUT OF RANGE"<<endl;
    }

    return 0;

}


