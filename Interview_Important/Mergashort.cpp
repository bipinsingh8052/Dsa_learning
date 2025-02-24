#include<iostream>
using namespace std;
void compar(int a[] ,int low,int mid ,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int arr[high+1];
    while(i<=mid&& j<=high){
        if(a[i]<a[j]){

            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=a[j];
            j++;
            k++;
        }

    }
    while(i<=mid){
        arr[k]=a[i];
        i++;
        k++;

    }
    while(j<=high){
        arr[k]=a[j];
        j++;
        k++;
    }

    for(int i=low;i<k;i++){
        a[i]=arr[i];
    }
};
int mergshort(int a[],int low,int high){
    int mid ;
    if(low<high){
        mid=(low+high)/2;
        mergshort(a,low,mid);

        mergshort(a,mid+1,high);
        compar(a,low,mid,high);
    }
}
int main(){
    int arr []={1,2334,4,55,66,6,777,8888,0,99,-99,90,-1000};
    int si= sizeof(arr)/sizeof(arr[0]);
    mergshort(arr,0,si-1);
    for(int i=0;i<si;i++){
        cout<<arr[i]<<"\t";
    }
}