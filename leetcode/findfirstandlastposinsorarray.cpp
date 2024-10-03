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
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        // O(N) solution
        if(nums.size()==0){

        	return {-1,-1};
        }
        vector<int> ans;

        bool found=false;
        int n=nums.size();
        int first=0;
        int firstval,secondval;
        //debug(target)
        for(int i=0;i<n;i++){


        	if(nums[i]==target){

        		found=true;
        		//cout<<nums[i]<<" "<<i<<endl;
        		if(first==0){
        			firstval=i;
        			first=1;
        		}
        		secondval=i;
        	}
        }

        if(found){

        	ans.push_back(firstval);
        	ans.push_back(secondval);
        	return ans;
        }
        else{

        	ans.push_back(-1);
        	ans.push_back(-1);
        	return ans;
        }

        return ans;
    }

      vector<int> searchRangeOpti(vector<int>& nums, int target){

      		if(nums.size()==0){

      			return {-1,-1};
      		}


      		int n=nums.size();
      		int low=0;
      		int high=n-1;
      		bool found=false;
      		long long ans=1e18;
      		int firstindex,lastindex;

      		// prothome ekdom first index nibo
      		while(low<=high){

      			int mid=low+(high-low)/2;

      			if(nums[mid]<target){

      				low=mid+1;

      			}
      			else if(nums[mid]>target){

      				high=mid-1;
      			}
      			else{
      				// maane equal
      				found=true;
      				firstindex=mid;
      				// aro baam a check korte thakbo
      				high=mid-1;
      			}

      		}

      		low=0;
      		high=n-1;

      		while(low<=high){

      			int mid=low+(high-low)/2;

      			if(nums[mid]<target){

      				low=mid+1;

      			}
      			else if(nums[mid]>target){

      				high=mid-1;
      			}
      			else{
      				// maane equal
      				found=true;
      				lastindex=mid;
      				// aro baam a check korte thakbo
      				low=mid+1;
      			}

      		}

      		if(found){

      			return {firstindex,lastindex};

      		}
      		else{
      			return {-1,-1};
      		}
      }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		int n,target;
		cin>>n;
		vector<int> v1(n);
		
		for(int i=0;i<n;i++){
			cin>>v1[i];
		}
		
		cin>>target;
		/*
			Example Test case:

			array-[5 7 7 8 8 10]
			target-8
			answer={3,4};
		*/
		vector<int> result;
		// printVector(v1);

		// cout<<n<<" "<<target<<endl;
		result=sol1.searchRangeOpti(v1,target);

		cout<<result[0]<<" "<<result[1]<<endl;

		t--;
	}
	

    return 0;
}