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
    	
    	int x=0;
    	bool found=false;
    	int val=0;
    	int index=0;
    	int temp=0;
    	
    	for(int i=0;i<=256;i++){

    		//debug(i);
    		vector<int> holder;
    		x=i;

    		for(int j=0;j<n;j++){

    			temp=(x^v1[j]);
    			//cout<<temp<<" ";
    			holder.push_back(temp);

    		}
    		//cout<<endl;
    		val=0;
    		//printVector(holder);
    		
    		for(int k=0;k<n;k++){

    			val=(val^holder[k]);

    		}

    		if(val==0){
    			found=true;
    			index=i;
    			break;
    		}
    	}

    	if(found){
    		cout<<index<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	// bool found=false;
    	// int x=0;
    	// int val=0;
    	// for(int i=0;i<=256;i++){

    	// 	x=i;
    	// 	val=i;
    	// 	for(int j=0;j<n;j++){

    	// 		x=(x^v1[j]);
    	// 	}

    	// 	if(x==0){
    	// 		debug(val);
    	// 		found=true;
    	// 		break;
    	// 	}
    	// }

    	// int ans=found?val:-1;

    	// cout<<ans<<endl;

    	t--;
    }

    return 0;
}