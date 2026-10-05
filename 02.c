#include <stdio.h>
int main() 
	{
		int i;
		int arr[3];
    		for (i=0;i<3;i++) 
		    {
        			printf("Enter Number:");
			scanf("%d",&arr[i]);
        	               }
		int max=arr[0];
    		for (i=1;i<3;i++) 
		    {
		    	if(arr[i]>max) 
			    {
            			max = arr[i];
        			    }
    		    }
		printf("Max=%d",max);
    		return 0;
	}
