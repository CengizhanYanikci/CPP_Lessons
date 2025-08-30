#include <iostream>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Turkish");
    cout<<"Çarşı pazar karıştı"<<endl;
    //-------------------------

    const int number = 11;
    //number = 10;   const sabit değer belirtir değiştirmeyte izin vermez

    //------------------------------
    float castnum = 89.8237612973;
    castnum = static_cast<int>(castnum);
    cout<<"Casting "<<castnum;


}