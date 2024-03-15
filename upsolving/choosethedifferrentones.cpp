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

    	ll m,n,k;
    	cin>>m>>n>>k;

    	vector<ll> v1(m);
    	vector<ll> v2(n);

    	set<ll> all;
    	set<ll> common;
    	set<ll> s1;
    	set<ll> s2;
    	set<ll> :: iterator it;
    	for(int i=0;i<m;i++){
    		cin>>v1[i];
    		all.insert(v1[i]);
    		s1.insert(v1[i]);
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		all.insert(v2[i]);

    		s2.insert(v2[i]);

    		
    	}
    	
    	bool shob_ase=true;
    	ll ordhek=k/2;
    	ll s1_count=0;
    	ll s2_count=0;
    	for(int i=1;i<=k;i++){

    		it=all.find(i);
    		if(it==all.end()){
    			shob_ase=false;
    			//cout<<i<<endl;
    		}
    		it=s1.find(i);
    		if(it!=s1.end()){
    			s1_count++;
    		}
    		it=s2.find(i);
    		if(it!=s2.end()){
    			s2_count++;
    		}

    		//asol common
    		it =s1.find(i);
    		if(it!=s1.end()){

    			it=s2.find(i);
    			if(it!=s2.end()){
    				common.insert(i);
    			}
    		}
    	}
    	

    	
    	if((s1_count<ordhek) || (s2_count<ordhek)){
    		shob_ase=false;
    	}

    	if(shob_ase){

    		//cout<<"ASCHE"<<endl;
    		ll same=common.size();
    		//debug(same);
    		set<ll>::iterator kit;
    		s1_count=0;
    		s2_count=0;
    		for(int i=1;i<=k;i++){

    			it=common.find(i);

    			// if(it!=common.end()){
    			// 	cout<<*it<<endl;
    			// }
    			if(it==common.end()){

    				kit=s1.find(i);

    				if(kit!=s1.end()){
    					s1_count++;
    				}
    				kit=s2.find(i);

    				if(kit!=s2.end()){
    					s2_count++;
    				}
    			}

    		}

    		ll total_both=s1_count+s2_count;
    		//debug(total_both);
    		//debug(same);
    		if((k-total_both)==same){
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