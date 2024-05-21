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
    // 10000
    ll tepm=t;
    while(t){

    	ll w,h;
    	cin>>w>>h;
    	ll horizontal_dis=0;
    	ll vertical_dis=0;
    	ll max_val=0;
    	for(int i=1;i<=4;i++){

    		ll k;
    		cin>>k;
    		
    		vector<ll> v1;
    		
    		for(int j=1;j<=k;j++){

    			ll val;
    			cin>>val;
    			v1.push_back(val);
    			
    		}

    		if(i==1 || i==2){
    			horizontal_dis=max(horizontal_dis,v1[k-1]-v1[0]);
    			max_val=max(max_val,horizontal_dis*h);
    		}
    		else{
    			vertical_dis=max(vertical_dis,v1[k-1]-v1[0]);
    			max_val=max(max_val,vertical_dis*w);
    		}
    	}

    	//cout<<horizontal_dis<<" "<<vertical_dis<<endl;
    	// sort(all(horizontal));
    	// sort(all(vertical));
    	// ll main_hor=horizontal[horizontal.size()-1]-horizontal[0];
    	// ll main_ver=vertical[vertical.size()-1]-vertical[0];

    	//cout<<main_hor<<" "<<main_ver<<endl;

    	cout<<max_val<<endl;

    	// if(horizontal_dis==vertical_dis){
    	// 	ll max_val=max(w,h);
    	// 	cout<<horizontal_dis*max_val<<endl;
    	// }
    	// else if(horizontal_dis>vertical_dis){

    	// 	cout<<horizontal_dis*h<<endl;
    	// }
    	// else{
    	// 	cout<<vertical_dis*w<<endl;
    	// }

    	t--;
    }

    return 0;
}