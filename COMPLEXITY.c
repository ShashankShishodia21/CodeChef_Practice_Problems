#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d %d",&x,&y);
	    if(y<x){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}

	return 0;
}

