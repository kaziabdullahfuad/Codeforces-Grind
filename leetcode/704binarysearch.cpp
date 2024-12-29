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
class Solution {
public:
    
    int search(vector<int> nums,int target){

    	int n=nums.size();
    	int low=0;
    	int high=n-1;
    	int ind=-1;

    	while(low<=high){

    		int mid=low+(high-low)/2;

    		if(nums[mid]>=target){

    			if(nums[mid]==target){
    				ind=mid;
    			}

    			// aro baam a dekhbo ase ki na
    			high=mid-1;
    		}
    		else{

    			low=mid+1;
    		}

    	}

    	return ind;

    }
};
int main()
{
	

	int t;
	cin>>t;
	Solution sol1;

	while(t){

		//cout<<"Bismillah"<<endl;

		int n,target;
		cin>>n>>target;
		vector<int> nums(n);
		
		for(int i=0;i<n;i++){
			cin>>nums[i];
		}
		
		cout<<sol1.search(nums,target)<<endl;

		t--;
	}
	

    return 0;
}