# Author: Sheng Kuang Hou
# Date  : Jan 10, 2018
# https://open.kattis.com/problems/r2
# Easy

x, y = map(int, input().split());
res = y + (y - x); 
print (res);