/*
 * Author: Sheng Kuang Hou
 * Date  : Jan 4, 2018
 * https://open.kattis.com/problems/twostones
 * Easy
 */

#include<iostream> 
 
using namespace std;

int main()
{
  int num;
  cin >> num;
  
  if((num % 2) == 0){
      cout << "Bob";
  } else {
      cout << "Alice";
  }

  return 0;
}