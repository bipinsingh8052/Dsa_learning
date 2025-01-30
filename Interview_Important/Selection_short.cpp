
// pick first number

#include<iostream>
using namespace std;
void Selection(int a[],int s){
    for(int i=0;i<s;i++){
        int fin=i;
        for(int j=i;j<s;j++){
            if(a[fin]>a[j]){
                fin=j;
            }
        }
        if(fin!=i){
            int temp= a[fin];
            a[fin]=a[i];
            a[i]=temp;
        }
    }
     for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\nkkikk \n";
}
void display(int a[],int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
    int a[]={1,233,44,4,5,6,7,8,555,4,3,0,-9};
    int s=sizeof(a)/sizeof(a[0]);
    Selection(a,s);
    display(a,s);

}