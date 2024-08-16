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
bool is_prime(ll val){

	bool found=true;

	for(ll i=2;i*i<=val;i++){

		if(val%i==0){
			found=false;
			break;
		}
	}

	return found;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v1;
    ll go_to=1e4;

    for(ll i=2;i<=go_to;i++){

    	if(is_prime(i)){
    		v1.push_back(i);
    	}
    }

    printVector(v1);

    return 0;
}