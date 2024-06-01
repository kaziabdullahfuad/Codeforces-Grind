#include<iostream>
#include<numeric>
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
template<typename t1>
void printVectorfull(vector<t1> v1){
	
	ll n=v1.size()-1;

	for(int i=1;i<=n;i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n=arr.size();
        //cout<<n<<endl;
        //printVector(arr);
        vector<int> prefix(n+1,0);
        
        for(int i=1;i<=n;i++){


        	prefix[i]=prefix[i-1]+arr[i-1];
        	//cout<<i<<endl;
        }

        
       int sum = accumulate(arr.begin(), arr.end(), 0);
       //cout<<sum<<endl;

       for(int i=3;i<=n;i+=2){

       		//debug(i)
       		int temp=0;

       		for(int j=i;j<=n;j++){

       			//cout<<j-i<<" "<<prefix[j-i]<<endl;
       			//cout<<prefix[j]<<" "<<prefix[j-i]<<endl;
       			temp=prefix[j]-prefix[j-i];
       			//cout<<temp<<endl;
       			sum+=temp;
       		}
       }

       //cout<<sum<<endl;

       return sum;

    }
};
int main()
{
	Solution sol1;

	//vector<int>v1={1,4,2,5,3};

	vector<int> v1={10,11,12};

	cout<<sol1.sumOddLengthSubarrays(v1)<<endl;
	
	

    return 0;
}