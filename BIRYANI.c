#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,c;
	    scanf("%d %d",&x,&y);
	    c=x*y;
	    printf("%d\n",c);
	}
	return 0;
}

