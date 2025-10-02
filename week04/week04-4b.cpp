//week04-4b.cpp part1:input part2:output
//UVA100 The 3n+1
#include <iostream>
using namespace std;
int main()
{
	int a,b;//part1:input
	while( cin>>a>>b ){
		int ans = 0;//ans will be here!
		int now=1;//part4
		int n = 1;
		while(n !=1){ //part3
			if(n%2==1) n=3*n+1;
			else n=n/2;
			now++;//part4
		}
		if(now>ans) ans=now;//part4
		printf("%d %d %d\n", a, b, ans);
	}//part2:output
}
