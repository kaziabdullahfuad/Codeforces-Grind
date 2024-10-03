#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
#include<stack>
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
    int largestRectangleArea(vector<int>& heights) {
        
        //stack<pair<int,int>> s1;
        // index and height
        stack<pair<int,int>> s1;
        // s1.push(make_pair(12,2));
        // s1.push({23,42});
        // s1.pop();
        //cout<<s1.top().first<<endl;
        //cout<<s1.top().second<<endl;
        int n=heights.size();
        int max_val=-1;

        //printVector(heights);
        for(int i=0;i<n;i++){

        	if(i==0 || s1.empty()){

        		s1.push({i,heights[i]});
        	}
        	else{

        		int val=heights[i];
        		//debug(val)
        		//cout<<s1.top().second<<endl;
        		if(val>=s1.top().second){
        			// jehetu boro add kora jabe
        			s1.push({i,val});
        		}
        		else{
        			// ar agate parbe na karon top ar value theke boro
        			int lastindex;
        			int cur_index=i;
        			//cout<<"EKHANE"<<" "<<i<<endl;
        			while(!s1.empty() && s1.top().second>val){

        				lastindex=s1.top().first;
        				// calculate kore nei
        				int ekhon_val=s1.top().second;
        				int area=(ekhon_val*(cur_index-lastindex));
        				//cout<<"PROTIBAR"<<" "<<ekhon_val<<" "<<area<<endl;
        				max_val=max(max_val,area);
        				s1.pop();
        			}

        			if(s1.empty()){

        				s1.push({0,val});
        			}
        			else{

        				s1.push({lastindex,val});
        			}
        		}
        	}
        }

        if(!s1.empty()){

        	int last_index=n;
        	//cout<<last_index<<" "<<s1.top().second<<endl;
        	while(!s1.empty()){

        		int val=s1.top().second;
        		int cur_index=s1.top().first;
        		int area=val*(last_index-cur_index);

        		max_val=max(max_val,area);
        		s1.pop();
        	}
        }

        //cout<<max_val<<endl;

        return max_val;
    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		//vector<int> v1={2,1,5,6,2,3};
		int n;
		cin>>n;
		vector<int> v1(n);
		
		for(int i=0;i<n;i++){
			cin>>v1[i];
		}
		
		//printVector(v1);
		cout<<sol1.largestRectangleArea(v1)<<endl;

		t--;
	}
	

    return 0;
}