// Gera talna sem telur þriðju hverju tölu

#include <iostream>

using namespace std;

int main()
{
    int fyrri, seinni;
    cout << "Sladu inn byrjun og lok bils" << endl;
    cin >> fyrri >> seinni;

    for (int i = fyrri; i <= seinni; i+=3)
    {
        cout << i << endl;
    }
    for (int i = seinni; i <= fyrri; i+=3)
    {
        cout << i << endl;
    }

    return 0;
}


// Hæsta og lægsta
#include <iostream>

using namespace std;

int main()
{
    int tala, haesta, laegsta;
    char svar;
    cout << "Sladu inn tolu" << endl;
    cin >> tala;
    haesta = tala;
    laegsta = tala;
    cout << "Viltu endurtaka tetta?" << endl;
    cout << "Veldu j fyrir ja, allt annad fyrir nei." << endl;
    cin >> svar;

    while (svar == 'j')
    {
        cout << "Sladu inn tolu" << endl;
        cin >> tala;
        if (tala > haesta)
        {
            haesta = tala;
        }
        else if (tala < laegsta)
        {
            laegsta = tala;
        }
        cout << "Viltu endurtaka tetta?" << endl;
        cout << "Veldu j fyrir ja, allt annad fyrir nei." << endl;
        cin >> svar;
    }
    cout << "Haesta talan var: " << haesta << endl;
    cout << "Laegsta talan var: " << laegsta << endl;

    return 0;
}

//litlir stafir
#include <iostream>

using namespace std;

int main()
{
        char stafur = 'a';

        while (stafur <= 122){
            cout << stafur << endl;
            stafur++;
            }
return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

//langhlið
int main()
{
    double a, b, c;
    cout << "Sláðu inn tvær skammhlidar þríhyrnings: " << endl;
    cout << "Skammhlið 1: ";
    cin >> a;
    cout << "Skammhlið 2: ";
    cin >> b;

    c= sqrt(a*a+b*b);
    cout << "Þá er langhliðin: " << c << " cm." << endl;

    return 0;
}
