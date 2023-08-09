#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    printf("Yes \n");
	    else
	    printf("No \n");
	}
	return 0;
}

