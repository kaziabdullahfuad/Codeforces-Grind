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
    	
    	
    	vector<ll> v2=v1;
    	sort(all(v1));

    	//printVector(v1);
    	ll sum=0;
    	ll count=0;
    	ll left=0;
    	ll right=1;
    	//cout<<left<<" "<<right<<endl;
    	bool found=false;
    	vector<ll> holder(n);
    	ll index=0;
    	map<ll,ll> m1;
    	while(left<n && right<n){

    		if(found==false){
    			sum+=v1[left];
    		}
    		
    		//cout<<left+1<<" "<<sum<<endl;
    		//cout<<left<<" "<<right<<endl;
    		if(sum>=v1[right]){
    			found=true;
    			sum+=v1[right];
    			right++;
    			//debug(count)
    			count++;
    		}
    		else if(right-left==1){
    			found=false;
    			left++;
    			right++;
    			//debug(count)
    			holder[index]=count;
    			m1[index]=count;
    			index++;
    			count++;
    		}
    		else{
    			// ar maane sum boro o na ar ekta piche o nai
    			//cout<<"HERE"<<endl;
    			//cout<<left+1<<" "<<right+1<<" "<<sum<<" "<<v1[right]<<" "<<count<<endl;
    			holder[index]=count;
    			index++;
    			found=false;
    			left++;
    		}
    		//cout<<count<<endl;
    		//cout<<left+1<<" "<<right+1<<" "<<sum<<" "<<v1[right]<<" "<<count<<endl;
    	}
		
		cout<<left<<" "<<right<<endl;
		//cout<<count<<endl;    	
		//debug(left)
		//debug(index)
		
		for(int i=left;i<n;i++){

			debug(v1[i])
			holder[i]=count;
			m1[v1[i]]=count;
		}
		printVector(holder);

		for(auto x:m1){
			cout<<x.first<<" "<<x.second<<endl;
		}
		cout<<"HERE"<<endl;
		for(int i=0;i<n;i++){

			cout<<v2[i]<<" "<<m1[v2[i]]<<endl;
			//cout<<v1[i]<<endl;
		}

    	t--;
    }

    return 0;
}