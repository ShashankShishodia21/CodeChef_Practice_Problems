#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,a;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&y);
	    a = x-y;
	    printf("%d\n",a);
	}

	return 0;
}

