// Problem Link: https://codeforces.com/contest/1609/problem/A

#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;
    	vector<int> v1(n);
    	ll sum=0;

    	for(int i=0;i<n;i++){

    		cin>>v1[i];
    		sum+=v1[i];
    	}
    	ll max_val=INT_MIN;

    	do{

    		if(sum>max_val){
    			max_val=sum;
    		}
    		sum=0;
    		int max_num=INT_MIN;
    		int even=0;
    		int max_index=0;

    		for(int i=0;i<v1.size();i++){

    			if(v1[i]>max_num){
    				max_num=v1[i];
    				max_index=i;
    			}
    			if(v1[i]%2==0){
    				even++;
    			}
    		}
    		cout<<even<<endl;
    		cout<<max_index<<endl;

    		if(even==1 && max_num%2==0){

    			// find another max index which is not even
    			max_num=INT_MIN;
    			int even_index=max_index;
    			for(int i=0;i<v1.size();i++){

    				if(v1[i]>max_num && v1[i]%2!=0){
    					max_num=v1[i];
    					max_index=i;
    				}
    			}

    			// maximise the max index by *2
    			v1[max_index]*=2;
    			// divide the max even index since only 1 is there
    			v1[even_index]/=2;
    		}
    		else if(even>1){

    			for(int i=0;i<v1.size();i++){

    				if(i!=max_index && v1[i]%2==0){
    					v1[i]/=2;
    					break;
    				}
    			}
    			v1[max_index]*=2;
    		}

    		for(auto x:v1){
    			cout<<x<<" ";
    		}
    		cout<<endl;

    		for(int i=0;i<v1.size();i++){

    			sum+=v1[i];
    		}
    		cout<<"SUM: ";
    		cout<<sum<<endl;
    		cout<<"MAX: "<<max_val<<endl;


    	}
    	while(sum>max_val);

    	cout<<max_val<<endl;

    	t--;


    }

    return 0;
}