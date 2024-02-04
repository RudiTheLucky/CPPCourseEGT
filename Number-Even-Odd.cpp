//Напишете програма на С++, която:
//
//Използва въведени от потребител цели числа
//
//Проверява дали числото е четно или нечетно
//
//Ако числото е четно, на екрана се извежда “even”, ако е нечетно – “odd”


#include <iostream>

int main() {
    int n;
    std::cout << "How many numbers: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;

        if (num % 2 == 0) {
            std::cout << "even" << std::endl;
        }
        else {
            std::cout << "odd" << std::endl;
        }
    }

    return 0;
}