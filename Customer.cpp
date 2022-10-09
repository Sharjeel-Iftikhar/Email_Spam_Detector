#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int cus;
    cout<<"Enter number of customers: ";
    cin>>cus;
    int array1 = cus;
    int array2 = cus;
    int array3 = cus;
    int arraytotal = cus;

    int array1apr = array1;
int array2apr = array2;
int array3apr = array3;
int arraytotalapr = arraytotal;

short mangoes,oranges,banana;
short mangoapr = &mangoes;
short bananaapr = &banana;
short orangeapr = &oranges;
    for(int i=0;i<cus;i++)
    {
        cout<<"Customer "<<i+1<<endl;
        cout<<"Enter Number of Mangoes : ";
        cin>> (array1apr + i);
        (mangoapr)= (array1apr + i)*20;
        cout<<"Enter Number of Oranges : ";
        cin>> (array2apr + i);
        (orangeapr)= (array2apr + i)*10;
        cout<<"Enter Number of Banana : ";
        cin>> (array3apr + i);
        (bananaapr) = (array3apr + i)*5;
        (arraytotalapr + i)=(mangoapr)+(orangeapr)+(bananaapr);
        getch();
    }
        cout<<"*********************************************************************************************"<<endl;
        cout<<setw(30)<<"Customer No."<<setw(15)<<"Mangoes"<<setw(15)<<"Oranges"<<setw(15)<<"Bananas"<<setw(15)<<"Total bill"<<endl;
        cout<<"*********************************************************************************************"<<endl;
    for(int i=0;i<cus;i++)
    {
        cout<<setw(30)<<i+1<<setw(15)<<(array1apr + i)<<setw(15)<<(array2apr + i)<<setw(15)<<(array3apr + i)<<setw(15)<<"Rs. "<<(arraytotalapr + i)<<endl;
    }
    return 0;
}