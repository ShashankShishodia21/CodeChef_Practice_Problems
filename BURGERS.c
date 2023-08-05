#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x<=y){
	        printf("%d\n",x);
	    }
	    else if(x>y){
	        printf("%d\n",y);
	    }
	}
	return 0;
}

