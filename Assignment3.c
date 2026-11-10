#include <stdio.h>
#include <string.h>
int main (){
int ch, a, b;
char str1[20], str2[20];
while(1) {
    printf("\n 1. Find the length of the string\n");
    printf("\n2.Encatenate the string\n");
    printf("\n3.Copy the string\n"); 
    printf("\n4.Compare the string\n");
    printf("\n5.exit\n");
    scanf("%d", &ch);

 switch (ch){ 
    case 1:
    printf("Enter the first string");
    scanf("%s", str1);
    a = strlen (str1);
    printf("length of string is %d\n" , a);
    break;

    case 2:
    printf("enter first string");
    scanf("%s" , str1);
    printf("enter second string");
    scanf("%s", str2);
    strcat(str1 , str2);
    printf("Concatencated is %s\n", str1);
    break;

    case 3:
    printf("enter string to copy");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("copied string is: %s\n", str2);
    break;

    case 4:
    printf("enter first and second string");
    scanf("%s %s", str1, str2);
    b = strcmp (str1, str2);
    if (b==0){
      printf("\n strings are equal\n");
    } else {
      printf("\n strings are unequal\n");
    }
   break;

   case 5:
   printf("exiting\n");
   break;

   default:
   printf("Invalid choice\n");

 }
}
while (ch != 5);
return 0;
}