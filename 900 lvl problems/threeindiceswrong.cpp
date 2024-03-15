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
    	
    	int left=0;
    	int right=1;
    	int k=0;
    	int val=0;
    	int mid=0;
    	bool found=false;

    	while(left<right && left<n && right<n){

    		// debug(left);
    		// debug(mid)
    		// debug(right)
    		// debug(val)
    		if(v1[left]>=v1[right]){

    			left=right;
    			right++;
    			mid=right;
    			val=v1[right];
    		}
    		else if(v1[right]<val){

    			found=true;
    			k=right;
    			break;
    		}
    		else{
    			val=v1[right];
    			mid=right;
    			right++;
    		}
    	}

    	if(found){
    		cout<<"YES"<<endl;
    		cout<<left+1<<" "<<mid+1<<" "<<k+1<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}