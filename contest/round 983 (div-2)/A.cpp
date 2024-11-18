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
    	vector<ll> v1(2ll*n);
    	int one=0;
    	int zero=0;
    	for(int i=0;i<2*n;i++){
    		cin>>v1[i];

    		if(v1[i]==0){
    			zero++;
    		}
    		else{
    			one++;
    		}
    	}
    	
    	//printVector(v1);

    	// zero pair koita

    	//debug(zero)
    	//debug(one)

    	ll min_count=0;

    	min_count+=(zero)%2;
    	//debug(min_count)
    	//cout<<min_count<<endl;

    	// 0 and 1 koita pair

    	ll max_count=0;

    	if(zero==one){
    		max_count=zero;
    	}
    	else{

    		// jekono ekta boro

    		max_count=min(zero,one);

    		//cout<<max_count<<endl;
    	}

    	cout<<min_count<<" "<<max_count<<endl;

    	t--;
    }

    return 0;
}