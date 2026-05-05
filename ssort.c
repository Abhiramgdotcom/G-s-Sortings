#include <stdio.h>
#include <stdlib.h>
void ssort(int* a,int n);
int main(){
    int n;
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ssort(a,n);
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    free(a);
    return 0;   
}
void ssort(int* a ,int n){
    int i,j,min;
    for (i=0;i<n;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        int temp;
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
    }
}