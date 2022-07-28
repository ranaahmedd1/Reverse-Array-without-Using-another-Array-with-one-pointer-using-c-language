#include <stdio.h>

void main(){
int arr[]={1,2,3,4,5,6};
int*p;
p=arr+5;
printf("original array:");
for(int i=0;i<6;i++)
    printf("\t%d\t",arr[i]);
printf("\n");

printf("reversed array:");
for(int i=0;i<6;i++){
    printf("\t%d\t",*p);
    p--;


 }

}
