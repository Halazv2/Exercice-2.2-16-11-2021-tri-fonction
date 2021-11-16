#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab[50],Size;
    int i,Flag,Search;
    printf("Enter size of array:\t");
    scanf("%f", &Size);
    printf("\nEnter elements of array:\n");
    for (i=0;i<Size;i++){
        scanf("%f",&tab[i]);
    }
    printf("\n Please Enter the Search Element  :  ");
  	scanf("%d",&Search);


  	Flag = 0;
  	for(i = 0; i < Size; i++) //inside the For loop will check whether tab[i] is equal to search item or not.
     {                       //If it is true, then Flag will become one and exit from the Loop
   		if(tab[i] == Search)
     	{
       		Flag = 1;
       		break;
	 	}
   	}

  	if(Flag == 1)
  	{
  		printf("\n We found the Search Element %d at Position %d ", Search, i+1 );
	}
	else
	{
		printf("\n Sorry!! We haven't found the the Search Element %d ", Search);
	}
  	return 0;
}
