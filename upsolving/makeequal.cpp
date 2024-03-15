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
    	ll sum=0;
    	ll diff=0;
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    	}

    	ll target=sum/n;
    	ll holder=0;
    	bool possible=true;
    	//debug(sum)
    	//debug(target)
    	for(int i=0;i<n;i++){

    		if(v1[i]>target){

    			holder+=v1[i]-target;
    			v1[i]=target;
    			//debug(v1[i]);
    			//debug(holder);
    		}
    		else if(v1[i]<target){

    			diff=target-v1[i];

    			if(diff>holder){
    				//debug(diff)
    				//debug(holder)
    				possible=false;
    				break;
    			}
    			else{
    				//debug(v1[i])
    				holder-=diff;
    				v1[i]=target;
    				//debug(holder);
    			}

    		}
    	}

    	//printVector(v1);

    	if(possible){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}