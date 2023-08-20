#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(y*2 >= x*3){
	        printf("%d\n",x*3);
	    }
	    else{
	        printf("%d\n",y*2);
	    }
	}
	return 0;
}

