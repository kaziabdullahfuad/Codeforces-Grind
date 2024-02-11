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

    	map<char,ll>  m1;

    	for(int i=0;i<n;i++){

    		m1[s[i]]++;
    	}

    	ll max_val=-1e18;

    	for(auto x:m1){

    		if(x.second>max_val){
    			max_val=x.second;
    		}
    	}

    	if(max_val>=(n/2)){

    		// other characters
    		ll diff_char=n-max_val;

    		ll lower_val=min(diff_char,max_val);

    		cout<<n-(lower_val*2)<<endl;
    	}
    	else{

    		if(n%2==0){
    			cout<<0<<endl;
    		}
    		else{

    			cout<<1<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}