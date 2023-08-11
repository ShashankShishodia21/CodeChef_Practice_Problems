#include <stdio.h>

int main(void) {
	// your code goes here
	int x,a,b;
	scanf("%d",&x);
	scanf("%d %d",&a,&b);
	if(a+b <= x){
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
	return 0;
}

