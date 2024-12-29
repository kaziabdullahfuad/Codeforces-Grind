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
    
    int searchInsert(vector<int> nums, int target){

    	int n=nums.size();
    	int low=0;
    	int high=n-1;
    	int ind=-1;
    	bool found=false;

    	while(low<=high){

    		int mid=low+(high-low)/2;

    		if(nums[mid]==target){
    			ind=mid;
    			found=true;
    			break;
    		}
    		else if(nums[mid]<target){

    			// aro daan a
    			low=mid+1;
    		}
    		else{

    			// aro baam a
    			high=mid-1;
    		}
    	}

    	//debug(low)
    	if(found){
    		//cout<<ind<<endl;
    		return ind;
    	}
    	else{
    		//cout<<low<<endl;
    		return low;
    	}



    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		// vector<int> nums={1,3,5,6};
		// int target=5;

		// vector<int> nums={1,3,5,6};
		// int target=2; 

		// vector<int> nums={1,3,5,6};
		// int target=7;  

		cout<<sol1.searchInsert(nums,target)<<endl;



		t--;
	}
	

    return 0;
}