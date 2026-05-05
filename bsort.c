#include <stdio.h>
#include <stdlib.h>
void bsort(int* a,int n);
int main(){
    int n;
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bsort(a,n);
    for (int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    free(a);
    return 0;
}
void bsort(int* a,int n){
        int temp;
        for (int i=0;i<n-1;i++){
            for (int j=0;j<n-1-i;j++){
                    if (a[j]>a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
            }
        }
    }