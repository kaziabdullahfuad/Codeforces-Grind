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
#define all(x) (x).begin(), (x).end()
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

    /*
    Test Case for this problem:
    2
	4
	3 7 1 5 
	3
	4 1 1
	*/ 

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);

    	sort(all(v1));

    	//printVector(v1);

    	bool found=false;

    	ll right=n-1;
    	ll left2=n-2;
    	ll left3=n-3;
    	ll sum=0;
    	while(left3>=0){

    		if(v1[left3]+v1[left2]>v1[right]){
    			found=true;
    			sum+=v1[left3]+v1[left2]+v1[right];
    			break;
    		}
    		else{

    			right--;
    			left3--;
    			left2--;
    		}
    	}

    	if(found){
    		cout<<sum<<endl;
    	}
    	else{
    		cout<<0<<endl;
    	}

    	t--;
    }

    return 0;
}