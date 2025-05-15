#include<stdio.h>
int main(){
int arr[]={10,20,30};
int *ptr=arr;
printf("initial pointer address:%p\n");
printf("initial value:%d\n",*ptr);
ptr++;
printf("after increment value:\n");
printf("pointer address:%p\n",ptr);
printf("value:%d\n",*ptr);
return 0;
}
