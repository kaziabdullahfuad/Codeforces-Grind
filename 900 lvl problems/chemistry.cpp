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

    	ll n,k;
    	cin>>n>>k;

    	string s;
    	cin>>s;

    	map<char,ll>m1;

    	for(int i=0;i<n;i++){

    		m1[s[i]]++;
    	}
    	ll odd=0;
    	for(auto x:m1){
    		//cout<<x.first<<" "<<x.second<<endl;

    		if(x.second%2==1){
    			odd++;
    		}
    	}

    	//debug(odd)
    	if(m1.size()==1){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// kotoo gula odd shorate hobe
    		ll rem=odd-1;
    		//debug(rem)

    		if(k>=rem){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}