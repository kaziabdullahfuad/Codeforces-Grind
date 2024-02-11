// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    // 3*2= 6 combinations of +,-,*
    // 1.+ and - 2.- and + 3.+ and * 4.* and + 5.- and * 6.* and -

    //cout<<a+b+-c<<endl;

    if(a+b-c==d){
    	cout<<"YES"<<endl;
    }
    else if(a-b+c==d){
    	cout<<"YES"<<endl;
    }
    else if(a+b*c==d){
    	cout<<"YES"<<endl;
    }
    else if(a*b+c==d){
    	cout<<"YES"<<endl;
    }
    else if(a-b*c==d){
    	cout<<"YES"<<endl;
    }
    else if(a*b-c==d){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }



    return 0;
}