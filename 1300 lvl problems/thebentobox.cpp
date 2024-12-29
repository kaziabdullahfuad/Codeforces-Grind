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

   	ll a,b,c,d;
   	cin>>a>>b>>c>>d;

   	vector<ll> v1(6,0);

   	v1[a]=1;
   	v1[b]=1;
   	v1[c]=1;
   	v1[d]=1;

   	for(int i=1;i<=5;i++){

   		if(v1[i]==0){
   			cout<<i<<endl;
   			break;
   		}
   	}

    return 0;
}