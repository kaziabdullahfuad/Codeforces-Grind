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
    	
    	map<ll,ll> m1;
    	ll sum=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    		sum+=v1[i];
    	}
    	
    	//printVector(v1);
    	ll temper=199;
    	if(m1.size()==1){
    		cout<<"YES"<<endl;
    	}
    	else{

    		

    		//cout<<sum<<endl;

    		if(sum%n!=0){
    			cout<<"NO"<<endl;
    		}
    		else{
    			
    			//cout<<"ASCHE"<<endl;
    			ll target=sum/n;
    			debug(target)
    			//debug(sum)
    			bool found=true;
    			for(int i=1;i<n-1;i++){

    				//ll max_diff=max(abs(v1[i-1]-target),abs(v1[i+1]-target));
    				debug(i)
    				if(v1[i-1]==target && v1[i+1]==target){
    					//cout<<"HERE"<<endl;
    				}
    				else if(v1[i-1]==target && v1[i+1]>target){

    					ll times=abs(target-v1[i+1]);

    					v1[i-1]+=times;
    					v1[i+1]=target;


    					if(v1[i-1]<0){
    						found=false;
    						break;
    					}
    				}
    				else if(v1[i-1]>target && v1[i+1]==target){

    					ll times=abs(target-v1[i-1]);

    					v1[i+1]+=times;
    					v1[i-1]=target;

    					if(v1[i+1]<0){
    						found=false;
    						break;
    					}
    				}
    				else if(v1[i-1]>target && v1[i+1]>target){

    					ll times=abs(target-v1[i-1]);
    					ll times2=abs(target-v1[i+1]);

    					if(times>=times2){

    						// ekta barbe ekta kombe
    						v1[i+1]+=times;
    						v1[i-1]=target;

	    					if(v1[i+1]<0){
	    						found=false;
	    						break;
	    					}
    					}
    					else{

    						v1[i-1]+=times2;
    						v1[i+1]=target;

	    					if(v1[i-1]<0){
	    						found=false;
	    						break;
	    					}
    					}

    				}
    				else if(v1[i-1]==target && v1[i+1]<target){

    					ll times=abs(target-v1[i+1]);

    					v1[i-1]-=times;
    					v1[i+1]=target;


    					if(v1[i-1]<0){
    						found=false;
    						break;
    					}

    				}
    				else if(v1[i-1]<target && v1[i+1]==target){


    					ll times=abs(target-v1[i-1]);

    					v1[i+1]-=times;
    					v1[i-1]=target;


    					if(v1[i+1]<0){
    						found=false;
    						break;
    					}

    				}
    				else if(v1[i-1]<target && v1[i+1]<target){

    					ll times=abs(target-v1[i-1]);
    					ll times2=abs(target-v1[i+1]);

    					if(times>=times2){

    						// ekta barbe ekta kombe
    						v1[i+1]-=times;
    						v1[i-1]=target;

	    					if(v1[i+1]<0){
	    						found=false;
	    						break;
	    					}
    					}
    					else{

    						v1[i-1]-=times2;
    						v1[i+1]=target;

	    					if(v1[i-1]<0){
	    						found=false;
	    						break;
	    					}
    					}

    				}
    				else if(v1[i-1]<target && v1[i+1]>target){

    					ll times=abs(target-v1[i-1]);
    					ll times2=abs(target-v1[i+1]);

    					if(times>=times2){

    						// ekta barbe ekta kombe
    						v1[i+1]-=times;
    						v1[i-1]=target;

	    					if(v1[i+1]<0){
	    						found=false;
	    						break;
	    					}
    					}
    					else{

    						v1[i-1]+=times2;
    						v1[i+1]=target;

	    					if(v1[i-1]<0){
	    						found=false;
	    						break;
	    					}
    					}
    				}
    				else if(v1[i-1]>target && v1[i+1]<target){

    					ll times=abs(target-v1[i-1]);
    					ll times2=abs(target-v1[i+1]);

    					if(times>=times2){

    						// ekta barbe ekta kombe
    						v1[i+1]+=times;
    						v1[i-1]=target;

	    					if(v1[i+1]<0){
	    						found=false;
	    						break;
	    					}
    					}
    					else{

    						v1[i-1]-=times2;
    						v1[i+1]=target;

	    					if(v1[i-1]<0){
	    						found=false;
	    						break;
	    					}
    					}
    				}

    				printVector(v1);

    			}

    			
    			printVector(v1);
    			if(!found){
    				cout<<"NO"<<endl;
    			}
    			else{

    				for(int i=0;i<n;i++){

    					if(v1[i]!=target){
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
    			}
    		}

    	}

    	t--;
    }

    return 0;
}