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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;

    	string r;
    	cin>>r;

    	ll zero=0;
    	ll one=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){
    			zero++;
    		}
    		else{
    			one++;
    		}
    	}

    	bool canwin=true;
    	ll len=n-1;
    	ll zero_an=0;
    	ll one_an=0;
    	for(int i=0;i<len-1;i++){

    		if(r[i]=='0'){
    			zero_an++;
    		}
    		else{
    			one_an++;
    		}

    		
    	}

    	if(one-zero_an>=1 && zero-one_an>=1){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}