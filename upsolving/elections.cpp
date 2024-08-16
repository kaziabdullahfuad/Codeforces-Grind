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

    	ll n,c;
    	cin>>n>>c;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);

    	v1[0]+=c;
    	ll max_val=v1[0];
    	ll index=0;
    	for(int i=0;i<n;i++){

    		if(v1[i]>max_val){

    			max_val=v1[i];
    			index=i;
    		}
    	}

    	//cout<<index<<" "<<max_val<<endl;

    	
    	ll sum=0;
    	for(int i=0;i<n;i++){

    		sum+=v1[i];
    		if(i>0){

    			
    			if((v1[i]>max_val) || (v1[i]==max_val && i<=index)){
    				cout<<0<<" ";
    			}
    			else{

    				// bam pasher ta shoriye dekhi
    				// atar max hobe i and highest ar ekta
    				if(sum>=max_val){

    					cout<<i<<" ";
    				}
    				else{
    					cout<<i+1<<" ";
    				}
    			}
    			
    		}
    		else{

    			// i=0 hole either 0 ba 1
    			// either already shoman ba boro
    			// ba max elememt remove korbo

    			if(v1[i]>=max_val){
    				cout<<0<<" ";
    			}
    			else{
    				cout<<1<<" ";
    			}
    		}
    		
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}