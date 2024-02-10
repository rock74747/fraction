#include <iostream>
#include <string>
#include <cmath>
#include "fraction.hpp"



int main()
{
    setlocale(LC_ALL, "Russian");
    
    std::string str1;
    std::cout << "Введите первую дробь \n";
    std::getline(std::cin, str1);
    Fraction a(str1);

    std::string str2;
    std::cout << "Введите вторую дробь или целое число \n";
    std::getline(std::cin, str2);
    Fraction b(str2);
   
   
    Fraction resalt = 0;
    std::cout << "Умножение: \n";
    resalt.multiplication(a.getChisl(), a.getZnam(), b.getChisl(), b.getZnam());
    std::cout << "Деление: \n";
    resalt.division(a.getChisl(), a.getZnam(), b.getChisl(), b.getZnam());
    std::cout << "Сложение: \n";
    resalt.addition (a.getChisl(), a.getZnam(), b.getChisl(), b.getZnam());
    std::cout << "Вычитание: \n";
    resalt.subtraction (a.getChisl(), a.getZnam(), b.getChisl(), b.getZnam());
    
    std::cout << "Действительное число: " << resalt.D_chislo(a.getChisl(), a.getZnam());


  try
    {
     
    
    }
    catch (std::exception ex)
    {
        std::cout << ex.what() << '\n';
    }
    


    return 0;
}




