#include <iostream>
#include <algorithm>
#include <random>
#include <string>

namespace Core{
    using std::string;

    string titleLetter = "Pouze písmena";
    string titleDigit = "Pouze číslice";
    string titleSpecial = "Pouze speciální znaky";
    string titleAll = "Vše dohromady";

    string nizke = "abcdefghijklmnopqrstuvwxyz";
    string velke = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string cislice = "0123456789";
    string znaky = "!@#$%^&*().+-;<=>?@";

    string letter = nizke + velke;
    string digit = cislice;
    string special = znaky;
    string all = nizke + velke + cislice + znaky;

    int lenght;
    string heslo;
}

int main(){
    int selector;
    std::cout << "Vyber obsah hesla (napiš číslem): " << std::endl;
    std::cout << "1. " << Core::titleLetter << std::endl;
    std::cout << "2. " << Core::titleDigit << std::endl;
    std::cout << "3. " << Core::titleSpecial << std::endl;
    std::cout << "4. " << Core::titleAll << std::endl;
    std::cin >> selector;


    if (selector == 1) {
        std::cout << "Zadejte počet znaků v hesle: " << std::endl;
        std::cin >> Core::lenght;

        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(0, Core::letter.size() -1);

        for (int i = 0; i <Core::lenght; ++i){
            Core::heslo += Core::letter[distribution(generator)];
        }

        std::shuffle(Core::heslo.begin(), Core::heslo.end(), generator);

        std::cout << "Tvé nové heslo o délce " << Core::lenght << " je: " << Core::heslo << std::endl;
    }

    if (selector == 2) {
        
        std::cout << "Zadejte počet znaků v hesle: " << std::endl;
        std::cin >> Core::lenght;

        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(0, Core::digit.size() -1);

        for (int i = 0; i <Core::lenght; ++i){
            Core::heslo += Core::digit[distribution(generator)];
        }

        std::shuffle(Core::heslo.begin(), Core::heslo.end(), generator);

        std::cout << "Tvé nové heslo o délce " << Core::lenght << " je: " << Core::heslo << std::endl;
    }

    if (selector == 3) {
        std::cout << "Zadejte počet znaků v hesle: " << std::endl;
        std::cin >> Core::lenght;

        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(0, Core::special.size() -1);

        for (int i = 0; i <Core::lenght; ++i){
            Core::heslo += Core::special[distribution(generator)];
        }

        std::shuffle(Core::heslo.begin(), Core::heslo.end(), generator);

        std::cout << "Tvé nové heslo o délce " << Core::lenght << " je: " << Core::heslo << std::endl;
    }

    if (selector == 4) {
        std::cout << "Zadejte počet znaků v hesle: " << std::endl;
        std::cin >> Core::lenght;

        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> distribution(0, Core::all.size() -1);

        for (int i = 0; i <Core::lenght; ++i){
            Core::heslo += Core::all[distribution(generator)];
        }

        std::shuffle(Core::heslo.begin(), Core::heslo.end(), generator);

        std::cout << "Tvé nové heslo o délce " << Core::lenght << " je: " << Core::heslo << std::endl;
    }

}