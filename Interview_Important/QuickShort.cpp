#include <iostream>
using namespace std;
int dive (int a[],int low,int high){
    int pivot =a[low];
    int i = low+1;
    int j=high;
    do{
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j++;
        }
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;
    }while(i<j);
    int temp =a[low];
        a[low]=a[high];
        a[high]=temp;


    return high;

}

void quickshort (int a[] ,int low,int high){
    int pivot ;

    if(low<high){
        pivot=dive(a,low,high);
        quickshort(a,0,pivot-1);
        quickshort(a,pivot+1,high);
    }
}
void display(int a[] ,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
}
 int main (){
    int a[]={1,99,88,77,6,3,2,1,0,0,-9};
    int s=sizeof(a)/sizeof(a[0]);
    quickshort(a,0,s);
    display(a,s);
 }