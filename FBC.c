#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int k,x;
	    scanf("%d %d",&x,&k);
	    printf("%d\n",x-k);
	}
	return 0;
}

