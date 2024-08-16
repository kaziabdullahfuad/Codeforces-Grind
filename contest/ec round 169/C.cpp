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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);

    	sort(all(v1),greater<ll>());

    	//printVector(v1);

    	for(int i=1;i<n;i+=2){

    		if(v1[i-1]==v1[i]){
    			continue;
    		}
    		else{

    			// v1[i-1]>v1[i]

    			ll dif=v1[i-1]-v1[i];

    			if(dif>=k){

    				v1[i]+=k;
    				k=0;
    				break;
    			}
    			else{

    				v1[i]+=dif;
    				k-=dif;
    			}
    			//debug(dif)
    		}
    	}

    	//printVector(v1);

    	ll alice=0;
    	ll bob=0;
    	ll count=0;

    	for(int i=0;i<n;i++){

    		if(count%2==0){
    			alice+=v1[i];
    		}
    		else{
    			bob+=v1[i];
    		}
    		count++;
    	}

    	cout<<alice-bob<<endl;


    	t--;
    }

    return 0;
}