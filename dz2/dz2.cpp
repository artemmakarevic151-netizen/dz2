#include <iostream>
using namespace std;

int main() {
    int country;
    cout << "1 - Україна\n2 - Польща\n3 - Канада\n4 - Німеччина\n5 - Франція\n";
    cin >> country;

    switch (country) {
    case 1: cout << "Столиця: Київ\n"; break;
    case 2: cout << "Столиця: Варшава\n"; break;
    case 3: cout << "Столиця: Оттава\n"; break;
    case 4: cout << "Столиця: Берлін\n"; break;
    case 5: cout << "Столиця: Париж\n"; break;
    default: cout << "Невірний номер\n";
    }

    int day;
    cout << "\nВведіть номер дня тижня: ";
    cin >> day;

    if (day == 6 || day == 7)
        cout << "Вихідний день\n";
    else if (day >= 1 && day <= 5)
        cout << "Робочий день\n";
    else
        cout << "Невірний номер дня\n";

    int direction;
    cout << "\n1 - Північ\n2 - Південь\n3 - Захід\n4 - Схід\n";
    cin >> direction;

    switch (direction) {
    case 1: cout << "Після команди назад: Південь\n"; break;
    case 2: cout << "Після команди назад: Північ\n"; break;
    case 3: cout << "Після команди назад: Схід\n"; break;
    case 4: cout << "Після команди назад: Захід\n"; break;
    default: cout << "Невірний напрямок\n";
    }

    int animal;
    cout << "\n1 - Жираф\n2 - Орел\n3 - Лев\n4 - Корова\n5 - Вовк\n6 - Кінь\n7 - Тигр\n";
    cin >> animal;

    switch (animal) {
    case 1: cout << "Травоїдна\n"; break;
    case 2: cout << "Хижак\n"; break;
    case 3: cout << "Хижак\n"; break;
    case 4: cout << "Травоїдна\n"; break;
    case 5: cout << "Хижак\n"; break;
    case 6: cout << "Травоїдна\n"; break;
    case 7: cout << "Хижак\n"; break;
    default: cout << "Невірний номер тварини\n";
    }

    return 0;
}