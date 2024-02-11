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

    	ll h,x,y1,y2,k;
    	cin>>h>>x>>y1>>y2>>k;

    	// for gun
    	ll gun_div;
    	if(h%x==0){
    		gun_div=h/x;
    	}
    	else{
    		gun_div=h/x;
    		gun_div++;
    	}

    	// for laser div
    	ll hold_k=k;
    	ll hold_h=h;
    	ll count=0;
    	while(hold_k>0 && hold_h>0){

    		hold_h-=y1;
    		hold_k--;
    		count++;
    	}
    	//  cout<<gun_div<<endl;
    	// cout<<hold_h<<endl;
    	// cout<<count<<endl;
    	if(hold_h<=0){

    		ll max_val=min(count,gun_div);
    		cout<<max_val<<endl;
    	}
    	else{

    		//count+=hold_h;

    		//cout<<count<<endl;
    		if(hold_h%y2==0){
    			count+=hold_h/y2;
    		}
    		else{
    			
    			ll here_div=hold_h/y2;
    			here_div++;
    			count+=here_div;
    			//cout<<count<<endl;
    		}
    		ll max_val=min(count,gun_div);
    		cout<<max_val<<endl;
    	}

    	t--;
    }

    return 0;
}