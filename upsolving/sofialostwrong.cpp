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
    	// lost array
    	vector<ll> v2(n);
    	map<ll,ll> m1;
    	map<ll,ll> m2;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];

    	}
    	// v2 ar jonno
    	set<ll> s1;

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		s1.insert(v2[i]);
    		
    	}
    	ll m;
    	cin>>m;
    	vector<ll> v3(m);
    	// v3 ar jonno
    	set<ll> s2;
    	for(int i=0;i<m;i++){
    		cin>>v3[i];
    		s2.insert(v3[i]);
    		m1[v3[i]]++;
    	}
    	bool found=true;
    	for(auto x:s1){
    		//debug(x)
    		if(s2.find(x)==s2.end()){
    			//cout<<x<<endl;
    			found=false;
    			break;
    		}
    	}

    	if(found){
    		//cout<<"PAISE"<<endl;
    		// printVector(v1);
    		// printVector(v2);
    		bool hobe=true;
    		for(int i=0;i<n;i++){
    			//cout<<v1[i]<<" "<<v2[i]<<endl;
    			if(v1[i]!=v2[i]){
    				//cout<<v1[i]<<" "<<v2[i]<<endl;

    				ll holder=m1[v2[i]];
    				debug(holder)
    				if(holder<=0){
    					//debug(i)
    					//debug(v1[i])
    					//cout<<holder<<" "<<m1[v2[i]]<<endl;
    					hobe=false;
    					break;
    				}
    				v1[i]=v2[i];
    				m1[v2[i]]--;
    			}
    		}

    		if(hobe){
    			ll last_val=v3[m-1];
    			cout<<last_val<<endl;

    			if(s1.find(last_val)==s1.end()){
    				cout<<"NO"<<endl;
    			}
    			else{
    				cout<<"YES"<<endl;
    			}
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}