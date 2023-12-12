#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1 = "abcde"; 
  
    // using transform() function and ::toupper in STL 
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
    cout<<s1<<endl; 
  
    // s2 is the string which is converted to lowercase 
    string s2 = "WXYZ"; 
  
    // using transform() function and ::tolower in STL 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
   cout<<s2<<endl; 


    return 0;
}