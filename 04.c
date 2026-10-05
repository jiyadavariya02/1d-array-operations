#include <stdio.h>
int main() 
	{
    		int i;
    		float sum=0.0,avg;
    		float arr[4];
		printf("Enter Four Numbers:");
   		for (i=0;i<4;i++) 
		   {
        			scanf("%f",&arr[i]);
        			sum+=arr[i];
    		   }
    		avg = sum/4;
		printf("Sum =%2f\n",sum);
		printf("Average=%2f\n",avg);
    		return 0;
	}
