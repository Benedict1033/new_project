#include <iostream>

int Foo(){
    std::cout << "Hello FOO!" << std::endl;
}

int Bar(){
    std::cout << "Hello BAR!" << std::endl;
}

int Bar2(){
    std::cout << "Hello BAR2!" << std::endl;
}

int main(){
    std::cout << "Hello World" << std::endl;
   
    Bar();
    Bar2();
    Foo();
    return 0;
}