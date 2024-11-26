#include <stdio.h>

main()
 
{
	
    char str1[100];
    int freq[256] = {0}; 
    
    printf("Enter the string: ");
    scanf("%s", str1);
    
    for(int i= 0; str1[i]!='\0'; i++)
    {
        freq[str1[i]]++;
    }

    printf("Character frequencies in the string:\n");
    for(int i=0; i<256; i++)
    {
        if (freq[i]>0) 
        {
            printf("%c: %d\n",i,freq[i]);
        }
    }
}