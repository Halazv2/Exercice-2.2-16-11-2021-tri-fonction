#include <stdio.h>
#include <stdlib.h>

    void Searchv(float tab[],int s) {
        //Search

    int i,j,temp,Flag,Search;

    printf("\n Please Enter the Search Element  :  ");
  	scanf("%d",&Search);


  	Flag = 0; /* Assume that element does not exists in array */

  	for(i = 0; i < s; i++) //inside the For loop will check whether tab[i] is equal to search item or not.
     {
   		if(tab[i] == Search)//If it is true
     	{
       		Flag = 1;//then Flag will become one and exit from the Loop
       		break;
	 	}
   	}

  	if(Flag == 1)
  	{
  		printf("\n We found the Search Element %d at Position %d \n", Search, i+1 );
	}
	else //If element is not found in array
	{
		printf("\n Sorry!! We haven't found the the Search Element %d \n", Search);
	}
    }
    void Sort(float tab[],int s){

        int i,j,temp,Flag,Search;

      for (i=0;i<s;i++)
        {
    for (j=i+1;j<s;j++){
        if(tab[i]>tab[j]){

            temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;

        }
      }
        }
    }




int main()
{
    float tab[50],Size;
    int i,j,temp,Flag,Search;

        /* size of array */
    printf("Enter size of array:\t");
    scanf("%f", &Size);
        /* elements of array */
    printf("\nEnter elements of array:\n");
    for (i=0;i<Size;i++){
        scanf("%f",&tab[i]);
    }
    //Search
    Searchv(tab,Size);
	//Sort Array
    Sort( tab,Size);
        for (i=0;i<Size;i++)
        printf("%.0f ",tab[i]);

  	return 0;
}
