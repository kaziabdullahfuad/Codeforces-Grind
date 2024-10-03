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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(v1[n-1]<v1[n-2]){
    		cout<<-1<<endl;
    	}
    	else{

    		if(v1[n-1]>=0){

    			
    			int op=n-2;
    			int min_val=v1[n-2]-v1[n-1];

    			cout<<op<<endl;

    			for(int i=0;i<n-2;i++){

    				cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    			}
    		}
    		else{

    			// sorted thakte hobe
    			bool found=true;

    			for(int i=0;i<n-1;i++){

    				if(v1[i]>v1[i+1]){
    					found=false;
    					break;
    				}
    			}

    			if(found){
    				cout<<0<<endl;
    			}
    			else{
    				cout<<-1<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}