/*To print count of repeating numbers including negative ones*/
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                count++;
                int temp=a[j];
                a[j]=a[size-1];
                a[size-1]=temp;
                j--;
                size--;
            }
    if(count>0)
        printf("%d -> %d \n",a[i],count+1);
    count=0;
        }
    }
}