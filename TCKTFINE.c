#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d %d %d",&n,&x,&y);
	    printf("%d\n",(x-y)*n);
	}

	return 0;
}

