#include <iostream>

int main(){
    
    
    
    int a[10];
    int* p;
    
    
    std::cout << "\n" << std::endl;
    
    std::cout << "Pointers can point to arrays and have indexes:" << std::endl;
    
    std::cout << "\na   ";
    for (int i = 0; i < 10; i++){
        a[i] = i;
        std::cout << a[i] << " ";
    }

    p = a; //p points to the same memory addresses as a
    
    std::cout << "\np   ";
    for (int i = 0; i < 10; i++){
        std::cout << p[i] << " ";
    }
    
    std::cout << "\n\na   ";
    for (int i = 0; i < 10; i++){
        a[i] = i + 10;              //any changes to a makes the same changes to p
        std::cout << a[i] << " ";
    }
    std::cout << "\np   ";
    for (int i = 0; i < 10; i++){
        std::cout << p[i] << " ";
    }
    
    std::cout << "\n\na   ";
    for (int i = 0; i < 10; i++){
        p[i] = i + 100;              //any changes to p makes the same changes to a
        std::cout << a[i] << " ";
    }
    std::cout << "\np   ";
    for (int i = 0; i < 10; i++){
        std::cout << p[i] << " ";
    }
    
    std::cout << "\n" << std::endl;

    return(0);
}
