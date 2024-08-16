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

    	ll n,q;
    	cin>>n>>q;

    	string s1,s2;
    	cin>>s1>>s2;

    	map<char,ll> m1;
    	map<char,ll> m2;

    	// for(int i=0;i<n;i++){
    	// 	cout<<s1[i]<<" ";
    	// }
    	// cout<<endl;

    	// for(int i=0;i<n;i++){
    	// 	cout<<s2[i]<<" ";
    	// }
    	// cout<<endl;

    	ll diff=0;
    	vector<ll> prefix(n+1);

    	for(int i=0;i<n;i++){

    		if(s1[i]==s2[i]){

    			prefix[i+1]=diff;
    		}
    		else{

    			diff++;
    			//cout<<diff<<endl;

    			m1[s1[i]]++;
    			m2[s2[i]]++;
    			//cout<<s1[i]<<" "<<s2[i]<<endl;
    			//cout<<m1[s1[i]]<<endl;
    			//cout<<m2[s2[i]]<<endl;

    			if(m2[s1[i]]){
    				diff--;
    				m1[s1[i]]--;
    				m2[s1[i]]--;
    			}

    			if(m1[s2[i]]){
    				diff--;

    				m1[s2[i]]--;
    				m2[s2[i]]--;
    			}

    			prefix[i+1]=diff;
    		}
    		//debug(diff)
    	}
    	for(int i=0;i<=n;i++){
    		cout<<prefix[i]<<" ";
    	}
    	cout<<endl;
    	while(q){

    		ll l,r;
    		cin>>l>>r;

    		if(l==1){
    			cout<<prefix[r]<<endl;
    		}
    		else{

    			cout<<prefix[r]-prefix[l]<<endl;
    		}

    		q--;
    	}

    	t--;
    }

    return 0;
}