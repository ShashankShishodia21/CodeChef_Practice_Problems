#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(x>y && x>z){
	        printf("SETTER\n");
	    }
	    else if(y>x && y>z){
	        printf("TESTER\n");
	    }
	    else if(z>x && z>y){
	        printf("EDITORIALIST\n");
	    }
	}
	return 0;
}

