#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d %d",&a,&b);
	    if((a*3)<=b)
	    printf("Yes \n");
	    else
	    printf("No \n");
	}
	return 0;
}

