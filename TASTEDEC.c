#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    x = x*2;
	    y = y*5;
	    if(x>y){
	        printf("CHOCOLATE\n");
	    }
	    else if(y>x){
	        printf("CANDY\n");       
	    }
	    else{
	        printf("EITHER\n");
	    }
	    
	}
	return 0;
}

