#include<stdio.h>
int main(){
    // Take Input from user.
    int N;
    scanf("%d",&N);


    // Print the Upper portion of the Tree
    int count = 0;
    for(int k = 1; k <=N; k +=2){
        count++;
    }

    printf("value = %d \n",count);




    // Print the lower postion of the Tree

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < N; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}