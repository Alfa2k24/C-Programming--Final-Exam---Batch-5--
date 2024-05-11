#include<stdio.h>
int main(){
int row,col;
scanf("%d %d",&row, &col);
int arr[row][col];

for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        scanf("%d",&arr[i][j]);            
        }
    }

for(int n = 0; n < col; n++){
printf("%d ",arr[row-1][n]);
}

printf("\n");

for(int m = 0; m < row; m++){
printf("%d ",arr[m][col-1]);
}

return 0;
}

// Accepted