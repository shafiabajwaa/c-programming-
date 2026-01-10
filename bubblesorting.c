#include<stdio.h>
#define SIZE 5

void bubblesort(int a[], size_t n){

for(int pass = 0; pass< SIZE - 1; pass++){
    for(int i = 0; i< SIZE- 1; i ++){
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i]= a[i+1];
            a[i+1]= temp;

        }
    }
}}

int main(){

    int b[SIZE];

printf("enter the element for the arrays you want to swap");
for(int j=0; j<SIZE; j++){
    printf(" element %d ", j+1);
    scanf("%d", &b[j]);
}

bubblesort(b , SIZE);

for(int i= 0; i< SIZE ; i++)

printf("%d ", b[i]);
}
