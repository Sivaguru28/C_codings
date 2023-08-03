#include <stdio.h>

int main(void) {
	// your code goes here
	int t,s;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&s);
	    if(s<=70)
	    printf(" 0 \n");
	    else if(s>70 && s<=100)
	    printf("500 \n");
	    else
	    printf("2000 \n");
	}
	return 0;
}

