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

    	ll n,a,b;
    	cin>>n>>a>>b;

    	// on normal price
    	ll min_val=1e18;

    	ll normal_price=n*a;

    	min_val=min(min_val,normal_price);

    	//debug(normal_price)

    	// promotion price

    	ll promotion_price=(n/2)*b;
    	
    	ll remainder=n%2;
    	
    	remainder*=a;
    	
    	promotion_price+=remainder;

    	//debug(promotion_price)

    	min_val=min(min_val,promotion_price);

    	cout<<min_val<<endl;

    	t--;
    }

    return 0;
}