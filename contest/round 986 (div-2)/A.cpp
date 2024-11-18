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

    int t;
    cin>>t;

    while(t){

    	ll n,a,b;
    	cin>>n>>a>>b;

    	string s;
    	cin>>s;

    	


    	ll x=0;
    	ll y=0;
    	bool found=false;

    	for(int k=1;k<=40;k++){

    		for(int i=0;i<n;i++){

	    		if(s[i]=='N'){
	    			y++;
	    		}
	    		else if(s[i]=='S'){
	    			y--;
	    		}
	    		else if(s[i]=='E'){
	    			x++;
	    		}
	    		else if(s[i]=='W'){
	    			x--;
	    		}

	    		if(x==a && y==b){
	    			found=true;
	    		}
    		}
    	}
    	
    	if(found==true){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    	

    	t--;
    }

    return 0;
}