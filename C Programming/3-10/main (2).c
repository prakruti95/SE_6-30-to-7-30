#include<stdio.h>
#include<conio.h>
void main()
{
   
    char c;
   
    printf("Enter Any Alphabet");
    scanf("%c",&c);//
    
    //printf("Your Character is %c",c);
    
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
  {
        printf("It's a vowel");
  }
  else
  {
      printf("It's a consonant");
  }
  
    
    
    
    
    
    getch();
}