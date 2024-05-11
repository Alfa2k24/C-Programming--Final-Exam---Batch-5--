#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
for(int t = 0; t < T; t++){

long long int M,Value,A,B,C,D;


scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
 Value = A*B*C;

 if(Value == 0 || M == 0){

    printf("0");

 } 
 
 else{

    if(M%Value == 0){
        D = M / Value;
        printf("%lld",D);
    } else if(M%Value != 0){
        printf("-1");
    }
 }

printf("\n");

}
return 0;
}

// Solution Accepted 

//----------------------------------------------

    // D = M / Value;
    // printf("D = %d\n",D);
    // if(Value * D == M){
    // printf("%d", D);
    // } else{
    // printf("-1");
    // }