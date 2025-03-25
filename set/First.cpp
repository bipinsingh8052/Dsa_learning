// what is set
// in this have only key

// used in graph


// set is three type 
// 1.set
// 2.Unorder set
// 3.Muti set


// set
// 1. key unique
// 2.sorted
// 3.red Black tree




// 2.unorder set
// 1.random (unsorted)
// 2.Hashing technique
// insertion time complex o(n)



// 3.multi
// 1.sorted
// 2.duplicate



// // This is example of set 

// #include<iostream>
// using namespace std;
// #include<set>
// int main(){

//     set<int>rollno;
//     int size;
//     cout<<"Enter how many value you insert";
//     cin>>size;
//     int number=0;

//     for(int i=0;i<=size;i++){
//         cout<<"Enter the value";
//         cin>>number;
//         rollno.insert(number);
//     }

//     for(auto p:rollno){
//         cout<<p<<"\t";
//     }
//     cout<<"\n";

//     auto fin =rollno.find(8);



//     // find function is return a address not return a value

//     if(fin!=rollno.end()){
//         cout<<"Find it "<<"\n";
//         cout<<*fin<<"\n";  
//         rollno.erase(fin);
//       }
//     else{
//         cout<<"not find it";
//     }

//     for(auto p:rollno){
//         cout<<p<<"\t";
//     }
//     cout<<"\n";
// }








// Example of Unorder set





// #include<iostream>
// using namespace std;
// #include<unordered_set>
// int main(){

//     unordered_set<int>rollno;
//     int size;
//     cout<<"Enter how many value you insert";
//     cin>>size;
//     int number=0;

//     for(int i=0;i<=size;i++){
//         cout<<"Enter the value";
//         cin>>number;
//         rollno.insert(number);
//     }

//     for(auto p:rollno){
//         cout<<p<<"\t";
//     }
//     cout<<"\n";

//     auto fin =rollno.find(8);



//     // find function is return a address not return a value

//     if(fin!=rollno.end()){
//         cout<<"Find it "<<"\n";
//         cout<<*fin<<"\n";  
//         rollno.erase(fin);
//       }
//     else{
//         cout<<"not find it";
//     }

//     for(auto p:rollno){
//         cout<<p<<"\t";
//     }
//     cout<<"\n";
// }





// Multi set



#include<iostream>
using namespace std;
#include<set>
int main(){

    multiset<int>rollno;
    int size;
    cout<<"Enter how many value you insert   ";
    cin>>size;
    int number=0;

    for(int i=0;i<=size;i++){
        cout<<"Enter the value";
        cin>>number;
        rollno.insert(number);
    }

    for(auto p:rollno){
        cout<<p<<"\t";
    }
    cout<<"\n";

    auto fin =rollno.find(8);



    // rollno.erase(80)
    // this is delete it all 80 key how many you have


    // find function is return a address not return a value

    if(fin!=rollno.end()){
        cout<<"Find it "<<"\n";
        cout<<*fin<<"\n";
        
        // it delete only first data because its store a address of first data from find
        rollno.erase(fin);
      }
    else{
        cout<<"not find it";
    }

    for(auto p:rollno){
        cout<<p<<"\t";
    }
    cout<<"\n";
}