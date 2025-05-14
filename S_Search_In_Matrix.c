#include<stdio.h>
int main(){
    int r,c,i,j,x,found = 0;;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
      scanf("%d", &x);


    
    for(i = 0; i < r && !found; i++) {
        for(j = 0; j < c; j++) {
            if (a[i][j] == x) {
                found = 1;
                break;
            }
        }
    }
    if (found)
        printf("will not take number\n");
    else
        printf("will take number\n");

    return 0;
}

