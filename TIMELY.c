#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x>=30){
	        printf("YES\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}

