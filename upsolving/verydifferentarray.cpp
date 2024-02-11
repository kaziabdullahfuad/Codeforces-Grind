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

    int t;
    cin>>t;

    while(t){

    	ll n,m;
    	cin>>n>>m;
    	vector<ll> v1(n);
    	vector<ll> v2(m);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}

    	sort(v1.begin(),v1.end());
    	sort(v2.begin(),v2.end());

    	//printVector(v1);
    	//printVector(v2);

    	// left and right points for first vector
    	ll left=0,right=n-1;
    	//cout<<left<<" "<<right<<endl;

    	// left and right for second vector
    	ll left_sec=0,right_sec=m-1;
    	//cout<<left_sec<<" "<<right_sec<<endl;
    	ll sum=0;
    	ll val=0;
    	// cout<<"TESTING"<<endl;

    	// if(abs(v1[left]-v2[right_sec])>abs(v1[right]-v2[left_sec])){
    	// 	cout<<v1[left]<<" "<<v2[right_sec]<<endl;
    	// }
    	// cout<<"START"<<endl;
    	while(left<=right){

    		// left ar min value right ar theke boro

    		if(abs(v1[left]-v2[right_sec])>abs(v1[right]-v2[left_sec])){
    			val=abs(v1[left]-v2[right_sec]);
    			//cout<<v1[left]<<" "<<v2[right_sec]<<endl;
    			sum+=val;
    			left++;
    			right_sec--;
    			
    		}
    		else{
    			val=abs(v1[right]-v2[left_sec]);
    			//cout<<v1[right]<<" "<<v2[left_sec]<<endl;
    			sum+=val;
    			right--;
    			left_sec++;
    			

    		}
    		//cout<<val<<endl;
    	}
    	//cout<<"END"<<endl;
    	cout<<sum<<endl;


    	t--;
    }

    return 0;
}