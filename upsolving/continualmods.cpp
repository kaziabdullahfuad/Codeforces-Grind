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
    	int one_count=0;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		if(v1[i]==1) one_count++;
    	}

    	if(one_count>1){

    		cout<<"NO"<<endl;
    	}
    	else{

    		sort(all(v1));

    		if(v1[0]!=v1[1]){

    			cout<<"YES"<<endl;
    		}
    		else{

    			ll val=v1[0];
    			ll hold=0;
    			//debug(val)
    			for(int i=0;i<n;i++){

    				if(v1[i]==val){
    					continue;
    				}
    				else{

    					if(v1[i]%val){
    						hold=v1[i]%val;
    						break;
    					}
    				}
    			}

    			//cout<<hold<<endl;
    			if(hold==0){
    				cout<<"NO"<<endl;
    			}
    			else{
    				bool found=true;
    				for(int i=0;i<n;i++){

    					if(hold%v1[i]==0){
    						found=false;
    						break;
    					}
    				}


    				if(found){
    					cout<<"YES"<<endl;
    				}
    				else{
    					cout<<"NO"<<endl;
    				}
    			}


    		}
    	}

    	t--;

    }

    return 0;
}