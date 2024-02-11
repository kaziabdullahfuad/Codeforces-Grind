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

    	ll n,x,y;
    	// n leaf, x- large ornament, y - small ornament
    	cin>>n>>x>>y;

    	// first a second ta banao
    	ll small_stuff=min(x,y/3);
    	//cout<<small_stuff<<endl;
    	x-=small_stuff;
    	//cout<<x<<endl;

    	ll big_stuff=x/2;
    	//cout<<big_stuff<<endl;
    	ll res=small_stuff+big_stuff;

    	//cout<<res<<endl;

    	if(res>=n){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}



    	t--;
    }

    return 0;
}