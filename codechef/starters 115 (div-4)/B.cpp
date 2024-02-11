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
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;

    	if(n%2==0){

    		cout<<n/2<<" ";
    		cout<<n<<endl;
    	}
    	else{

    		int hold=n/2;
    		hold++;
    		cout<<hold<<" ";
    		cout<<n<<endl;
    	}

    	t--;
    }

    return 0;
}