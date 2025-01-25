// this is shorted to pick it and do it sorting

//  stable: (this is depend in your code seee and give a yes/no answer)
// space complexity :(This is depend you create new variable in that store a array ) 0(1)
// time complexity :this is depend you case 
// approach :Substract &conQuer
// Structure based


#include<iostream>
using namespace std;
// int insert(int a[],int s){
//     for(int i=0;i<s;i++){
//         int min=i;
//         while(min>=0&& a[min]<a[min-1]){
//             int temp=a[min-1];
//             a[min-1]=a[min];
//             a[min]=temp;
//             min--;
//         }
//     }
// };




void insert(int a[],int s){
    for(int i=0;i<s;i++){
        // for(int j=i;j>=0;j--){
        //     if(a[j]<a[j-1]){
        //         int temp =a[j-1];
        //         a[j-1]=a[j];
        //         a[j]=temp;
        //     }
        // }
        int min=i;
        while( a[min]<a[min-1]){
            int temp=a[min-1];
            a[min-1]=a[min];
            a[min]=temp;
            min--;
        }
    }
}




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
