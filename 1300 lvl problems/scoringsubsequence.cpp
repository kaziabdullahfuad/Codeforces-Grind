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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	vector<ll> ans;
    	ans.push_back(1);

    	ll len=0;
    	ll j=1;
    	for(int i=1;i<n;i++){

    		//debug(j)
    		while(j>=0 && ((v1[j]/(len+1ll))>=1ll)){

    			len++;
    			j--;
    			
    		}

    		ans.push_back(len);


    		j++;

    		//debug(j)
    		//debug(len)
    	}

    	printVector(ans);

    	t--;
    }

    return 0;
}