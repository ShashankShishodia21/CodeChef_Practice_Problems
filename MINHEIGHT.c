#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,h;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&h);
	    if(x>=h){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

