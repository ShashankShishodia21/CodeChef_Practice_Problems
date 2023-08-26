#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    float n,m,k;
	    scanf("%f %f %f",&n,&m,&k);
	    n = n/k;
	    if(n<=m){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

