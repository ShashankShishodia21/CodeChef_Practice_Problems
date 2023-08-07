#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d %d %d",&n,&x,&y);
	    y=y*2;
	    if((x+y) <= n){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

