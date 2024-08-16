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
    	
    	
    	

    	vector<ll> v2;
    	for(int i=0;i<n-1;i++){
    		//cout<<__gcd(v1[i],v1[i+1])<<" ";
    		v2.push_back(__gcd(v1[i],v1[i+1]));
    	}

    	//printVector(v2);

    	ll len=v2.size();
    	ll last_val=v2[0];
    	bool decr=true;
    	ll index=-1;
    	for(int i=0;i<len-1;i++){

    		if(v2[i]>v2[i+1]){
    			decr=false;
    			index=i;
    			break;
    		}
    	}

    	
    	//debug(index)
    	bool okay=true;

    	if(decr){
    		cout<<"YES"<<endl;
    	}
    	else{

    	for(int i=0;i<3;i++){

    		vector<ll> holder=v1;
    		//debug(index+i)
    		if(index+i>=n){
    			//cout<<"ASHLO"<<endl;
    			break;
    		}
    		
    		holder.erase(holder.begin()+index+i);
    		//printVector(holder);
    		//debug(holder.size())
    		vector<ll> temp;
    		for(int j=0;j<holder.size()-1;j++){

    			temp.push_back(__gcd(holder[j],holder[j+1]));

    		}

    		okay=true;
    		//cout<<"TEMP"<<endl;
    		//printVector(temp);
    		for(int k=0;k<temp.size()-1;k++){

    			if(temp[k]>temp[k+1]){
    				okay=false;
    				break;
    			}
    		}
    		
    		//debug(okay)
    		if(okay){
    			//cout<<index+i<<endl;
    			//printVector(holder);
    			break;
    		}
    		
    	}

    	
    	if(okay){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
    	

    	t--;
    }

    return 0;
}