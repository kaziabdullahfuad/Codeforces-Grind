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
    	
    	//printVector(v1);

    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		ll left;
    		ll right;
			// left side
			//cout<<"ASCHE"<<endl;
			left=0;
			right=n-1;
			ll min_val=n-1;

			while(v1[left]==v1[left+1] && left<n-1){

				left++;
			}
			//left++;
			
			if(left==n-1){
				cout<<0<<endl;
			}
			else{
				while(v1[right]==v1[right-1]){

					right--;
				}
				//debug(left)
				//debug(right)

				if(v1[left]==v1[right]){
					// tahole midpoint
					cout<<right-left-1<<endl;
				}
				else{

					//left 
					//cout<<n-left-1<<endl;
					min_val=min(min_val,n-left-1);

					// right
					//cout<<right-0<<endl;
					min_val=min(min_val,right-0);

					cout<<min_val<<endl;
				}

				

			}

			
    	
    	}

    	

    	t--;
    }


    return 0;
}
