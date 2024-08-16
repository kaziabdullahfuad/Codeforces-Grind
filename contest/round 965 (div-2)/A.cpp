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

    	ll x,y,k;
    	cin>>x>>y>>k;

    	ll x_need=x*k;
    	ll y_need=y*k;
    	//cout<<x_need<<" "<<y_need<<endl;
    	ll sumx=0;
    	ll sumy=0;
    	for(ll i=1;i<k;i++){

    		cout<<i<<" "<<0<<endl;
    		sumx+=i;
    		sumy+=0;
    	}

    	//cout<<sumx<<" "<<sumy<<endl;

    	ll one_need=x_need-sumx;
    	ll two_need=y_need-sumy;

    	cout<<one_need<<" "<<two_need<<endl;

    	// cout<<(sumx+one_need)/k<<endl;
    	// cout<<(sumy+two_need)/k<<endl;


    	t--;
    }

    return 0;
}