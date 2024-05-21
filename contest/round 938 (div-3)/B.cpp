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


    	ll n,c,d;
    	cin>>n>>c>>d;

    	vector<ll>holder(n*n);
    	map<ll,ll> m2;
    	
    	for(int i=0;i<n*n;i++){
    		cin>>holder[i];
    		m2[holder[i]]++;
    		//min_val=min(min_val,holder[i]);
    	}
    	ll min_val=holder[0];
    	
    	for(int i=0;i<holder.size();i++){
    		//cin>>holder[i];
    		min_val=min(min_val,holder[i]);
    	}
    	//cout<<min_val<<endl;

    	vector<vector<int>> vec( n , vector<int> (n, 0));
    	map<ll,ll> m1;
    	vec[0][0]=min_val;
    	
    	for(int i=0;i<=0;i++){
    		
    		for(int j=1;j<n;j++){

    			vec[i][j]=vec[i][j-1]+d;
    		}
    	}

    	

    	for(int i=0;i<n;i++){

    		for(int j=1;j<n;j++){

    			vec[j][i]=vec[j-1][i]+c;
    		}
    	}

    	for(auto &row:vec){
    		for(auto &col:row){
    			//cout<<col<<" ";
    			m1[col]++;
    		}
    		//cout<<endl;
    	}

    	//cout<<endl;

    	bool found=true;
    	// for(int i=0;i<holder.size();i++){
    	// 	ll val=holder[i];
    		

    	// 	if(s1.find(val)==s1.end()){
    	// 		cout<<val<<endl;
    	// 		found=false;
    	// 		break;
    	// 	}
    	// }

    	for(auto x:m1){

    		ll val=m1[x.first];
    		ll second_val=m2[x.first];
    		//cout<<x.first<<endl;
    		//cout<<val<<" "<<second_val<<endl;
    		if(val!=second_val){
    			found=false;
    			break;
    		}

    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}