#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sum_of_four(int a,int b,int c,int d){
    if(a<b){
        if(a>c){
            if(a>d){
                cout<<a;
            }
            else{
                cout<<d;
            }
        }
    }
    else if(b>c){
         if(b>d){
             cout<<b;
         }
         else{
             cout<<d;
         }
    }
    else if(c<d){
        cout<<c;
    }
    else{
        cout<<d;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    sum_of_four(a,b,c,d);
    return 0;
}+++++++++++++++++++++++