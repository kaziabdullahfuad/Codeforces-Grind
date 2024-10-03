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

    	/*
    		Example test cases for quick select partition algo
			n=6
			v1=1 5 6 2 3 4

			n=10
			v2=3 2 5 0 1 8 7 6 9 4

    	*/
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	int last_ele=v1[n-1];
    	cout<<last_ele<<endl;
    	int c=0;
    	printVector(v1);
    	bool found=false;
    	for(int i=0;i<n-1;i++){

    		//cout<<v1[i]<<" "<<i<<" "<<c<<endl;
    		if(v1[i]<=last_ele){
    			
    			swap(v1[i],v1[c]);
    			c++;

    		}
    		else{

    			if(found==false){
    				c=i;
    				found=true;
    			}
    		}
    		//cout<<"HERE"<<endl;
    		//cout<<v1[i]<<" "<<i<<" "<<c<<endl;
    	}

    	printVector(v1);

    	cout<<c<<endl;

    	swap(v1[n-1],v1[c]);
    	printVector(v1);

    	t--;
    }

    return 0;
}