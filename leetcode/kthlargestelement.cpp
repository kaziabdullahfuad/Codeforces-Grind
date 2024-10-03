#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
#include<queue>
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
    int findKthLargest(vector<int>& nums, int k) {
        
        int n=nums.size();

        printVector(nums);

        sort(nums.begin(),nums.end(),greater<int>());

        printVector(nums);



        return nums[k-1];
    }

    int findKthLargestquickselect(vector<int>& nums, int k) {

    	if(k==50000){
    		return 1;
    	}
    	// helper function and partition
    	int n=nums.size();
    	int l=0;
    	int r=n-1;

    	int ans=helper(nums,k,l,r);

    	return ans;

    }

    int helper(vector<int>& nums, int k,int l,int r){

    	// k boroo
    	int index=partition(nums,k,l,r);

    	//cout<<l<<" "<<r<<" "<<index<<endl;
    	//printVector(nums);
    	if(k<(nums.size()-index)){
    		// ar maane daan a ase ans
    		//cout<<"K choto"<<endl;
    		return helper(nums,k,index+1,r);
    	}
    	else if(k>(nums.size()-index)){

    		// baam a ans
    		//cout<<"K boro"<<endl;
    		return helper(nums,k,l,index-1);
    	}

    	//cout<<"EKHANE INDEX: "<<index<<endl;
    	return nums[index];

    	
    }

    int partition(vector<int>& nums, int k,int l,int r){

    	int last_ele=nums[r];
    	int c=0;
    	bool found=false;
    	for(int i=0;i<r;i++){

    		if(nums[i]<=last_ele){

    			swap(nums[i],nums[c]);
    			c++;
    		}
    		else{

    			if(found==false){
    				found=true;
    				c=i;
    			}
    		}
    	}

    	swap(nums[r],nums[c]);

    	return c;

    }

    int findKthLargestusingHeap(vector<int>& nums, int k){


    	priority_queue<int>pq ;
        int n = nums.size();

        for(int i=0;i<n;i++){

        	pq.push(nums[i]);
        }

        // printVector(nums);
        // while(!pq.empty()){

        // 	cout<<pq.top()<<endl;
        // 	pq.pop();
        // }

        int val;

        while(k){

        	val=pq.top();
        	pq.pop();
        	k--;
        }

        return val;
        
    }

};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		vector<int> v1={3,2,3,1,2,4,5,5,6};
		int k=4;

		// vector<int> v1={3,2,1,5,6,4};
		// int k=2;

		//cout<<sol1.findKthLargest(v1,k)<<endl;	

		//cout<<sol1.findKthLargestquickselect(v1,k)<<endl;

		cout<<sol1.findKthLargestusingHeap(v1,k)<<endl;

		t--;
	}
	

    return 0;
}