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


    vector<int> v1={3,2,4,5,1,1,5,3};
    int n=v1.size();

    printVector(v1);

    // taking array which would hold the prefix sum of same size
    // here it's 8
    vector<int> holder(8);

    // assigning the first value of v1 to holder
    holder[0]=v1[0];

    // now we will loop from 1 to N and 
    // add previous values by holder[i]=holder[i-1]+v1[i]

    for(int i=1;i<n;i++){

    	holder[i]=holder[i-1]+v1[i];
    }

    printVector(holder);

    /*
    Here is we have a bunch of queries, q.
    Lets say q=4, and ranges such as [l,r].
    l r
    2 4
    5 6
    1 8
    3 3

    */

    // we can calculate the value by val=holder[r]-holder[l-1];
    // since mine is 0 based indexing it has to be holder[r-1] as well.
    // and holder[l-2] because of 0 based indexing.

    int q;
    cin>>q;

    for(int i=1;i<=q;i++){
        
        int l,r;
        cin>>l>>r;

        if(l==1){
            cout<<holder[r-1]<<endl;
        }
        else{

            cout<<holder[r-1]-holder[l-2]<<endl;
        }
    }

    return 0;
}