#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,a=0;
	    scanf("%d %d",&x,&y);
	    while(y>=0){
	        y = y-x;
	        a++;
	    }
	    printf("%d\n",a-1);
	}
	return 0;
}

