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

    	ll h,m;
    	cin>>h>>m;

    	cout.precision(15);
    	cout<<fixed;
    	double min=m/5;
    	// debug(min)
    	// debug(h)

    	if(m==0 || m==60){

    		// mane kono angle to nai shoja ata jei hour oita
    		cout<<0<<endl;
    	}
    	else if(h==min && m%5==0){

    		// ar mane hour ektu age so pichone jete hobe
    		cout<<"ASCHE"<<endl;
    		debug(min)

    		// now to just hour jototuk baire gese tar piche nite hobe

    		double ans=double(m)*0.5;
    		debug(ans)
    	}	
    	
    	

    	t--;
    }

    return 0;
}