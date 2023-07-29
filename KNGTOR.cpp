#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&m);
	    n = n*5;
	    m = m*7;
	    printf("%d\n",m+n);
	}
	return 0;
}
