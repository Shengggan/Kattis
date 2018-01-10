# Author: Sheng Kuang Hou
# Date  : Jan 10, 2018
# https://open.kattis.com/problems/quadrant
# Easy

x = int(input());
y = int(input());

if((x > 0) and (y > 0)):
  print(1);
elif ((x < 0) and (y > 0)):
  print(2);
elif ((x < 0) and (y < 0)):
  print(3);
else:
  print(4);
