#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t = 1; t <= T; t++){

    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int T = 0, P = 0;
    for(int i = 0;i < n; i++){
        if(str[i] == 'T'){
            T++;
        } else{
            P++;
        }
    }

    if(T < P){
        printf("Pathaan");
    } else if( T > P){
        printf("Tiger");
    } else{
        printf("Draw");
    }

    printf("\n");

    }
    return 0;
}

// Solution Accepted