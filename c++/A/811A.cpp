#include<iostream>>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    long long i,j,k;
    long long n;
    long long a,b;

    cin>>a>>b;
    i=1;

    while(true)
    {
        //vladik
        if(i>a)
        {
            cout<<"Vladik";
            return 0;
        }

        else
        {
            a-=i;
            i++;
        }

        //valera
        if(i>b)
        {
            cout<<"Valera";
            return 0;
        }

        else
        {
            b-=i;
            i++;
        }
    }

    return 0;
}