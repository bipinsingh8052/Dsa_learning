// it is short the first largest number then he short the other's 
#include<iostream>
using namespace std;
void Bubble(int a[],int s){

    int temp =0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(a[j]>a[j+1]){
                temp =a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

}




// // second method 
// void Bubble(int a[],int s){

//     int temp =0;
//     for(int i=0;i<s;i++){
//         for(int j=i;j<s-1;j++){
//             if(a[j]>a[j+1]){
//                 temp =a[j+1];
//                 a[j+1]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }

// }


void display(int a[],int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
    int a[]={999,888,77,888,0,33,333333,888,-9};
    int size=sizeof(a)/sizeof(a[0]);
    Bubble(a,size);
    display(a,size);
}