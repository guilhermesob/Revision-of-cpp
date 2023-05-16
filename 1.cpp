#include <iostream>

int main() {

    int i = 4;   //PROGRAM WILL COMPILE WITHOUT PROBLEM but UNREADABLE
    i = i / 2;
    std::cout << "The result is " << i << std::endl;


                //PROGRAM WILL COMPILE WITHOUT PROBLEM but UNREADABLE
    int x = 4;    x = x / 2;        std::cout     << "The result is " << x << std::endl;



    return 0;
}