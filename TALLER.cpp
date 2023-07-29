#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y){
	        printf("A\n");
	    }
	    else{
	        printf("B\n");
	    }
	}
	return 0;
}
