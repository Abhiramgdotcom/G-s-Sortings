#include <stdio.h>
#include <stdlib.h>
void isort (int *a,int n);
int main(){
    int n;
    scanf("%d",&n);
    int *a=(int*)malloc(n * sizeof (int));
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    isort(a,n);
    for (int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}
void isort (int *a,int n){
    int i,j,key;
    for (i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key){
                a[j+1]=a[j];
                j-=1;        
        }
        a[j+1]=key;
    }
}