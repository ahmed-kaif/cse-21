# Problem 1: 
Given two integer a,b. Find the Bezout's coeffiecients. (Extended Euclidean Algorithm)

# Problem 2:

x = a0 mod m0
x = a1 mod m1
x = a2 mod m2

Take a0, a1, a2, m0, m1, m2 as user input and find x (using chinese remainder theorem)

M = m0 m1 m2 -> relatively coprime

M0 = M/m0
M1 = M/m1
M2 = M/m2

take inverse of M0, M1, M2 -> Y0 Y1 Y2
x = a0 M0 Y0 + a1 M1 Y1 + a2 M2 Y2
