#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x;
	scanf("%d ",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d ",&x);
	    if(x<3)
	    printf("Light \n");
	    else if(x>=7)
	    printf("Heavy \n");
	    else
	    printf("Moderate \n");
	}
	return 0;
}

