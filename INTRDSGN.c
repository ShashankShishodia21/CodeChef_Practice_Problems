#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y,z;
	    scanf("%d %d %d %d",&n,&x,&y,&z);
	    if(n+x <= y+z){
	        printf("%d\n",n+x);
	    }
	    else{
	        printf("%d\n",y+z);
	    }
	}

	return 0;
}

