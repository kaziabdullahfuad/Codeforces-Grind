#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="ababaaaa";
    cout<<s<<endl;

    int count=2;
    int i=0;

    while(count)
    {
        if(s[i]=='a')
        {
            s[i]='b';
            count--;
        }
        i++;
    }
    cout<<s;


    return 0;
}
