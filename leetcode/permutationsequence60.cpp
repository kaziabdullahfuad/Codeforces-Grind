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
    string getPermutation(int n, int k) {
        
        vector<int> v1;
        int fact=1;

        for(int i=1;i<n;i++){

        	fact*=i;
        	v1.push_back(i);
        }
        v1.push_back(n);
        string ans="";
        int div=n-1;
        //printVector(v1);
        //cout<<fact<<endl;
        k--;

        while(true){

        	//debug(k)
        	// koto number index
        	int index=k/fact;
        	ans+=to_string(v1[index]);

        	//debug(ans)

        	if(ans.size()==n){
        		break;
        	}

        	// baki koto
        	k=k%fact;

        	// new fact
        	// but tar age delete oi value
        	v1.erase(v1.begin()+index);
        	// new fact ekta kombe naki
        	fact/=div;

        	div--;

        }

        return ans;

    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		int n,k;
		cin>>n>>k;

		string res;
		res=sol1.getPermutation(n,k);
		cout<<res<<endl;


		t--;
	}
	

    return 0;
}