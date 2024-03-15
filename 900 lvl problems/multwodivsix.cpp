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

    	ll n;
    	cin>>n;

    	ll cnt1=0;
    	ll cnt2=0;

    	while(n%2==0){

    		n/=2;
    		cnt1++;
    	}

    	while(n%3==0){

    		n/=3;
    		cnt2++;
    	}

    	//debug(cnt1);
    	//debug(cnt2);
    	//debug(n);

    	if(n==1 && cnt1<=cnt2){

    		cout<<(cnt2-cnt1)+cnt2<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}