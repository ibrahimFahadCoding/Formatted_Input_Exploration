#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>

int main() {
     using std::cout, std::cerr, std::cin, std::endl, std::setw, std::quoted, std::ws;
     cout << "enter tres numeros: ";
     std::int32_t num1;
     std::int32_t num2;
     std::int32_t num3;
     cin >> num1 >> num2 >> num3;
     cout << num1 + num2 + num3 << "\n";

     cout << "quiero una palabra con cinco letters: ";
     std::string palabra;

     cin >> setw(5) >> palabra;
     cout << palabra << "\n";

     cout << "quiero una palabra interesante: ";
     std::string palabra_interesante;
     std::getline(cin >> ws, palabra_interesante);
     cout << quoted(palabra_interesante) << endl;

     return EXIT_SUCCESS;
}














