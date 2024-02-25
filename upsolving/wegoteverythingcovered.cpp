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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n,k;
    	cin>>n>>k;

    	char x=97;
    	//cout<<x<<endl;
    	string s;
    	
    	for(int i=1;i<=k;i++){
    		//cout<<x<<endl;
    		s+=x;
    		x++;
    	}
    	
    	int len=s.size();

    	//debug(len);

    	int total_len=n*k;

    	int holder=total_len/len;

    	//cout<<total_len<<" "<<holder<<endl;

    	holder--;
    	string temp=s;

    	for(int i=1;i<=holder;i++){

    		s+=temp;

    	}

    	cout<<s<<endl;

    	t--;
    }

    return 0;
}