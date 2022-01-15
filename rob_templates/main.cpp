// main.cpp
#include <iostream>
import mod;

int main(){
  func();
  test_ns::Foo<int> foo;
  std::cout << foo.doStuff(82.1) << std::endl;
  std::cout << foo.doStuff(37) << std::endl;

  foo.addElem(37);
  std::cout << "Vec : ";
  for(auto& i: foo.vec) {
    std::cout << i << " ";
  }
  std::cout << "\nsss\n";
}
