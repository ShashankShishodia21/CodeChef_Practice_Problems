#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>=10 && b>=10 && c>=10 && (a+b+c)>=100){
	        printf("PASS\n");
	    }
	    else{
	        printf("FAIL\n");
	    }
	}
	return 0;
}

