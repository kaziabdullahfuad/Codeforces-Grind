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
    
    vector<int> intersection(vector<int> nums1,vector<int> nums2){

    	int n1=nums1.size();
    	int n2=nums2.size();

    	//cout<<"HERE"<<endl;
    	// printVector(nums1);
    	// printVector(nums2);
    	unordered_set<int> s1;
    	vector<int> ans;
    	for(int i=0;i<n1;i++){
    		s1.insert(nums1[i]);
    	}
    	unordered_set<int> s2;

    	for(int i=0;i<n2;i++){

    		//cout<<nums2[i]<<endl;
    		if(s1.find(nums2[i])!=s1.end()){
    			s2.insert(nums2[i]);
    		}
    	}

    	for(auto x:s2){
    		//cout<<x<<endl;
    		ans.push_back(x);
    	}

    	//printVector(ans);

    	return ans;
    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		int n1,n2;
		cin>>n1>>n2;
		
		vector<int> nums1(n1);
		vector<int> nums2(n2);

		for(int i=0;i<n1;i++){
			cin>>nums1[i];
		}

		for(int i=0;i<n2;i++){
			cin>>nums2[i];
		}

		//printVector(nums2);
		sol1.intersection(nums1,nums2);

		t--;
	}
	

    return 0;
}