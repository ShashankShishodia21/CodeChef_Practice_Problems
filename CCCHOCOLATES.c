#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z,ans;
	    scanf("%d %d %d",&x,&y,&z);
	    ans = x*5 + y*10;
	    printf("%d\n",ans/z);
	    
	}
	return 0;
}

