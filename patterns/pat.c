#include<stdio.h>
void main()
{
    int row,col,temp,diff,dup;

    for(row = 1; row<=5; row++){
        temp=row;       
        for(col=1,diff=4;col<=row;col++,diff--){
            printf("%d ",temp);
            temp = temp + diff;   
        }
    
        printf("\n");
    }
}