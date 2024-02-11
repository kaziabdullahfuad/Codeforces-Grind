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
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       

	
	//printVector(v1);

	sort(nums.begin(),nums.end());

	//printVector(v1);

	bool found=false;
	int n=nums.size();

	int right=n-1;
	int left2=n-2;
	int left3=n-3;
	int sum=0;
	int val1,val2,val3;
	while(left3>=0){

		if(nums[left3]+nums[left2]>nums[right]){
			found=true;
			sum+=nums[left3]+nums[left2]+nums[right];
			// val1=v1[left3];
			// val2=v1[left2];
			// val3=v1[right];
			break;
		}
		else{

			right--;
			left3--;
			left2--;
		}
	}

	if(found){

		return sum;
		//cout<<val1<<" "<<val2<<" "<<val3<<endl;
	}
	else{
		return 0;
	}

}
    
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol1;
    vector<int> v1={2,1,2};

    cout<<sol1.largestPerimeter(v1);

    /*
    Test Case for this problem:
    2
	4
	3 7 1 5 
	3
	4 1 1
	*/ 

    

    

    return 0;
}