#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d %d",&x,&y);
	    if(x>=y){
	        printf("%d\n",7-x);
	    }
	    else{
	        printf("%d\n",7-y);
	    }
	}

	return 0;
}

