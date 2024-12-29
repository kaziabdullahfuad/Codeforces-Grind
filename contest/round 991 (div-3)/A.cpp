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

    	ll n,m;
    	cin>>n>>m;
    	ll count=0;
    	ll sum=0;
    	while(n){

    		string s;
    		cin>>s;

    		ll len=s.size();
    		//debug(len)
    		sum+=len;
    		//debug(sum)
    		if(sum<=m){
    			//debug(sum)
    			//sum+=len;
    			count++;
    		}


    		n--;
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}