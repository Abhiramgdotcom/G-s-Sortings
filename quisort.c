#include <stdio.h>
#include <stdlib.h>
int partition(int *a,int low,int high);
void quicksort(int *a,int low , int high);
int main (){
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof (int));
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for (int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    return 0;
}
void quicksort(int *a,int low,int high){
    if (low<high){
        int pos=partition(a,low,high);
        quicksort(a,low,pos-1);
        quicksort(a,pos+1,high);
    }
}
int partition(int *a,int low,int high){
    int pi=a[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(a[j]<pi){
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    int temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return i+1;
}