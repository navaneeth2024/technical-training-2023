#include<stdio.h>
#define max 100
void seperate(int [],int); //fn prototype
void main(){
    int a[max],i,n;
    printf("Enter the list of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        printf("\nInput no. %d:",i+1);
        scanf("%d",&a[i]);
    }
    seperate(a,n);
    getch();
}

void seperate(int a[max],int l){
    int p[max],x=-1,n[max],y=-1,z[max],w=-1,i=0;
    for(i=0;i<l;i++){
        if(a[i]>0){
            x++;
            p[x]=a[i];
        }
        else{
            if(a[i]<0){
                y++;
                n[y]=a[i];
            }
            else{
                w++;
                z[w]=a[i];
            }
        }
    }
    if(x>=0){

    }
}