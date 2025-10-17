#include <stdio.h>
#include <conio.h>

void main()
{
    int pizza=100,burger=70,coffee=120,total=0;
    int choice;
    
   
    
    do
    { 
        
         printf("\n Enter 1 For pizza - Rs. 100 \n Enter 2 For Burger \n Enter 3 for Coffee \n press 0 for Exit  \n \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:total+=pizza;
           // printf("%d",total);
            break;
            
            case 2:total+=burger;
            // printf("%d",total);
            break;
            
            case 3:total+=coffee;
            // printf("%d",total);
            break;
            
          
        }
    
        
    }
    while(choice!=0);
    
   printf("Your Total Bill is %d",total);
    
     
	getch();
}
