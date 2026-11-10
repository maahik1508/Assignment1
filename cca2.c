#include <stdio.h>

   int str_len(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
   }
  int str_cpy(char dest[], char src[]){
    int i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
  }
  int str_cmp(char s1[], char s2[]){
   int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}
  void str_cat(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
  int main(){
    int ch, len;
    int i , j;
    char s1[20], s2[20];
while(1) {
    printf("\n 1. Find the length of the string\n");
    printf("\n2.Copy the string\n");
    printf("\n3.Compare the string\n");
    printf("\n4.Encatenate the string\n");
    printf("\n5.exit\n");
    scanf("%d", &ch);
switch (ch){ 
    case 1:
    printf("Enter the first string");
    scanf("%s", s1);
    len = 0;
    while (s1[len] != '\0') {
        len ++;
    }
    printf("length of string is %d\n", len );
    break;
    case 2:
    printf("enter first string");
    scanf("%s", s1);
    i = 0;
    while (s1[i] != '\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i] = '\0';
     printf("Copied string = %s\n", s2);
    break;
    
    case 3:
    printf("enter first string:");
    scanf("%s", s1);
    printf("enter second string");
    scanf("%s", s2);
    len = str_cmp(s1, s2);
    if (len == 0)
    printf("strings are equal\n");
    else if (len < 0)
    printf("first string is smaller\n");
    else
    printf("First string is  greater\n");
    break;

    case 4:
    printf("enter first string ");
    scanf("%s", s1);
    printf("enter second string");
    scanf("%s", s2);
    str_cat(s1, s2);
    printf("concatenated string = %s\n", s1);
    break;

    case 5:
     return 0;
    default:
    printf("invalid choice\n");


}
}

}