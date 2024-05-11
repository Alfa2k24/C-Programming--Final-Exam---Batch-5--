#include<stdio.h>
#include<stdio.h>

int main(){

    int T;
    scanf("%d", &T);

    //Test Case
    for(int t = 1; t <= T; t++){

    int n;
    //Input Array Size
    scanf("%d", &n);
    int A[n];

    // Input array elements 
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    // B[n] data copy from A[n] using loop
    int B[n];
    for(int i = 0; i < n; i++){
        B[i] = A[i];
    }

    // Using selection sort
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(B[i] > B[j]){
                int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
            }
        }
    }

    int C[n];
    
    // difference between array A[i] and B[i].
    for(int i = 0; i < n; i++){
        C[i] = abs(A[i] - B[i]);
    }

    // Print the solution
    for(int i = 0; i < n; i++){
        printf("%d ",C[i]);
    }

    printf("\n");
    }

    return 0;
}


// Solution Accepted 