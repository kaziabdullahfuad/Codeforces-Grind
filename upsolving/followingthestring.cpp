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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);

    	vector<ll> holder(26);

    	string ans="";
    	
    	char c;
    	for(int i=0;i<n;i++){

    		for(int j=0;j<26;j++){

    			if(holder[j]==v1[i]){
    				c=j+97;
    				//cout<<j+96<<endl;
    				//cout<<c<<endl;
    				ans+=c;
    				holder[j]++;
    				break;
    			}
    		}
    		//cout<<ans<<endl;
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}