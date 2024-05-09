#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int row, col;
scanf("%d %d",&row,&col);
int arr[row][col];

// Take 2D Array Input
for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        scanf("%d",&arr[i][j]);
    }
}

// Print Input 2D Array.

// for(int i = 0; i < row; i++){
//     for(int j = 0; j < col; j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }

int flag = 1;
if(row != col){
    flag = 0;
}


for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        if(i==j || i+j == row - 1){
            if(arr[i][j] != 1){
                flag = 0;
            }
        }
        else if(arr[i][j] != 0){
            flag = 0;
        }
    }
}

if(flag == 1){
    printf("YES");
} else{
    printf("NO");
}
return 0;
}

// Accepted

//--------------------------------------------------------//


/*

// WHY it show segmentation fault all the time, when submit in HR.
------------------------------------------------------------------


#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    // Take 2D array Input
    for(int m = 1; m <= row; m++){
        for(int n = 1; n <= col; n++){
            scanf("%d", &arr[m][n]);
        }
    }

    int flag = 1;
    if(row != col){
        flag = 0;
    }

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){

            if(i == j){
                if(arr[i][j] != 1){
                    flag = 0;
                }
            } 
            
            else if(i+j == row+1){
                if(arr[i][j] != 1){
                    flag = 0;
                }
            }

            else if( arr[i][j] != 0){
                flag = 0;
            }
        }
    }

    if(flag == 1){
        printf("YES");
    } else{
        printf("NO");
    }

    // return 0;
}



*/