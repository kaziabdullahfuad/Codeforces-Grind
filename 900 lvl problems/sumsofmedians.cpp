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

    	ll n,k;
    	cin>>n>>k;

    	int size=n*k;
    	vector<int>v1(size+1);
    	//cout<<size<<endl;
    	for(int i=1;i<=size;i++){

    		cin>>v1[i];
    	}

    	// for(int i=1;i<=size;i++){

    	// 	cout<<v1[i]<<" ";
    	// }

    	// cout<<endl;

    	int holder=(n+1)/2;
    	//cout<<holder<<endl;
    	int start=n-holder+1;
    	//cout<<start<<endl;

    	int here=size-start+1;
    	//cout<<here<<endl;
    	int count=0;
    	ll sum=0;
    	for(int i=here;i>=1;i-=start){

    		//cout<<v1[i]<<" ";
    		if(count==k){
    			break;
    		}
    		//cout<<i<<" ";
    		sum+=v1[i];
    		count++;
    	}
    	//cout<<endl;

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}