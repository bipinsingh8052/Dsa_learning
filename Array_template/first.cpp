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

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int>v1{32,32,33,3,4,5,6,7,8};
//     cout<<"\n find the size"<<v1.size()<<"\n";
//     cout<<"\n find the capacity"<<v1.capacity()<<"\n";



//     vector<int>v2;
//     v2.push_back(43);
//     v2.push_back(43);
//     v2.push_back(44);
//     v2.push_back(45);
//     v2.push_back(47);
//     v2.push_back(48);
//     v2.pop_back();
//     cout<<"\n size of this "<<v2.size()<<"\n";
//     cout<<"\n find the capacity of this "<<v2.capacity()<<"\n";
//     // capacity is increment in start from 2 and increment of 2 double from 
    

// }




// #include<iostream>
// using namespace std;
// #include<vector>
// #include<iterator>
// int main(){
// // size of the fixed the size;
// // value assinged for 0
// vector<int>v1(5);


// // fixed the size given  value of 100
// for(auto p:v1){
//     cout<<"\n kiler:"<<p;
// }

// // 



// vector <int>v4(5,100);
// for(auto p:v4){
//     cout<<"\n array"<<p;
// }


//     vector<int>v2;
//     v2.push_back(43);
//     v2.push_back(43);
//     v2.push_back(44);
//     v2.push_back(45);
//     v2.push_back(47);
//     v2.push_back(48);
//     v2.pop_back();
//     cout<<"\n size of this "<<v2.size()<<"\n";
//     cout<<"\n find the capacity of this "<<v2.capacity()<<"\n";
//     // capacity is increment in start from 2 and increment of 2 double from 
//     for(auto p:v2){
//         cout<<" \n array no:  "<<p;
//     }
    

//     vector<int>::iterator it;
//     it=v2.begin();

//     // iterator


// }




//  Pair & Tuple
// Pair is a structure not a conatiner it only store two value in any different datatype
// you can store only 2d array



// Tuple 
// in tuple you can store any 3d 4d any inthis





#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main(){


    vector<pair <int ,string>>v1;
    int s;
    cout<<"ENter the how many number enter the number:";
    cin>>s;
    int rollno;
    string name;
    for(int i=0;i<s;i++){
        cout<<"Enter the number:";
        cin>>rollno;
        cout<<"\n enter the name:";
        cin>>name;
        v1.push_back(make_pair(rollno,name));
    }
    for(int i=0;i<s;i++){
        cout<<v1[i].first<<v1[i].second<<"\n";
    }





    vector<tuple<int,string,int>v2;
    int s;
    cout<<"How many time run:";
    cin>>s;
    int number,rollno;
    string name;
    for(int i=0;i<s;i++){
        cout<<"Enter the number:";
        cin>>number;
        cout<<"\n Enter the Name:";
        cin>>name;
        cout<<"\n Enter the Rollno:";
        cin>>rollno;
        t
    }


}