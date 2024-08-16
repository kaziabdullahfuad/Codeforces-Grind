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

   	ll n,x;
   	cin>>n>>x;
   	vector<ll> v1(n);
   	
   	for(int i=0;i<n;i++){
   		cin>>v1[i];
   	}
   	map<ll,ll> m1;
   	bool found=false;
   	ll index1=0,index2=1;

   	for(int i=0;i<n;i++){

   		ll target=x-v1[i];

   		if(m1[target]){
   			found=true;
   			index1=i+1;
   			index2=m1[target];
   			break;
   		}
   		else{
   			m1[v1[i]]=i+1;
   		}
   	}

   	if(found){
   		cout<<index1<<" "<<index2<<endl;
   	}
   	else{
   		cout<<"IMPOSSIBLE"<<endl;
   	}

    return 0;
}