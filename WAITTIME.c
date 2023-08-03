#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d %d",&y,&x);
	    y=y*7;
	    printf("%d\n",y-x);
	}

	return 0;
}

