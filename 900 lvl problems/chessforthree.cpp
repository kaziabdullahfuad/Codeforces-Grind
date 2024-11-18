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

    	ll p1,p2,p3;
    	cin>>p1>>p2>>p3;

    	ll sum=p1+p2+p3;

    	// win korle plus 2 and draw korleo 1,1 plus 2
    	// so odd howar kono chance nai

    	if(sum%2==1){
    		cout<<-1<<endl;
    	}
    	else{


    		cout<<min(p1+p2,sum/2)<<endl;
    	}

    	t--;
    }

    return 0;
}