#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

        string s;
        cin>>s;

        int x=s[1]-48;
        char f=s[0];
        //cout<<x<<endl;
        for(int i=1;i<x;i++){
            cout<<f<<i<<endl;
        }

        for(int i=x+1;i<=8;i++){
            cout<<f<<i<<endl;
        }
        char l='a';
        char z='h';
        //int doga=1;
        for(int i=l;i<=z;i++){

            if(i!=f){
                char holder=i;
                cout<<holder<<x<<endl;
            }
            
        }

    	t--;
    }

    return 0;
}