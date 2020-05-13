#include <iostream>
#include <string>
#include <algorithm>

bool isPallindrome(const std::string & text){

    std::string new_text(text);

    std::reverse(std::begin(new_text),std::end(new_text));

    if(new_text == text)
        return true;
    else
        return false;

}

int main() {
    std::string wyraz;
    std::cout<<"Podaj wyraz do sprawdzenia: ";
    std::cin>>wyraz;

    if(isPallindrome(wyraz))
        std::cout<<"Wyraz " << wyraz<< " jest palindromem\n";
    else
        std::cout<<"Wyraz " << wyraz<< " nie jest palindromem\n";
   
    return 0;
}
