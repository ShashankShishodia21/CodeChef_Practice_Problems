#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	
	    int x,y,n;
	    scanf("%d %d %d",&x,&y,&n);
	    printf("%d\n",2*(x+y)*n);
	}
	return 0;
}

