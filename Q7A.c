#include<stdio.h>
int main()
	{
    		int i;
		int rn[5];
    		float m[5];
    		for (i=0;i<5;i++) 
		    {
        			printf("Roll Number of Student %d :",i+1);
        			scanf("%d",&rn[i]);
        			printf("Marks:");
        			scanf("%f",&m[i]);
		    }
    		printf("\n***Student Records***\n");
    		printf("Roll No\t\tMarks\n");
    		for (i=0;i<5;i++) 
		    {
        			printf("%d\t\t%2f\n",rn[i],m[i]);
    		    }
    		return 0;
    	}