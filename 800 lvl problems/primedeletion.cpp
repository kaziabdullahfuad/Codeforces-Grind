// problem link:https://codeforces.com/problemset/problem/1861/A
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
bool isPrime(ll val){

	bool found=true;

	for(int i=2;i*i<=val;i++){

		if(val%i==0){
			found=false;
			break;
		}
	}

	return found;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	// from 1 to 9 the primes are 2,3,5,7
    	// so non primes are 1,4,6,8,9

    	string s;
    	cin>>s;
    	ll conv_val;
    	bool found=false;
    	for(int i=0;i<s.size()-1;i++){
    		//cout<<i<<endl;
    		for(int j=i+1;j<s.size();j++){
    			//cout<<j<<endl;
    			string holder="";
			    char first=s[i];
			    char second=s[j];
			    holder=holder+first+second;
			    //cout<<holder<<endl;
    			conv_val=stoi(holder);
    			//cout<<conv_val<<endl;

    			found=isPrime(conv_val);

    			if(found){

    				break;
    			}
    		}
    		if(found){

    			break;
    		}
    	}

    	if(found){
    		cout<<conv_val<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}