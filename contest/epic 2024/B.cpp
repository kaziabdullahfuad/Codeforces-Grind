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
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	// printVector(v1);
    	// printVector(v2);

    	if(n==1 || n==2){
    		cout<<"Bob"<<endl;
    	}
    	else if((v1[0]!=v2[0] && v1[0]!=v2[n-1]) || (v1[n-1]!=v2[0] && v2[n-1]!=v2[n-1])){

    		cout<<"Alice"<<endl;
    	}
    	else{

    		bool found=false;

    		ll vleft=0;
    		ll vright=n-1;
    		ll v2left=0;
    		ll v2right=n-1;

    		while(vleft<vright && v2left<v2right){

    			if((v1[vleft]!=v2[v2left] && v1[vleft]!=v2[v2right]) 
    				|| (v1[vright]!=v2[v2left] && v1[vright]!=v2[v2right])){

    				//cout<<"Alice"<<endl;
    				found=true;
    				break;
    			}

    			if(v1[vleft]==v2[v2left]){
    				vleft++;
    				v2left++;
    			}
    			else if(v1[vleft]==v2[v2right]){
    				vleft++;
    				v2right--;
    			}
    			else if(v1[vright]==v2[v2left]){
    				vright--;
    				v2left++;
    			}
    			else if(v1[vright]==v2[v2right]){
    				vright--;
    				v2right--;
    			}
    		}

    		//cout<<vleft<<" "<<v2left<<endl;
    		if(found){
    			cout<<"Alice"<<endl;
    		}
    		else{
    			cout<<"Bob"<<endl;
    		}
    	}	
    	

    	t--;
    }

    return 0;
}