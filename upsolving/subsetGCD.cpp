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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	ll holder=0;

    	for(ll i=1;i<=n;i++){

    		//cout<<i<<endl;
    		if(i*k<=n){
    			holder=i;
    			//cout<<i<<endl;
    		}
    		else{
    			break;
    		}


    	}

    	//cout<<"HOLDER: "<<holder<<endl;
    	ll temp=holder;
    	for(int i=1;i<=k;i++){

    		cout<<holder<<" ";
    		holder+=temp;

    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}