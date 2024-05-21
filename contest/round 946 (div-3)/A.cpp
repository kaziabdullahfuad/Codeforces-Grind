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

    	ll x,y;
    	cin>>x>>y;

    	ll screens=(y+2-1)/2;

    	//cout<<screens<<endl;

    	ll remain=(screens*15)-(y*4);
    	//cout<<remain<<endl;

    	if(remain>=x){
    		cout<<screens<<endl;
    	}
    	else{

    		ll another=x-remain;
    		//debug(another)
    		ll temp=(another+15-1)/15;
    		screens+=temp;
    		cout<<screens<<endl;
    	}

    	t--;
    }

    return 0;
}