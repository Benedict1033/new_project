#include <iostream>

int Foo(){


}

int Bar(){
    std::cout << "Hello BAR!" << std::endl;
}

int main(){
    std::cout << "Hello World" << std::endl;

    Bar();
    return 0;
}