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
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n=arr.size();
        int len=n-1;
        int ans=0;
        for(int i=0;i<n;i++){

        	int left=i-0+1;
        	int right=len-i+1;
        	int total=(left*right);
        	int only_odd=(total+2-1)/2;
        	//cout<<left<<" "<<right<<" "<<total<<" "<<only_odd<<endl;
        	//cout<<only_odd*arr[i]<<endl;
        	ans+=only_odd*arr[i];
        }

        //cout<<ans<<endl;

        return ans;

        return 0;
    }
};
int main()
{
	Solution sol1;

	vector<int>v1={1,4,2,5,3};

	cout<<sol1.sumOddLengthSubarrays(v1);
	

    return 0;
}