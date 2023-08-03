#include <stdio.h>

int main(void) {
	// your code goes here
	int t,b,g;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&b,&g);
	    printf("%d \n",g-b);
	}
	return 0;
}

