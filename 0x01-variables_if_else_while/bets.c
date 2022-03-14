#include <stdio.h>

int main()  
{  
    char ch = 'a';  
  
    printf("Lowercase English Alphabets:\n");  
    while(ch <= 'z')
    {

      if (ch != 'e' && ch != 'q'){
        putchar(ch);
         }
      ch++;
    }
    printf("\n");  
  
    return 0;  
} 
