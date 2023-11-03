/*To print count of repeating numbers only*/
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<size;i++){
        if(a[i]>=0){
            for(int j=i+1;j<size;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;
                }
            }
            if(count>0)
                printf("%d -> %d \n",a[i],count+1);
            count=0;
            }
    }
}