//problem link:https://codeforces.com/problemset/problem/1863/A
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

    	int n,a,q;
    	cin>>n>>a>>q;
    	string s;
    	cin>>s;
    	int p=0;
    	for(int i=0;i<s.size();i++){

    		if(s[i]=='+')
    			p++;
    	}

    	// no of ppl online and + not
    	if(a+p<n){
    		cout<<"NO"<<endl;
    	}
    	else{

    		bool found=false;
    		if(a>=n){
    			cout<<"YES"<<endl;
    			//cout<<a<<endl;
    		}
    		else{
    		for(int i=0;i<s.size();i++){
    			if(a==n){
    				found=true;
    				break;
    			}
	    		if(s[i]=='+'){
	    			a++;
	    			if(a==n){
    				found=true;
    				break;
    			}
	    		}
	    		else{
	    			a--;
	    		}
    		}
    		//cout<<a<<endl;
    		if(a>=n){
    			cout<<"YES"<<endl;
    			//cout<<a<<endl;
    		}
    		else{
    			cout<<"MAYBE"<<endl;
    			//cout<<a<<endl;
    		}
    	}

    	}

    	t--;
    }

    return 0;
}