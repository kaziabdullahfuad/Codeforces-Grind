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

    	ll n,m,q;
    	cin>>n>>m>>q;

    	vector<ll> v1(n);
    	vector<ll> v2(m);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}

    	

    	// for(int i=0;i<m;i++){

    	// 	cout<<v2[i]<<" ";
    	// }
    	// cout<<endl;

    	if(n==1){

    		if(v1[0]!=v2[0]){
    			cout<<"TIDAK"<<endl;
    		}
    		else{
    			cout<<"ya"<<endl;
    		}
    	}
    	else if(v1[0]!=v2[0]){

    		cout<<"TIDAK"<<endl;
    	}
    	else{

    		// dekhbo each of them equal ki na

    		ll start=0;
    		bool found=true;
    		set<ll> s1;
    		s1.insert(v1[start]);
    		for(int i=0;i<m;i++){

    			if(s1.find(v2[i])!=s1.end()){

    				// mane already ase
    			}
    			else{

    				// na thakle ekta barai dekbo mile ki na

    				start++;

    				if(v1[start]==v2[i]){

    					s1.insert(v1[start]);
    				}
    				else{
    					// mile na 
    					found=false;
    					break;
    				}	
    			}
    		}

    		if(found){
    			cout<<"YA"<<endl;
    		}
    		else{
    			cout<<"TIDAK"<<endl;
    		}
    	}


    	t--;
    }

    return 0;
}