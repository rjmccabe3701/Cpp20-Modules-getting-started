// func.cxx
module;

#include <iostream>
#include <vector>

export module mod;

namespace test_ns {
export template <typename U>
class Foo {
   public:
   template <typename T>
   T doStuff(T arg) {
    std::cout << "in DoStuff: " << arg << "\n";
    return arg *2;
   }

   void addElem(U elem) {
      vec.push_back(elem);
   }

   std::vector<U> vec;
};
}

export void func() {
    std::cout << "hello, world!\n";
}
