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
    	ll ans=0;
    	for(int i=0;i<3;i++){

    		map<pair<ll,ll>,vector<ll>> m1;

    		for(int j=0;j<n-2;j++){

    			// x1 and x2. v1[j] and v1[j+1]
    			if(i==0){
    				m1[make_pair(v1[j],v1[j+1])].push_back(v1[j+2]);
    			}
    			else if(i==1){
    				// x1 and x3 combo. v1[j] and v1[j+2]
    				m1[make_pair(v1[j],v1[j+2])].push_back(v1[j+1]);
    			}
    			else if(i==2){
    				// x2 and x3 combo. v1[j+1] and v1[j+2]
    				m1[make_pair(v1[j+1],v1[j+2])].push_back(v1[j]);
    			}
    		}

    		//debug(i)

    		for(auto x:m1){

    			// cout<<"["<<x.first.first<<" "<<x.first.second<<"]->";
    			map<ll,ll> temp;
    			ll len=x.second.size();

    			for(auto y:x.second){
    				//cout<<y<<" ";
    				temp[y]++;
    			}

    			for(auto z:temp){

    				ans+=(len-z.second)*(z.second);
    				len-=z.second;
    			}
    			//cout<<endl;

    		}
    		//cout<<ans<<endl;
    	}

    	cout<<ans<<endl;


    	t--;
    }

    return 0;
}