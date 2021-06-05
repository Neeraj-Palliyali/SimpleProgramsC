#include<stdio.h>

// function to find length
int leng(char*);
// function to do the swap
void swapChars(char*);
 
int main() 
{
// creating the varible for string
   char string[100];
 
// getting the input string
   printf("Enter a string\n");
   scanf("%s",string);
 
// calling the fucntion  
   printf("%s becomes", string);
   swapChars(string);
 
   printf(" %s\n", string);
 
   return 0;
}

// fucntion defentition accepting the pointer
void swapChars(char *string) 
{
    // required varibles
   int length, c, count=0;
   char *begin, *end, temp;
 
//  finding the length string
   length = leng(string);
 
// setting the beginning and end 
   begin = string;
   end = string;
 
//  finding end value of input string
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
      
      
// fingding the end value relatively by length/3
    end = end - (length/3) + 1; 
    
// finding the first n/3 elements and swapping it with the last n/3 elements
    for(int i=0; (i < length/3 ) && (count < 3); i++){
        temp = *end;
        *end = *begin;
        *begin = temp;
        
        begin++;
        end++;
        count++;
    }
 
  
}
 
//  a function to return the lenth of a string
int leng(char *pointer)
{
   int n = 0;
 
   while( *(pointer+c) != '\0' )
      n++;
 
   return n;
}
 
