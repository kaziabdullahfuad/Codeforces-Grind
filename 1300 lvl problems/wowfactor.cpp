#include<iostream>
#include<numeric>
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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    ll n=s.size();

    vector<ll> front;
    ll start=0;
    ll prev=0;
    for(int i=0;i<n;i++){

    	//debug(s[i])
    	//cout<<i<<" ";
    	if(s[i]=='v'){
    		
    		if(start>=1){
    			prev++;
    		}
    		start++;
    		front.push_back(prev);
    	}
    	else{
    		
    		front.push_back(prev);
    		start=0;
    	}

    }
   // cout<<endl;
    //debug(start)

    start=0;
    prev=0;
    vector<ll> back(n);
    for(int i=n-1;i>=0;i--){

    	//debug(s[i])
    	//cout<<i<<" ";
    	if(s[i]=='v'){
    		
    		if(start>=1){
    			prev++;
    		}
    		start++;
    		back[i]=prev;
    	}
    	else{
    		
    		back[i]=prev;
    		start=0;
    	}

    }

    //printVector(front);
   	//printVector(back);
   	ll sum=0;
   	//debug(n)
   	for(int i=0;i<n;i++){

   		if(s[i]=='o' && (i>=1 && i<n-1)){

   			//debug(i)
   			sum+=front[i-1]*back[i+1];
   		}
   	}

   	cout<<sum<<endl;

    return 0;
}