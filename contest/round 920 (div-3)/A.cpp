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

    	

    	ll max_val=-1e18;
    	ll x,y;
    	cin>>x>>y;
    	//cout<<x<<endl;
    	//cout<<y<<endl;
    	ll x_hold=x;
    	ll y_hold=x;
    	ll sum=0;
    	for(int i=1;i<=3;i++){

    		cin>>x>>y;

    		if(abs(x_hold-x)>0){
    			//cout<<x<<" "<<y<<endl;
    			//cout<<abs(x_hold-x)<<endl;
    			sum=max(sum,abs(x_hold-x));
    			//break;
    		}
    		else if(abs(y_hold-y)>0){
    			//cout<<x<<" "<<y<<endl;
    			//cout<<abs(y_hold-y)<<endl;
    			sum=max(sum,abs(y_hold-y));
    			//break;
    		}
    		x_hold=x;
    		y_hold=y;
    	}
    	//cout<<sum<<endl;
    	cout<<(sum*sum)<<endl;

    	t--;
    }

    return 0;
}