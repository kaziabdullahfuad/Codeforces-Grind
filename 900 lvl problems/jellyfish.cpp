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

    	ll a,b,n;
    	cin>>a>>b>>n;

    	vector<ll> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	sort(all(v1));

    	ll c=b;
    	ll i=0;
    	ll timer=0;
    	for(i;i<n;i++){
    		
    		//debug(i) debug(c)
    		if(v1[i]+c>a){
    			break;
    		}
    		else{
    			c+=v1[i];
    		}
    	}

    	//debug(i) debug(c)
    	timer+=c;
    	
    	if(i==n){
    		cout<<timer<<endl;
    	}
    	else{
    		timer--;
    		//debug(timer) debug(i)
    		for(i;i<n-1;i++){

    			if(1+v1[i]<a){
    				timer+=v1[i];
    			}
    			else{
    				timer+=a-1;
    			}
    		}

    		if(v1[n-1]+1>a){
    			timer+=a;
    		}
    		else{
    			timer=timer+(1+v1[i]);
    		}

    		cout<<timer<<endl;
    	}

    	
    	
    	t--;
    }

    return 0;
}