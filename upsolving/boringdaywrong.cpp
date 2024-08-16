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

    	ll n,l,r;
    	cin>>n>>l>>r;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);
    	ll sum=0;
    	ll count=0;
    	bool first=true;
    	ll index=0;
    	for(int i=0;i<n;i++){

    		sum+=v1[i];
    		//debug(i)
    		//debug(sum)
    		if(sum>=l && sum<=r){
    			sum=0;
    			count++;
    			first=true;
    			index++;
    		}
    		else if(sum>r){

    			if(i>0){

    				ll hold=sum-v1[i-1];
    				//debug(hold)
    				//debug(sum)
    				// if(first==false && hold>=l && hold<=r){

    				// 	count++;
    				// 	sum=0;
    				// 	first=true;
    				// }
    				if(first==false){

    					// sum>=l && sum<=r hole to valo nahole
    					// just amni chere dao
    					bool found=false;

    					while(sum>r && index<i){

    							sum-=v1[index];
    							index++;
    							if(sum>=l && sum<=r){
    								found=true;
    								break;
    							}
    					}
    					//cout<<i<<" "<<index<<" "<<sum<<endl;
    					if(found==true){
    						count++;
    						sum=0;
    						first=true;
    					}
    					else{

    						if(sum>r){
    							sum=0;
    							first=true;
    							index++;
    						}
    						else{
    							first=false;

    						}
    					}
    				}
    				else if(v1[i]>r){
    					//cout<<"HERE"<<endl;
    					sum=0;
    					first=true;
    					index++;
    				}
    				else if(v1[i]<r){
    					//cout<<"HERE"<<endl;
    					first=false;
    					sum=hold;
    				}
    			}
    			else{
    				sum=0;
    			}
    		}
    		else{
    			first=false;
    		}
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}