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

    	iota(all(v1),1ll);

    	//printVector(v1);

    	if(n%2==0){

    		// start theke

    		for(int i=0;i<n;i+=2){

    			swap(v1[i],v1[i+1]);
    		}

    		printVector(v1);
    	}
    	else{


    		for(int i=1;i<n;i+=2){

    			swap(v1[i],v1[i+1]);
    		}

    		printVector(v1);
    	}

    	t--;
    }

    return 0;
}