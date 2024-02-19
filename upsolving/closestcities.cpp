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
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	// for(int i=1;i<=n;i++){
    	// 	cout<<v1[i]<<" ";
    	// }
    	// cout<<endl;
    	
    	// prefix sum
    	vector<ll> prefix(n+1);
    	prefix[1]=0;
    	prefix[2]=1;
    	int index=3;
    	for(int i=2;i<n;i++){
    		// debug(i);
    		// cout<<abs(v1[i+1]-v1[i])<<endl;
    		// cout<<abs(v1[i]-v1[i-1])<<endl;
    		if(abs(v1[i+1]-v1[i])<abs(v1[i]-v1[i-1])){
    			// dan a jaabe
    			prefix[index]=prefix[index-1]+1;
    		}
    		else{

    			prefix[index]=prefix[index-1]+abs(v1[i]-v1[i+1]);
    		}
    		index++;
    	}

    	// for(int i=1;i<=n;i++){
    	// 	cout<<prefix[i]<<" ";
    	// }
    	// cout<<endl;
    	//cout<<"SUFFIX AR KHELA"<<endl;
    	vector<ll> suffix(n+1);
    	suffix[n]=0;
    	suffix[n-1]=1;
    	index=n-2;
    	for(int i=n-1;i>1;i--){
    		// debug(i);
    		// cout<<abs(v1[i-1]-v1[i])<<endl;
    		// cout<<abs(v1[i]-v1[i+1])<<endl;
    		if(abs(v1[i-1]-v1[i])<abs(v1[i]-v1[i+1])){
    			// bam a jaabe
    			suffix[index]=suffix[index+1]+1;
    		}
    		else{

    			suffix[index]=suffix[index+1]+abs(v1[i]-v1[i-1]);
    		}
    		index--;
    	}

    	// for(int i=1;i<=n;i++){
    	// 	cout<<suffix[i]<<" ";
    	// }
    	// cout<<endl;
    	
    	ll q;
    	cin>>q;

    	for(int i=1;i<=q;i++){
    		//cout<<"HERE"<<endl;
    		ll x,y;
    		cin>>x>>y;
    		//debug(x);
    		//debug(y);

    		if(x<y){

    			if(x==1){
    				cout<<prefix[y]<<endl;
    			}
    			else{

    				cout<<abs(prefix[x]-prefix[y])<<endl;
    			}
    		}
    		else{

    			cout<<abs(suffix[x]-suffix[y])<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}