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

    	int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        while(v.size()>0 && v[0]==0)v.erase(v.begin());
        while(v.size()>0 && v[v.size()-1]==0)v.pop_back();
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                ans++;
            }
        }
        if(v.size()==0)cout<<0<<endl;
        else if(ans!=0)cout<<2<<endl;
        else cout<<1<<endl;

    	t--;
    }

    return 0;
}