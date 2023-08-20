#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	
	    int x;
	    scanf("%d",&x);
	    if(x<10){
	        printf("%d\n",x);
	    }
	    else{
	        printf("%d\n",x%10);
	    }
	}
	return 0;
}

