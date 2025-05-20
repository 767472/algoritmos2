#include <stdio.h>

int main(){
    int qc = 0;
    scanf("%d",&qc);
    for(int i=0;i<qc;i++){
        int qp = 0;
        float to = 0;
        float vp = 0;
        float pr = 0;
        scanf("%d",&qp);
        for(int j=0;qp>j;j++){
            scanf("%f",&pr);
            to+=pr;
        }
        scanf("%f",&vp);
        while(vp<to){
            scanf("%f",&vp);
        }
        printf("%.2f %.2f ",to,vp-to);
    }
    return 0;
}