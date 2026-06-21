#8. **HackerRank — Reduce Function**: https://www.hackerrank.com/challenges/reduce-function/problem (multiply a list of fractions using `functools.reduce` and a lambda).
from functools import reduce
from fractions import Fraction
def fracs(fraction):
    t = reduce(lambda x , y : x*y , fraction)
    return t.numerator , t.denominator

fraction = [
    Fraction(1,2), 
    Fraction(3,4) , 
    Fraction(10,6)
]

ans1 , ans2 = fracs(fraction)
print(ans1 , ans2)