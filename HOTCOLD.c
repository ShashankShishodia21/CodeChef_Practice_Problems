#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x>20){
	        printf("HOT\n");
	    }
	    else{
	        printf("COLD\n");
	    }
	    
	}
	return 0;
}

