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

    	// koibar toka dawa hoi first gula ke nd last gula ke
    	// k koibar attack kore

    	ll left,right;

    	if(k%2==0){
    		// first ar gula re mare
    		left=k/2;
    		right=k-left;
    	}
    	else{
    		left=(k/2)+1;
    		//cout<<left<<endl;
    		right=k-left;
    	}

    	//cout<<left<<" "<<right<<endl;

    	vector<ll> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	ll sunk=0;

    	for(int i=0;i<n;i++){

    		if(left>=v1[i]){
    			left-=v1[i];
    			v1[i]=0;
    			sunk++;
    		}
    		else{
    			v1[i]-=left;
    			left=0;
    		}

    		if(left<=0){
    			break;
    		}
    	}

    	//printVector(v1);
    	//debug(right)
    	for(int i=n-1;i>=0;i--){

    		//cout<<v1[i]<<endl;
    		if(v1[i]==0){
    			break;
    		}
    		else if(right>=v1[i]){
    			right-=v1[i];
    			v1[i]=0;
    			sunk++;
    		}
    		else if(right<v1[i]){
    			v1[i]-=right;
    			right=0;
    		}

    		if(right<=0){
    			break;
    		}
    	}
    	//cout<<endl;
    	///printVector(v1);

    	cout<<sunk<<endl;

    	t--;
    }

    return 0;
}