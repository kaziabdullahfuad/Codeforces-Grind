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
    	vector<pair<ll,ll>> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i].first;
    		cin>>v1[i].second;
    	}

    	

    	ll sx,sy,fx,fy;
    	cin>>sx>>sy>>fx>>fy;

    	//cout<<sx<<" "<<sy<<" "<<fx<<" "<<fy<<endl;

    	// distance between two points sqrtl((x1-x2)^2+(y1-y2)^2)

    	// double dis=sqrtl((sx-fx)*(sx-fx)+(sy-fy)*(sy-fy));
    	ll dis=((sx-fx)*(sx-fx))+((sy-fy)*(sy-fy));
    	//cout<<dis<<endl;

    	bool found=true;
    	for(int i=0;i<n;i++){

    		ll x=v1[i].first;
    		ll y=v1[i].second;

    		// double hold=sqrtl((x-fx)*(x-fx)+(y-fy)*(y-fy));
    		ll hold=((x-fx)*(x-fx))+((y-fy)*(y-fy));

    		//debug(hold)

    		if(hold<=dis){
    			found=false;
    			break;
    		}
    	}

    	if(found){

    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    	

    	t--;
    }

    return 0;
}