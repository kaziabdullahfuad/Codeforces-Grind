#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    cout<<"The string is: "<<s<<endl;

    for(int i=0;i<s.size();i++){

    	if(s[i]>=65 && s[i]<=90){
    		cout<<"The character "<<s[i]<<" is uppercase"<<endl;
    	}
    	else if(s[i]>=97 && s[i]<=122){
    		cout<<"The character "<<s[i]<<" is lowercase"<<endl;
    	}
    }

    return 0;
}