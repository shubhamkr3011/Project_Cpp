#include <iostream>
#include <conio.h> //Declaration of the header file
using namespace std;
// Declaration of user define function signature
int menu();
void bus();
void cycle();
void riksha();
void sd();
void x();
int nor = 0, nob = 0, noc = 0, amount = 0, count = 0; // declaration of global variables
void main()                                           // system defined function
{
    int b;
    do
    {
        switch (menu())
        {
        case 1:
            bus();
            break;
        case 2:
            cycle();
            break;
        case 3:
            riksha();
            break;
        case 4:
            sd();
            break;
        case 5:
            x();
            break;
        default:
            cout << "Dear sir you have selected a wrong choice enter again the correct one";
            break;
        }
        cout << "TO ADD MORE VEHICLES DETAILS PLEASE PRESS 0 ELSE ANY NUMBER FOR EXIT" << endl;
        cout << "ENTER YOUR CHOICE=";
        cin >> b;
    } while (b == 0);
    cout << "THANKYOU PLEASE VISIT AGAIN" << endl;
    getch();
}
// user defined functions
void bus()
{
    nob++;
    amount = amount + 100;
    count++;
}
void riksha()
{
    nor++;
    amount = amount + 50;
    count++;
}
void cycle()
{
    noc++;
    amount = amount + 20;
    count++;
}
int menu()
{
    int ch;
    cout << "****************************" << endl;
    cout << "PRESS 1 FOR BUS CHARGES IS 100 INR" << endl;
    cout << "PRESS 2 FOR CYCLE CHARGES IS 20 INR" << endl;
    cout << "PRESS 3 FOR RIKSHA CHARGES IS 50 INR" << endl;
    cout << "PRESS 4 TO SEE RECORD" << endl;
    cout << "PRESS 5 TO DELETE THE RECORD" << endl;
    cout << "PRESS 6 FOR EXIT" << endl;
    cout << "****************************" << endl;
    cout << "ENTER YOUR CHOICE=";
    cin >> ch;
    return ch;
}

void sd()
{
    cout << "****************************" << endl;
    cout << "TOTAL NUMBERS OF BUSES IN PARKING=" << endl
         << nob << endl;
    cout << "TOTAL NUMBERS OF CYCLES IN PARKING=" << endl
         << noc << endl;
    cout << "TOTAL NUMBERS OF RIKSHA IN PARKING=" << endl
         << nor << endl;
    cout << "TOTAL NUMBERS OF VEHICLES IN PARKING=" << count << endl;
    cout << "TOTAL AMOUNT COLLECTION IN PARKING=" << amount << endl;
    cout << "****************************" << endl;
}
void x()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
    count = 0;
}
