
#include <iostream>
using namespace std;

double mem = 0;
bool mem_used = false;
int wybor;
double add(double a, double b)
{
    if (mem_used == false)
    {
        cout << "Podaj pierwszą liczbę/n";
        cin >> mem;
        mem_used = true;
    }
    a = mem;
    cout << "Wpisz druga liczbe";
    cin >> b;
    return a + b;

}
double sub(double a, double b)
{
    if (mem_used == false)
    {
        cout << "Podaj pierwszą liczbę/n";
        cin >> mem;
        mem_used = true;
    }
    a = mem;
    cout << "Wpisz druga liczbe";
    cin >> b;
    return a - b;
}
double tim(double a, double b)
{
    if (mem_used == false)
    {
        cout << "Podaj pierwszą liczbę/n";
        cin >> mem;
        mem_used = true;
    }
    a = mem;
    cout << "Wpisz druga liczbe";
    cin >> b;
    return a * b;
}
double div(double a, double b)
{
    if (mem_used == false)
    {
        cout << "Podaj pierwszą liczbę/n";
        cin >> mem;
        mem_used = true;
    }
    a = mem;
    cout << "Wpisz druga liczbe";
    cin >> b;
    return a / b;
}
double mod(double a, double b)
{
    if (mem_used == false)
    {
        cout << "Podaj pierwszą liczbę/n";
        cin >> mem;
        mem_used = true;
    }
    a = mem;
    cout << "Wpisz druga liczbe";
    cin >> b;
    return a - (int)(a / b) * b;
}
void erase()
{

}
void menu()
{
    cout << "Witamy w kalkulatorze./n";
    cout << "Oto czynnosci ktore mozesz tutaj zrealizowac:/n";
    }
    cout << "1. Dodawanie/n";
    cout << "2. Odejmowanie/n";
    cout << "3. Mnozenie/n";
    cout << "4. Dzielenie/n";
    cout << "5. Modulo/n";
    cout << "6. Reset pamieci/n";
    cout << "7. Koniec/n";
    cout << "Wpisz liczbę odpowiadającą czynnosci ktora chcesz zrealizowac:/n";
    cin >> wybor;
    switch (wybor)
    {
    case 1:
        add(mem, b);
        break;
    case 2:
        sub(mem, b);
        break;
    case 3:
        tim(mem, b);
        break;
    case 4:
        div(mem, b);
        break;
    case 5:
        mod(mem, b);
        break;
    case 6:
        mem = 0;
        mem_used = false;
        break;
    case 7:
        break;
    default:
        cout << "Niepoprawny rozkaz./n";
        break;
    }
}
int main()
{
    menu();
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
