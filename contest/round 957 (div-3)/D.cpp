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

    	// len, m=jump,k=swim
    	ll n,m,k;
    	cin>>n>>m>>k;

    	string s;
    	cin>>s;

    	// always take logs
    	// only when no logs available then take water
    	// and only when no water then take crocodile
    	// logs>water>crocodile

    	if(m>n){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// first window
    		map<char,ll> m1;

    		for(int i=0;i<m;i++){
    			m1[s[i]]++;
    		}
    		bool found=true;
    		// for(auto x:m1){
    		// 	cout<<x.first<<" "<<x.second<<endl;
    		// }

    		if(m1['L']){

    		}
    		else if(m1['W']){
    				k--;
    		}
    		else{
    			found=false;
    			break;
    		}
    		bool found2=true;
    		m1[s[0]]--;

    		if(k<0){
    			found=false;
    		}
    		// for(auto x:m1){
    		// 	cout<<x.first<<" "<<x.second<<endl;
    		// }
    		for(int i=m;i<n;i++){

    			m1[s[i]]++;

    			if(m1['L']){

    			}
    			else if(m1['W']){
    				k--;
    			}
    			else{
    				found2=false;
    				break;
    			}
    			if(k<0){
    				found2=false;
    				break;
    			}
    			// cout<<"HERE"<<endl;
    			// for(auto x:m1){
    			// cout<<x.first<<" "<<x.second<<endl;
    			// }
    			m1[s[i-m+1]]--;
    		}

    		if(found2==false || found==false){
    			//cout<<k<<endl;
    			cout<<"NO"<<endl;
    		}
    		else{
    			//cout<<k<<endl;
    			cout<<"YES"<<endl;
    		}
    	}


    	t--;
    }

    return 0;
}