# Lambda Function
~way to create anonymous function
~a python expression not a statement that creates a samll function object without giving it name.
~writing a full def block would be excessive ceremony for one line of logic so use lambda function there.
~its behave exactly like one created equivalent def statement. its body is restricted to a single expression.

~it can't contain assignment(=) , if/elif/else blocks , for , while , try/except ,import or an explicit return. 

~There is no return keyword in lambda because the value of the expression itself is implicitly returned when the function is called.

~A conditional expression is allowwd (x if condition else y) because it is an expression.
### Syntax
lambda : expression   --> no parameters
lambda X : expression   ---> one parameter
lambda x , y : expression  --> multiple parameter
lambda x , y = 10 : expression --> default value
lambda *args : expression  --> variable positional arguments
lambda **kwargs : expression  --> variable keyword args

lambda x , *args , y = 1 , **kwargs --> Full signature , same as def

lambda x : a if x>0 else b --> conditional (ternary) expresion inside.

def fun_name(para_1 , para_2):
    return expression

fun_name = lambda para1 , para2 : expression 


### print((lambda x : x**2)(5))   here 5 is parameter.

## Map , filter , reduce , sorted , functools.cmp_to_key

### Map
map(function , iterable , ...) it returns a map object. return a lazy iterator
~applies a function to each item of one or more iterable and returns lazy iterator.

nums = [1,2,3,4]
data = list(map(lambda x : x**2 , nums))

#### squares = map(lambda x : x**2 , nums) , it returns a map object so we have to explictly convert it into list . so 
# list(map(lambda x : x**2 , nums))

### Filter 
syntax : fiter(function , iterable)
keeps only the elements for which the functions returns the truthy  values . also return a lazy iterator.
filter elements of a sequence bases on a condition.returns only those elements which satisfies the condition.

#### filter(lambda x : x % 2== 0 , nums) returns a filter object a lazy iterator i.e. <filter object at 0x000001F3B9CA9CC0> so we have to explictly type cast it into list.
list(filter(function , iterable))

### sorted(iterablle , key = ... , reverse = ...)
key function is called once per element to produce a comparison value.

if we have to sort based on multiple things then wrap this into tuple.
example : sort_by_length_then_aplha = sorted(words , key = lambda x : (len(x) , x))

ranked = sorted(employees , key = lambda e : (-e['salary'] , e['name']))
print(ranked)
#if -e['salary'] here -e it means sorting salary in descending order



### reduce
import from functools i.e from functools import reduce.

~applies a two-argument function cumulatively from left to right , reduce an iterable into a single value.

reduce(function , iterable , /[,initial])  -->initial is optional

with_start = reduce(lambda x , y : x+y , [1,2,3] , 100)
here start with 100 so 100 is used as accumulator.
o/p : (100+1+2+3) = 106

### cmp_to_key
from functools import cmp_to_key
it converts old-style comparison function(function that compares two arguments and returns a -1,0,1) into a key function.

example : 
def mycmp(a,b):
    print(')

#### How it work
1) Define cmp(a, b): Write a function that compares two values and returns negative, zero or positive based on their order.
2) Wrap items in a class: Create a helper class that uses cmp to define comparison methods like <, ==, etc.
3) Sort using wrappers: Wrap the list items, sort them using sorted() or .sort(), then extract the original values if needed.

### Memory model
lambda and def compile to the same kind of object. When a interpreter parese a lambda expression . it produces a code object exactly the way it would for a def body.then the runtime bytecode MAKE_FUNCTION builds a function object from that code object at the moment the lambda line executes.

The name is always <lambda>. Both __name__ and __qualname__ are the literal string '<lambda>' for every lambda, regardless of what variable it is assigned to. 