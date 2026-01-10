#include<stdio.h>
int main(){
int n[4];

printf("enter elements\n");

for(int i = 0; i < 4; i++){
    scanf("%d", &n[i]);
}

for(int i = 0; i < 4; i++){
    if(n[i] % 2 == 0){


                        printf("%d", n[i]);

    }
}

}
