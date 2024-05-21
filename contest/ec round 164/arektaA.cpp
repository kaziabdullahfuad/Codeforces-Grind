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

    	ll k,q;
    	cin>>k>>q;

    	vector<ll> v1(k);

    	for(int i=0;i<k;i++){
    		cin>>v1[i];
    	}

    	vector<ll> v2(q);

    	for(int i=0;i<q;i++){
    		cin>>v2[i];
    	}

    	//printVector(v1);
    	//printVector(v2);
    	vector<ll> ans;
    	ll min_val=*min_element(all(v1));

    	// for(int i=0;i<q;i++){

    	// 	ll count=0;
    	// 	//debug(v2[i]);
    	// 	ll holder=0;
    	// 	for(int j=0;j<k;j++){

    	// 		if(v1[j]<=v2[i]){

    	// 			holder=v1[j];
    	// 			break;
    	// 			///count++;
    	// 		}
    	// 	}
    	// 	if(holder==0){
    	// 		ans.push_back(v2[i]);
    	// 	}
    	// 	else{
    	// 		debug(v2[i]) debug(holder);
    	// 		ans.push_back(holder-i);
    	// 	}
    	// }

    	for(int i=0;i<q;i++){

    		if(v2[i]>=min_val){
    			cout<<min_val-1<<" ";
    		}
    		else{
    			cout<<v2[i]<<" ";
    		}
    	}
    	cout<<endl;
    	//printVector(ans);

    	t--;
    }

    return 0;
}