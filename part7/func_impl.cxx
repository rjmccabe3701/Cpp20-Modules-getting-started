// func_impl.cxx
module;

#include <iostream>

module mod;

void func() {
    std::cout << "hello, world!\n";
}

void func(int p) {
    std::cout << "hello, " << p << '\n';
}

void func(const S& ptr) {
    std::cout << "hello, " << ptr.get_val() << '\n';
}

int S::get_val() const {
    return val;
}


// namespace X {
//     void func() {
//         std::cout << "hello, world!\n";
//     }

//     void func(int p) {
//         std::cout << "hello, " << p << '\n';
//     }
// }