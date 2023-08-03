#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&x);
	    if(x>98)
	    printf("Yes \n");
	    else
	    printf("No \n");
	}
	return 0;
}

