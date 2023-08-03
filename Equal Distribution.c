#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b;
	scanf("%d \n",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&a,&b);
	if((a+b)%2==0)
	printf("Yes \n");
	else
	printf("No \n");
	}
	return 0;
}

