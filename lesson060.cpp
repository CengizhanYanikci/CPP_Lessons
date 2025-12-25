#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main(){
    int number=0;
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        number = rand()%10;
        cout<<i<<". number is : "<<number<<endl;
    }
    
    return 0;
}