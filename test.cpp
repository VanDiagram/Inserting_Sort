//this programme will calculate how many each store has widget left
#include <iostream>

int main()
{
  int sold, begInv, store1, store2, store3;

  std::cout<<"Please enter how many amount of widget begInv has: " << '\n';
  std::cin>> begInv;

//3 stores have the same start as 100.
  store1 = store2 = store3 = begInv;

  //store1 in first week
  std::cout<<"How many widget sold in first week of store 1: ";
  std::cin >> sold;
  std::cout<<(store1 -= sold)<< '\n';

  //store2 in first week
  std::cout<<"How many widget sold in first week of store 2: ";
  std::cin >> sold;
  std::cout<< (store2 -= sold)<< '\n';

  //store3 in first week
  std::cout<<"How many widget sold in first week of store 3: ";
  std::cin >> sold;
   std::cout<< (store3 -= sold)<< '\n';

  //The return result
  std::cout<<store1 << '\n';
  std::cout<<store2 << '\n';
  std::cout<<store3 << '\n';

  return 0;
}