#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a;
	    scanf("%d",&a);
	    if(a<=300){
	        printf("3000\n");
	    }
	    else{
	        printf("%d\n",a*10);
	    }
	}
	return 0;
}

