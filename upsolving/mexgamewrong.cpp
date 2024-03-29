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
    	set<ll> s1;
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		s1.insert(v1[i]);
    		m1[v1[i]]++;
    	}
    	
    	// array ar mex amni ber koro
    	ll arraymex;

    	for(int i=0;i<=n;i++){

    		if(s1.find(i)==s1.end()){
    			arraymex=i;
    			break;
    		}
    	}

    	if(arraymex==0){
    		cout<<0<<endl;
    	}
    	else{

    		ll mex;
    		ll del=0;

    		// for(auto x:m1){
    		// 	cout<<x.first<<" "<<x.second<<endl;
    		// }

    		for(int i=0;i<=n;i++){

    			//debug(i)
    			//debug(del)
    			if(m1[i]==0){
    				//cout<<"0 paisi"<<endl;
    				mex=i;
    				//debug(i)
    				break;
    			}
    			else if(del>=m1[i]){
    				//cout<<"delete paisi"<<endl;
    				mex=i;
    				//debug(i)
    				break;
    			}
    			del++;
    		}


    		cout<<mex<<endl;

    	}


    	t--;
    }

    return 0;
}