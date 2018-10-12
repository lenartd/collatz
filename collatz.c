#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num = 1;
  int count = 0;
  int temp = 100;
  int max = 0;
  
  while(temp != 200)
  {
  	temp++;
  	num = temp;
  	while (num != 1) 
    {
    	if(num%2 == 0)
		{
			num = num/2;	
		}
		else
		{
			num = (num*3)+1;
		}
		if(max < num)
		{
			max = num;
		}
		printf("%d\n", num);
		count++;
    }
    printf("\n");
  }
    printf("Count of main cycle operations: %d\n", count);
    printf("The biggest number from the main cycle is: %d\n", max);
   
  
  
  
  
  
  return 0;
}
