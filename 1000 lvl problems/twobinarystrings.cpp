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

    	string s1,s2;
    	cin>>s1>>s2;

    	ll n=s1.size();
    	// prefix for 0
    	vector<int> prefix;
    	prefix.push_back(1);
    	ll hold=prefix.back();
    	//cout<<hold<<endl;
    	//cout<<prefix.back()<<endl;
    	for(int i=1;i<n-1;i++){
    		
    		if(s1[i]=='0' && s2[i]=='0'){
    			//debug(i)
    			prefix.push_back(i+1);
    		}
    		else{
    			prefix.push_back(prefix.back());
    		}
    	}

    	// suffix for 1
    	vector<ll> suffix;
    	suffix.push_back(1);

    	for(int i=n-2;i>=1;i--){

    		if(s1[i]=='1' && s2[i]=='1'){

    			suffix.push_back(n-i);
    		}
    		else{
    			suffix.push_back(suffix.back());
    		}
    	}

    	//printVector(prefix);
    	reverse(all(suffix));
    	//printVector(suffix);
    	ll max_val=0;
    	for(int i=0;i<prefix.size();i++){

    		ll hold=prefix[i]+suffix[i];
    		max_val=max(max_val,hold);
    		//debug(hold)
    	}

    	if(max_val==n){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}