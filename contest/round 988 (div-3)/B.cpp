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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	

    	// karon duita use korbo oikhan thkee
    	ll find=n-2;
    	bool found=false;
    	map<ll,ll> m1;
    	ll first,second;
    	for(int i=0;i<n;i++){

    		if(find%v1[i]==0){

    			ll hold=find/v1[i];

    			if(m1[hold]>=1){
    				found=true;
    				first=v1[i];
    				second=hold;
    				break;
    			}
    		}


    		m1[v1[i]]++;
    	}

    	cout<<first<<" "<<second<<endl;

    	t--;
    }

    return 0;
}