#include <stdio.h>

int main() 
{
	
    char str[20];
    int i, len= 0;
    int cam=1; 

 
    printf("Enter a string : ");
    scanf("%s",&str);

   
    for (i=0; str[i]!='\0'; i++) 
	{
        len++; 
    }

    for (i=0; i<len / 2; i++)
    {
		if (str[i]!=str [len-1-i]) 
		{
            cam= 0; 
            break; 
        }
    }
    
    printf("\n\n");

    if (cam) 
	{
        printf("The string is a palindrome\n");
    } 
	else 
	{
        printf("The string is not a palindrome\n");
    }

}
