// problem link:https://codeforces.com/problemset/problem/1891/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;

    	vector<int> v1(n);

    	for (int i = 0; i < n; ++i)
    	{
    		/* code */
    		cin>>v1[i];
    	}
    	bool al_sorted=true;

    	for (int i = n-1; i>=1;i--)
    	{
    		/* code */
    		//cout<<i<<" "<<i-1<<endl;
    		if(v1[i]<v1[i-1]){

    			int index=i-1+1;

    			if(index!=1 && index!=2 && index!=4 && index!=8
    				&& index!=16){
    				//cout<<index<<endl;
    				al_sorted=false;
    				break;
    			}
    		}
    	}

    	if(al_sorted){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}