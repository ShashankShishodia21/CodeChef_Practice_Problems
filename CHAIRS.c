#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>=b){
	    printf("%d\n",a-b);
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

