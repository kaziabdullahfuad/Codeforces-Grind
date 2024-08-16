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

		ll n,m,k;
		cin>>n>>m>>k;

		if(k>(n*m)){

			cout<<n*m<<endl;
		}
		else{

			vector<vector<ll>> v1(n,vector<ll>(m,0));

			// for(int i=0;i<n;i++){

			// 	for(int j=0;j<m;j++){

			// 		cout<<v1[i][j]<<" ";
			// 	}
			// 	cout<<endl;
			// }

			ll start=1;
			set<ll> s1;

			for(int i=0;i<n;i++){

				for(int j=0;j<m;j++){

					if(v1[i][j]==0){

						ll index=i;
						v1[i][j]=start;
						index+=k;

						while(index<n && v1[index][j]==0){

							v1[index][j]=start;
							index+=k;
						}
						index=j;
						index+=k;
						

						while(index<n && v1[i][index]==0){

							v1[i][index]=start;
							index+=k;
						}
						start++;
					}
					else{
						
						ll index=i;
						ll val=v1[i][j];
						index+=k;

						while(index<n && v1[index][j]==0){

							v1[index][j]=val;
							index+=k;
						}
						index=j;
						index+=k;
						

						while(index<n && v1[i][index]==0){

							v1[i][index]=val;
							index+=k;
						}
						//start++;
						
					}

				}
			}

			for(int i=0;i<n;i++){

				for(int j=0;j<m;j++){

					s1.insert(v1[i][j]);
					cout<<v1[i][j]<<" ";

				}
				cout<<endl;
			}

			cout<<s1.size()<<endl;	
		}

    	t--;
    }

    return 0;
}