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

    	ll n,k,x;
    	cin>>n>>k>>x;

    	ll min_summation=(k*(k+1))/2;
    	//cout<<min_summation<<endl;
    	// max summation
    	ll full_sum=(n*(n+1))/2;
    	//cout<<full_sum<<endl;
    	// full theke baki gula baad
    	ll rest=n-k;
    	ll rest_sum=(rest*(rest+1))/2;
    	//cout<<rest_sum<<endl;
    	ll max_sum=full_sum-rest_sum;
    	//debug(max_sum)
    	if((min_summation>x) || (max_sum<x)){
    		cout<<"NO"<<endl;
    	}
    	else{

    		cout<<"YES"<<endl;
    		
    	}

    	t--;
    }

    return 0;
}