#include <stdio.h>

int main(void) {
	// your code goes here
	int t,s;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&s);
	    if(s<4)
	    printf("MILD \n");
	    else if(s>=4 && s<7)
	    printf("MEDIUM \n");
	    else
	    printf("HOT \n");
	    
	}
	return 0;
}

