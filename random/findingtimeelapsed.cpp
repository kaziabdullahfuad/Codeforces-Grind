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

    // 3h:42am to 6h:07am
    // string start="3:42am";
    // string end="6:07am";
    // 3:48am 8:19am
    //
    string start;
    cin>>start;
    string end;
    cin>>end;
    int f_hour=start[0];
    int e_hour=end[0];
    int start_min=(start[2]-'0')*10+(start[3]-'0');
    int end_min=(end[2]-'0')*10+(end[3]-'0');
    string f_last;
    f_last.push_back(start[start.size()-2]);
    f_last.push_back(start[start.size()-1]);
    string e_last;
    e_last.push_back(end[end.size()-2]);
    e_last.push_back(end[end.size()-1]);

    cout<<start_min<<endl;
    cout<<end_min<<endl;
    cout<<f_last<<endl;
    cout<<e_last<<endl;

    // both same
    if(f_last==e_last){

    	// start min > end_min
    	if(start_min>end_min){

    		// first find the minutes
    		// to get to an hour
    		// To go 3h:42min ->4h:00min
    		// 60-42 will make 3h
    		// 3h:42->4->5->6->7minutes
    		// to go from 42 minutes to 4 is 18 minutes
    		// and 4 to 6 is (6-4) 2 hours and then +7 minutes to 6:07am
    		int minutes=60-start_min;

    		int hour=e_hour-(f_hour+1);

    		minutes+=end_min;

    		cout<<hour<<" hours and "<<minutes<<" minutes"<<endl;
    	}
    	else{

    		int hour=e_hour-f_hour;
    		int minutes=end_min-start_min;
    		cout<<hour<<" hours and "<<minutes<<" minutes"<<endl;
    	}

    }

    return 0;
}