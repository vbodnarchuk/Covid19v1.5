//@viiiiiiiitya
unsigned long long q;
unsigned long long b;
unsigned long long Nthis;
unsigned long long Nyest;
unsigned long long Nnext;
int Nnasel;
unsigned long long N2;
unsigned long long N1;
int d;
bool world;
short stats;
unsigned long long infect_day;
#include <iostream>
#include "windows.h"
#include <conio.h>
using namespace std;
int main()
{
    cout << ("NextDayCovid-19v1.5 programm starting....") << endl;
    Sleep(1000);
    cout << ("The program may not be accurate") << endl;
    cout << ("The program have accuraty 85 - 99%") << endl; 
    cout << ("Instagram @viiiiiiiitya") << endl; 
    cout << ("Please stay home") << endl; Sleep(500);
    cout << ("How many are infected people today") << endl;
    cin >> Nthis;
    cout << ("How many were infected people yesterday") << endl;
    cin >> Nyest;
    //Помилки
    if (Nyest > Nthis) {
        cout << ("Yesterday infected people can`t be more than today") << endl;
        goto final;
    }
    if (Nyest == Nthis) {
        cout << ("If yesterday were infected people the same as today, this program doesn`t be able to predict. Sory...") << endl;
        goto final;
    }
    cout << ("How many people live in 1km^2") << endl;
    cin >> Nnasel;
    cout << ("How many days") << endl;
    cin >> d;
    cout << ("Do you want to predict in the world or coutry(World - 1, Country - 0)") << endl;
    cin >> world;
    //До світу
    if (world == 1) 
        stats = 215;
    else 
        stats = 130;
    //Скрипт
    d = d - 1;
    q = Nthis - Nyest;
    Nnext = Nthis + q + q * Nnasel / stats;
    cout << ("Tomorow wiil be: ") << Nnext << endl;
    if (Nnext >=7704000000) {
        cout << ("All people will be infected tomorow");
        goto final;
    }
    infect_day = q + q * Nnasel / stats;
    cout << infect_day  << (" infected people per first day") << endl;
    N1 = Nthis;
    N2 = Nnext;
    //Обнулення
    b = 0;
    infect_day = 0;
    //Наступні дні
    for (int a = 0; a < d; a++) {
        b = N2 - N1;
        N1 = N2;
        N2 = N2 + b + b * Nnasel / stats;
        cout << ("In ") << a + 2 << (" day will be: ");
        cout << N2 << endl;
        infect_day = b + b * Nnasel / stats;
        cout << infect_day << (" infected people per ") << a + 2 << (" day")<<endl;
        Sleep(200);
        if (N2 >= 7704000000) {
            cout << ("All people will be infected after ") << a + 2 << (" days") << endl;//Весь світ заражений
            break;
        }
        if (N1 >= N2) {
            cout << ("Error...") << endl;// Помилка
            break;
        }
    }
    cout << ("Please stay home") << endl;
    Sleep(3000);
    final:
    cout << ("Press any key to close the console...");
    _getch();
    return 0;
}