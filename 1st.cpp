#include <iostream>
using namespace std;

void house(){
    int arr[20];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<20;i++){

        arr[i]=arr[i-1]+arr[i-2];

    }
    for(int i =0; i<20;i++){
        cout <<arr[i] <<" ";
    }
    for(int i =0; i<20; i++){
        cout <<"Address of house no " <<i <<" " <<&arr[i] <<endl;
    }

}
int main(){
house();
return 0;
}
