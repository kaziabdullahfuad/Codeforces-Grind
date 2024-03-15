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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	int first,second,third;
    	bool found=false;
    	for(int i=0;i<n-1;i++){

    		if(v1[i]<v1[i+1]){

    			int k=i+1;
    			int val=v1[k];

    			for(int j=k+1;j<n;j++){

    				if(v1[j]<val){
    					found=true;
    					first=i;
    					second=k;
    					third=j;
    					break;
    				}
    			}
    			if(found){
    				break;
    			}
    		}
    	}

    	if(found){
    		cout<<"YES"<<endl;

    		cout<<first+1<<" "<<second+1<<" "<<third+1<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}



    	t--;
    }

    return 0;
}