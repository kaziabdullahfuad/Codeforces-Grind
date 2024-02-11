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

    	for(int i=1;i<=n;i++){

    		ll temp=i;
    		ll count=0;

    		while(temp<=n && count<k){
    			//cout<<temp<<endl;
    			temp+=i;
    			count++;
    		}

    		if(count==k){

    			cout<<i<<endl;
    			holder=i;
    		}

    	}

    	cout<<"HOLDER: "<<holder<<endl;
    	

    	t--;
    }

    return 0;
}