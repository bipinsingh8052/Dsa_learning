// what is template
// it is collect of function/classes

#include<iostream>
using namespace std;
#include<array>
#include <algorithm>
int main(){
    array<int,7>arr{10,2,3,4,5,1,6};
    // write a templte name then write it datatype nad size  and variable name last values;

    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<"\t";
    }

// sorting
sort(arr.begin(),arr.end());

    // find the first index value using function
    cout<<"\n"<<arr.front();
    cout<<"\n"<<arr.back();



    int last=*(arr.begin()-1);
    int j=1;
    int answer=0;
   do{
        j++;
        answer=*(arr.end()-j);
        
    } while(last<=*(arr.end()-j));
    cout<<"\nlast"<<answer;
     

    
}
