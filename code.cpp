#include <iostream>
using namespace std;

int main(){
int currency;
double amount, exchanged;

cout<<"Write amount\n";
cin>>amount;


do{
cout<<"\n=======choose currency========\n";
cout<<"1.Chinese Yuan(CNY)\n";
cout<<"2.US Dollar(USD)\n";
cout<<"3.Indian Rupee(INR)\n";
cout<<"4.European union Euro(EUR)\n";
cout<<"5.UK Pound(GBP)\n";
cout<<"6.Japanese Yen(JPY)\n";
cout<<"7.Saudi Riyal(SAR)\n";
cout<<"8.UAE Dirham(AED)\n";
cout<<"9.Exit\n";
cin>>currency;

switch (currency){
case 1:
    exchanged= amount*21.72;
    cout<<exchanged<<"birr";
    break;
case 2:
    exchanged=amount*156.73;
    cout<<exchanged<<"birr ";
    break;
case 3:
    exchanged=amount*1.87;
    cout<<exchanged<<"birr";
    break;
case 4:
    exchanged=amount*177.94;
    cout<<exchanged<<"birr";
    break;
case 5:
    exchanged=amount*208.61;
    cout<<exchanged<<"birr";
    break;   
case 6:
    exchanged=amount*1.08;
    cout<<exchanged<<"birr";
    break;     
case 7:
    exchanged=amount*41.79;
     cout<<exchanged<<"birr";
    break;    
case 8:
    exchanged=amount*42.67;
    cout<<exchanged<<"birr";
    break;    
case 9:
   cout<<"Exit\n";
   break;
default:
    cout<<"Invalid\n";
     }}
while (currency !=9);
    return 0;
}