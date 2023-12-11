#include <iostream>

int Foo(){
    std::cout << "Hello FOO!" << std::endl;
}

int Bar(){
    std::cout << "Hello BAR!" << std::endl;
}

int main(){
    std::cout << "Hello World" << std::endl;
   
    Bar();
    Foo();
    return 0;
}