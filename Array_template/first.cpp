// what is template
// it is collect of function/classes

// #include<iostream>
// using namespace std;
// #include<array>
// #include <algorithm>
// int main(){
//     array<int,8>arr{10,10,2,3,4,5,1,6};
//     // write a templte name then write it datatype nad size  and variable name last values;

    

// // sorting
// sort(arr.begin(),arr.end());

//     // find the first index value using function
//     cout<<"\n"<<arr.front();
//     cout<<"\n"<<arr.back();


//     for(int i=0;i<arr.size();i++){
//         cout<<arr.at(i)<<"\t";
//     }

//     cout<<" \n Find the last second no \n";

//     int last=arr[arr.size()-1];
//     int j=1;
//     int answer=0;
//    do{
//         j++;
//         answer=arr[arr.size()-j];
//         cout<<'\n'<<answer<<"\n";
        
//     } while(last<=*(arr.end()-j));
//     cout<<"\nlast"<<answer;
     

    
// }





// vector
// this is store a array in dynamic 
// while in array static



// vector to function insert and delete
// 1. Push_back();
// 2.Pop_back();

#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v1{32,32,33,3,4,5,6,7,8};
    cout<<"\n find the size"<<v1.size()<<"\n";
    cout<<"\n find the capacity"<<v1.capacity()<<"\n";



    vector<int>v2;
    v2.push_back(43);
    v2.push_back(43);
    v2.push_back(44);
    v2.push_back(45);
    v2.push_back(47);
    v2.push_back(48);
    v2.pop_back();
    cout<<"\n size of this "<<v2.size()<<"\n";
    cout<<"\n find the capacity of this "<<v2.capacity()<<"\n";
    // capacity is increment in start from 2 and increment of 2 double from 
    

}