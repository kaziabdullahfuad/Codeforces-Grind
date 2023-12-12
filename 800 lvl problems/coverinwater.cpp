// problem link: https://codeforces.com/problemset/problem/1900/A
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

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int turn=0;
    	string holder;
    	for(int i=0;i<s.size();i++){

    		if(s[i]=='.'){
    			s[i]='w';
    			turn++;
    		}
    	}
    	//cout<<turn<<endl;
    	//cout<<s<<endl;
    	bool found=false;
    	for(int i=1;i<s.size()-1;i++){

    		if(s[i]=='w'){
    			if(s[i-1]=='w' && s[i+1]=='w'){
    				//cout<<s[i]<<endl;
    				found=true;
    				break;
    			}
    		}
    	}

    	if(found){
    		cout<<2<<endl;
    	}
    	else{
    		cout<<turn<<endl;
    	}

    	t--;
    }

    return 0;
}