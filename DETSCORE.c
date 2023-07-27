#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    float x;
	    scanf("%f %d",&x,&n);
	    x = x/10;
	    int ans = x*n;
	    printf("%d\n",ans);
	}
	return 0;
}

