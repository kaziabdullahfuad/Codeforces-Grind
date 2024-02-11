// problem link:https://codeforces.com/group/isP4JMZTix/contest/386415/problem/A
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

     /*
        INPUT:
        7 3
        1 2 6 1 1 7 1

    */

   	ll n,k;
   	cin>>n>>k;
   	vector<ll> v1(n);
   	
   	for(int i=0;i<n;i++){
   		cin>>v1[i];
   	}
   	
   	// doing a prefix sum
   	vector<ll> holder(n);

   	holder[0]=v1[0];

   	for(int i=1;i<n;i++){

   		holder[i]=holder[i-1]+v1[i];
   	}

   	//printVector(holder);
    
    // now we will have to use two pointer technique

    ll min_val=holder[k-1];
    ll index=k-1;
    ll pointer=0;
    //cout<<index<<" "<<min_val<<endl;
    for(ll i=k;i<n;i++){

    	//cout<<i<<" :";
    	//cout<<pointer<<" "<<holder[i]<<endl;
    	ll sum=holder[i]-holder[pointer];
    	//cout<<"SUMMATION: "<<sum<<endl;
    	if(sum<min_val){
    		index=i;
    		min_val=sum;
    	}
    	pointer++;
    }

    // cout<<(index)-(k-1)+1<<" "<<min_val<<endl;
    // below is index formula
    cout<<(index)-(k-1)+1<<endl;

    return 0;
}