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

    
	ll n,m,k;
	cin>>n>>m>>k;

	// 1 re koto age ante pari

	vector<ll> v1(m);
	vector<ll> result(n+1);
	map<ll,ll> m1;
	for(int i=0;i<m;i++){
		cin>>v1[i];
		m1[v1[i]]=i;
	}

	// for(auto x:m1){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	for(int i=0;i<k;i++){

		int num,pos;
		cin>>num>>pos;
		//cout<<num<<" "<<pos<<endl;
		if(m1[num]>=1){

			// tahole ar age joto gula oigula reo one banaite hobe
			ll start=m1[num];
			ll reach=pos-start;
			for(int j=pos;j>=reach;j--){
				//debug(j)
				result[j]=1;
			}
		}
		else{
			result[pos]=1;
		}
	}
	int holder=0;

	for(int i=1;i<=n;i++){
		//cout<<result[i]<<" ";
		if(result[i]==0){
			holder=i;
			break;
		}
	}
	//cout<<endl;
	cout<<holder<<endl;

    return 0;
}