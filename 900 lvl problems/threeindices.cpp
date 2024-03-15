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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	bool found=false;

    	vector<ll> holder;

    	for(int i=1;i<n;i++){

    		holder.push_back(v1[i]-v1[i-1]);
    	}
    	int first,second,third;

    	// for(auto x:holder){
    	// 	cout<<x<<" ";
    	// }
    	//cout<<endl;

    	for(int i=0;i<holder.size()-1;i++){

    		if(holder[i]>0){

    			if(holder[i+1]<0){
    				//cout<<i<<" "<<i+1<<endl;
    				//cout<<holder[i]<<" "<<holder[i+1]<<endl;
    				found=true;
    				first=i;
    				second=i+1;
    				break;
    			}
    		}
    	}

    	if(found){

    		cout<<"YES"<<endl;
    		cout<<first+1<<" "<<second+1<<" "<<second+2<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}


    	t--;
    }

    return 0;
}