// this is shorted to pick it and do it sorting

#include<iostream>
using namespace std;
int insert(int a[],int s){
    for(int i=0;i<s;i++){
        int min=i;
        while(min>=0&& a[min]<a[min-1]){
            int temp=a[min-1];
            a[min-1]=a[min];
            a[min]=temp;
            min--;
        }
    }
};
void display(int a[],int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
};
int main(){
    int a[]={99,8,999,88,6,4,3,0,66};
    int s=sizeof(a)/sizeof(a[0]);
    insert(a,s);
    display(a,s);
}
