#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL getR(LL a){
	while(a % 2 == 0)
		a /= 2;
	return a;
}

void solve(){
	LL a, b;
	scanf("%lld %lld", &a, &b);
	if(a > b)	swap(a, b);
	
	LL r = getR(a);
	if(getR(b) != r){
		puts("-1");
		return;
	}
	cout<<a<<" "<<b<<endl;
	int ans = 0;
	b /= a;
	cout<<a<<" "<<b<<endl;
	cout<<ans<<endl;
	while(b >= 8)
		b /= 8, ++ans;
	cout<<ans<<endl;
	if(b > 1)	++ans;
	printf("%d\n", ans);
}

int main(){
	int quest;
	scanf("%d", &quest);
	
	while(quest--)
		solve();
	return 0;
}