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
    
    int space = count + 4;
    int star = 1;
    
    for(int i = 1; i <= count + 5; i++){

        for(int j = 1; j <= space; j++){
            printf(" ");
        } space--;
        
        for(int j = 1; j <= 2 * star - 1 ; j=j+2){
           printf("*"); 
        } 
        star += 2;
        printf("\n");
    }



    // Print the lower postion of the Tree

    for(int m = 1; m <= 5; m++){
        for(int n = 1; n <= 5; n++){
            printf(" ");
        }

        for(int n = 1; n <= N; n++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}