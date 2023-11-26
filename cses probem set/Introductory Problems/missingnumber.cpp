#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin>>n;

	vector<int> v1(n);
	long long int sum=0;
	for(int i=0;i<n-1;i++){
		int val;
		cin>>val;
		v1[i]=val;
		sum+=v1[i];
	}

	long long int summation=n*(n+1)/2;

	// cout<<sum<<endl;
	// cout<<summation<<endl;

	long long int missingNum=summation-sum;

	cout<<missingNum<<endl;


    return 0;
}