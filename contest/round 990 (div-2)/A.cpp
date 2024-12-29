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
    	
    	ll second_layer=8;;

    	ll count=1;
    	ll sum=0;
    	sum=1;
    	ll needed=9;
    	for(int i=1;i<n;i++){

    		sum+=v1[i];
    		// debug(sum)
    		// debug(second_layer)
    		if(sum==needed){

    			count++;
    			second_layer+=8ll;
    			needed+=second_layer;
    			
    		}
    		else if(sum>needed){

    			while(needed<sum){

    				second_layer+=8ll;
    				needed+=second_layer;
    			}

    			if(needed==sum){
    				count++;
    			}
    		}
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}