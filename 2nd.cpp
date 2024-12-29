#include <iostream>
using namespace std;

void house(int n){

    int arr[20];
    arr[0]=1;
    arr[1]=2;
    int count =0;

    for(int i=2;i<20;i++){

        arr[i]=arr[i-1]+arr[i-2];

    }
   if(n>0 || n<19){
    cout <<"House no: " <<arr[n-1] <<endl;
    cout <<"Address of house " <<n <<" " <<&arr[n] <<endl;
    cout <<"Address of variable count " <<" " <<&count <<endl;
   }
}

int main(){
    int n;
    cout<<"Enter a house to find the house number :";
    cin>>n;
    house(n);
    cout <<"Address of variable n " <<" " <<&n <<endl;
    return 0;
}
