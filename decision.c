#include <stdio.h>
int main(){
int a;
printf("Number entered should be from 1-3\n");
printf("Enter your  number\n");
scanf("%c",&a);
switch(a){      //Switch statement used over if and else statement
         case '1':
         puts("Red\n");
         break;
         case '2':
         puts("Green\n");
         break;
         case '3':
         puts("Blue\n");
         break;
         default:
             printf("Error!\n");

}
return(0);

}
