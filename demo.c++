#include<iostream>

using  namespace std;
//function with  parameter with return value
int add(int x,int y);

int main(){
    int res=add(20,90);
    cout<<"add="<<res;

return 0;

}

int add(int x ,int y){
    
    int z=x+y;
    return z;
    

}