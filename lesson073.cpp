#include <iostream>

using namespace std;

void getMinMax(int numbers[],int mySize,int* minValue,int* maxValue);

int main(){
    int numbers[5] = {0, 1, 2, 3, 4};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int minValue=numbers[0];
    int maxValue=numbers[0];
    getMinMax(numbers,arraySize,&minValue,&maxValue);
    cout<<"Max: "<<maxValue<<"\n";
    cout<<"Min: "<<minValue<<"\n";

    return 0;
}

void getMinMax(int numbers[],int mySize,int* minValue,int* maxValue)
{
    for (int i = 1; i < mySize; i++)
    {
        if (numbers[i]<*minValue)
        {
            *minValue=numbers[i];
        }
        if (numbers[i>*maxValue])
        {
            *maxValue=numbers[i];
        }
        
    }
    
}