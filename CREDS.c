#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	     a = a*4;
	     b = b*2;
	     printf("%d\n",a+b);
	}
	return 0;
}

