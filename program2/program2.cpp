#include <iostream>
#include <filesystem>

using namespace std;

int main() {
    char sciezka[/home/dmytro-pedchenko/Downloads];
    GetCurrentDirectory(/home/dmytro-pedchenko/Downloads, sciezka);

    cout << "Katalog roboczy: " << sciezka << endl;

    return 0;
}

