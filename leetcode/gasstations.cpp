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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        vector<int> diff(n);
        int gas_sum=0;
        int cost_sum=0;
        for(int i=0;i<n;i++){

        	//cout<<gas[i]<<" "<<cost[i]<<" "<<gas[i]-cost[i]<<endl;
        	diff[i]=gas[i]-cost[i];
        	gas_sum+=gas[i];
        	cost_sum+=cost[i];
        }

        //printVector(diff);
        
       // cout<<gas_sum<<" "<<cost_sum<<endl;
        int sum=0;
        int index=-1;
        bool found=false;
        for(int i=0;i<n;i++){

        	if(sum+diff[i]<0){
        		sum=0;
        		index=-1;
        		found=false;
        	}
        	else{

        		if(!found){
        			found=true;
        			index=i;
        		}
        		sum+=diff[i];
        	}
        }

        //cout<<sum<<" "<<index<<endl;

        if(gas_sum>=cost_sum && index!=-1){

        	return index;
        }
        else{
        	return -1;
        }


        
    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		vector<int> gas={1,2,3,4,5};
		vector<int> cost={3,4,5,1,2};
		// vector<int> gas={4,5,2,4};
		// vector<int> cost={1,1,12,1};
		// vector<int> gas={3,2,4,3,8};
		// vector<int> cost={4,3,3,5,1};

		cout<<sol1.canCompleteCircuit(gas,cost)<<endl;

		t--;
	}
	

    return 0;
}