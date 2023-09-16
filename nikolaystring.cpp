#include<iostream>
#include<string>
using namespace std;
string change1(string &s,int operations)
{
    int i=0;

    cout<<s<<endl;
    cout<<operations<<endl;

    while(operations)
    {
        if(s[i]=='a')
        {
            s[i]='b';
           // cout<<s[i]<<endl;
            operations--;
        }
        i++;
    }

    return s;
}
int modify(string &s)
{
    int len=s.length();

    if(len<=1)
    {
        cout<<"Equal distribution of a and b not possible"<<endl;
        return -1;
    }

    int halflength=len/2;
    int count1=0;//counts occurences of a
    int count2=0;//counts occurences of b

    for(int i=0;i<len;i++)
    {
        if(s[i]=='a'){

            count1++;
        }
        else{

            count2++;
        }

    }

    //cout<<count1<<endl<<count2;
    int operations;
    //cout<<endl;

    if(count1==count2)
    {
        operations=0;

        return operations;


    }
    else if(count1>count2)//meaning number of a's are higher
    {
        operations=halflength-count2;
        //cout<<operations<<endl;

        //change1(s,operations);
        int keepon=operations;
        int i=0;
        while(keepon)
        {
            if(s[i]=='a')
            {
                s[i]='b';
                keepon--;
            }
            i++;
        }

        return operations;


    }
    else
    {
        operations=halflength-count1;

        int keepon=operations;
        int i=0;
        while(keepon)
        {
            if(s[i]=='b')
            {
                s[i]='a';
                keepon--;
            }
            i++;
        }

        return operations;

    }


}
int main()
{

    cout<<"Enter your string: ";
    string  s;
    cin>>s;

    //cout<<s<<endl;
    cout<<"No of operations needed to achieve equal amounts of a and b: ";

    cout<<modify(s);

    cout<<endl;

    cout<<"The string after balancing the numbers of a's and b's: ";
    cout<<s<<endl;






    return 0;
}
