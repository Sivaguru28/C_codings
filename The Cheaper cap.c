#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    printf("SECOND \n");
	    else if(b==a)
	    printf("ANY \n");
	    else
	    printf("FIrst \n");
	}
	return 0;
}

