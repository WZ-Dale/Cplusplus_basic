#include <iostream>

void swap(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main(){
  int a = 0, b = 0;
  std::cout << "请输入两个不同的整数:";
  std::cin >> a >> b;
  std::cout << "交换前:" << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  swap(a,b);
  std::cout << "交换后:" << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  
  return 0;
}
