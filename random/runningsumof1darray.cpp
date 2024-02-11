//problem link:https://leetcode.com/problems/running-sum-of-1d-array/description/
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
    vector<int> runningSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> holder(n);
        holder[0]=nums[0];

        for(int i=1;i<n;i++){

        	holder[i]=holder[i-1]+nums[i];
        }
        
        return holder;

    }
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums={3,1,2,10,1};

    Solution sol1;

    vector<int> holder;

    holder=sol1.runningSum(nums);

    printVector(holder);



    return 0;
}