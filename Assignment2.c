#include<stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100];
    int i;
    int j;
printf("Enter number of rows and coloumns:\n");
scanf("%d %d", &r , &c);
printf("Enter elements of first matrix:\n");
for(i=0; i < r; i++ ){
    for(j=0; j < c ; j++){
    scanf("%d" , &a[i][j]);
    }
}
printf("Enter  elements of second matrix:\n");
for(i=0; i < r; i++ ){
    for(j=0; j < c ; j++){
    scanf("%d" , &b[i][j]);
    }
}
for(i=0; i < r ; i++){
    for(j=0; j < c ; j++){
        sum[i][j] = a[i][j] + b[i][j];
    }
}
printf("sum of two matrix is:\n");
for(i=0; i < r ; i++){
    for(j=0; j < c ; j++){
        printf("%d", sum[i][j]);
}
printf("\n");
}

}
