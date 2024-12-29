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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            for(int j=0;j<c;j++)
            {
                int x;
                cin>>x;
                if(mp[x]!=0)
                {
                    mp[x]=-1;
                }
                else mp[x]=i;
            }
        }
        cout<<"HERE"<<endl;
        for(auto x:mp){

			cout<<x.first<<" "<<x.second<<endl;
		}
        int cnt=0;
        set<int>s;
        cout<<"HERE"<<endl;
        for(auto it:mp)
        {
            if(it.second!=-1)
            {	
            	cout<<it.first<<" "<<it.second<<endl;
                s.insert(it.second);
            }
        }
        cout<<s.size()<<endl;
        
        if(s.size()>=n)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    	t--;
    }

    return 0;
}