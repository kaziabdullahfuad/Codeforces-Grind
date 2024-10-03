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
    	vector<ll> v1(n);
    	set<ll> s1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		s1.insert(v1[i]);
    	}
    	
    	vector<ll> v2=v1;

    	sort(all(v2),greater<ll>());

    	//printVector(v1);
    	//printVector(v2);

    	// age dekho sorted ki na
    	bool found=true;
    	for(int i=0;i<n-1;i++){

    		if(v1[i]<=v1[i+1]){

    		}
    		else{
    			found=false;
    			break;
    		}
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{

    		if(s1.size()!=n){
    			cout<<"YES"<<endl;
    		}
    		else{

    			if(v1==v2){
    				cout<<"NO"<<endl;
    			}
    			else{
    				cout<<"YES"<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}