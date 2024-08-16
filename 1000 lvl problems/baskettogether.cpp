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

   

	ll n,d;
	cin>>n>>d;
	vector<ll> v1(n);
	
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	
	sort(all(v1));

	if(n==1){
		if(v1[0]>d){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	else{

		ll left=0,right=n-1;
    	ll start=2;
    	ll count=0;

    	//printVector(v1);

    	while(left<right){
    		
    		if(v1[right]>d){
    			count++;
    			right--;
    		}
    		else if(v1[right]*start>d){
    			//debug(start)
    			//debug(v1[right]*start)
    			count++;
    			right--;
    			start=2;
    			left++;
    		}
    		else{
    			start++;
    			left++;
    		}
    	}

    	if(left==right){

    		if(v1[right]>d){
    			count++;
    		}
    	}

    	cout<<count<<endl;
	}
    	


    return 0;
}