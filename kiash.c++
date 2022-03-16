//a simple c++ calculator

#include<iostream>
using namespace std;
void add();//preprocessor directive of no return and no parameters
void add(int x,int y);//with no return value but with parameters
int add();//with return but no parameters
int main(){
    float x,y;
    char ch;
    cout<<"Enter the first number \n";
    cin>>x;
    cout<<"Enter the second number \n";
    cin>>y;
    cout<<"Enter \n + for add \n - for subtraction \n * for multiplication \n / for division \n";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"Add="<<(x+y);
        break;
    case '-':
        cout<<"Add="<<(x-y);
        break;
    case '*':
        cout<<"Add="<<(x*y);
        break;
    case '/':
        cout<<"Add="<<(x+y);
        break;
    
    default:
    cout<<"its runs succuceful";
        break;
    }


    //printing alphabetical letter in lower case  using for loop
    // for(char ch='a';ch<='z';ch++)
    // cout<<ch<<" ";
    // //printing alphabeticalvletter in uppercase using for loop
    // for(char bb='A';bb<='Z';bb++)
    // cout<<bb<<" ";
    //a table for a number entered by the user
    // int v;
    // cout<<"'Enter the value of v to gen a table \n'";
    // cin>>v;
    // for (int i = 0; i <=10; v++)
    // {
    //     int table=v*i;
    //     cout<<table<<" ";
    // }

    //printing even numbers between 1 and 20
    cout<<"Enter the number btwn 1 and 20 to check the even numbers \n";
    for(int i=1;i<=20;i++){
        if (i%2==0)
        {
            cout<<i<<" ";
        }
        
    }
//printing odd numbers

cout<<"Odd numbers between 1 to 20 \n";
for (int c=0;c<=20;c++)
if (c%2==1)
{
    cout<<c<<" ";
}

//factorial of any number
int no=6 ,f=1;
for(int i =1;i<=no;i++)
{
    f=f*i;
}
cout<<"factorial"<<f;

//function with no  return value and with no arguments
add();//no return and no parameters
add(20,15);//no return but with parameters

int res=add();//with return but no parameters
cout<<"ADD="<<res;

return 0;
}
// void add(){//fun with no return value and no parameters
//     int x=10;
//     int v=20;
//     int z=x+v;
//     cout<<"add ="<<z;
// }

//with return value but no parameters
void add(int x,int y){
    int z=x+y;
    cout <<"Add="<<z;
}

//with return but with no parameters

int add(){
    int x=8;
    int y=8;
    int z=x+y;
    return z;
}