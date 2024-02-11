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

    	ll n,m,k;
    	cin>>n>>m>>k;
    	vector<ll> v1(n);
    	vector<ll> v2(m);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}
    	
    	map<ll,bool> m1;
    	for(ll i=1;i<=k;i++){

    		//cout<<i<<endl;
    		m1[i]=false;
    	}

    	// for(auto x:m1){

    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }
    	ll div=k/2;
    	ll count=0;
    	sort(all(v1));
    	sort(all(v2));

    	//printVector(v1);
    	//printVector(v2);

    	map<ll,bool> m2;
    	vector<ll> holder;
    	for(int i=0;i<n;i++){

    		m2[v1[i]]=true;
    	}
    	ll common=0;
    	for(auto x:v2){

    		if(m2[x]==true){
    			holder.push_back(x);
    			//cout<<x<<" ";
    			common++;
    			m1[x]=true;
    			m2[x]=false;
    		}
    	}
    	//cout<<endl;
    	m2.clear();
    	for(auto x:holder){

    		m2[x]=true;
    		//m1[x]=true;
    	}

    	// for(auto x:m2){

    	// 	cout<<x.first<<" "<<x.second<<endl;

    	// }

    	//cout<<common<<endl;
    	ll first_one=0;
    	ll second_one=0;
    	for(auto x:v1){

    		if(m2[x]==true){
    			continue;
    		}
    		else{

    			if(x>=1 && x<=k){
    				first_one++;
    				m1[x]=true;
    			}
    		}
    	}

    	for(auto x:v2){

    		if(m2[x]==true){
    			continue;
    		}
    		else{

    			if(x>=1 && x<=k){
    				second_one++;
    				m1[x]=true;
    			}
    		}
    	}
    	// cout<<first_one<<endl;
    	// cout<<second_one<<endl;
    	// cout<<common<<endl;
    	ll total=first_one+second_one+common;
    	//cout<<total<<endl;
    	if(total==k){

    		bool found=true;
    		//cout<<"HERE"<<endl;
    		for(auto x:m1){

    			//cout<<x.first<<" "<<x.second<<endl;
    			if(x.second==false){
    				found=false;
    				break;
    			}
    		}

    		if(found==true){
    			cout<<"YES"<<endl;
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