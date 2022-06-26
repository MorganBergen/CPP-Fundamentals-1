#include <iostream>
#include <string>
#include "node.h"

void func();

int main(){
    
    Node<std::string>* morgan = nullptr;
    morgan = new Node<std::string>("morgan");
    Node<std::string>* maha = nullptr;
    maha = new Node<std::string>("maha");
    morgan -> setNext(maha);
    std::cout << morgan -> getEntry() << " " << maha -> getEntry();
    
    
    
    return(0);
}

/*
void func(){
    Node* start = nullptr;
    start = new Node(1);
    Node* morgan = nullptr;
    morgan = new Node(2);
    start -> setNext(morgan);
    
    std::cout << "\nlinked nodes\n" << std::endl;
    std::cout << "[" << start -> getEntry() << " " << start -> getNext() << "]" << "[" << morgan -> getEntry() << " " << morgan -> getNext() << "]" << std::endl;

    std::cout << "[" << start -> getEntry() << " " << morgan << "]" << "[" << morgan -> getEntry() << " " << morgan -> getNext() << "]" << std::endl;

    
    if (morgan == start -> getNext()) {
        std::cout << "[" << start -> getEntry() << "-->]" << "[" << morgan -> getEntry() << "-->]" << morgan -> getNext() << std::endl;
    }
}
*/
