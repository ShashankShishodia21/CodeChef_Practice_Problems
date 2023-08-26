#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x*100 >= y*10){
	        printf("CLOTH\n");
	    }
	    else if(x*100 < y*10){
	        printf("DIsPOSABLE\n");
	    }
	}
	return 0;
}

