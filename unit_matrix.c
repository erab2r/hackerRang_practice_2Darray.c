#include<stdio.h>
int main(){
    int r,c,i,j,x,isUnit = 1;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                if(a[i][j] !=1){
                    isUnit = 0;
                }
            }else{
                if(a[i][j] !=0){
                    isUnit = 0;
                }
            }
        }

    }
     if (isUnit == 1)
        printf("The matrix is a unit matrix.\n");
    else
        printf("The matrix is NOT a unit matrix.\n");

    return 0;

}