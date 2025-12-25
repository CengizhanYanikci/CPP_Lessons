#include <iostream>

using namespace std;


int main(){

    string buyer,seller;

    buyer = "Money";
    seller = "Goods";

    cout<<"Before the swap, buyer has "<<buyer<<endl;
    cout<<"Before the swap, seller has "<<seller<<endl;

    seller.swap(buyer);
    cout<<"******************************"<<endl;
    cout<<"After the swap, buyer has "<<buyer<<endl;
    cout<<"After the swap, seller has "<<seller<<endl;


    return 0;
}