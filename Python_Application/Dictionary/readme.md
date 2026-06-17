# Python Dictionary

~Built-in mapping type , maps hashable keys to arbitrary values , is mutable and preserved insertion order.
~first choice structure for lookups , counting , JSON records, configuration data, any problem where we need fast access by key.

~not indexed by position like a list , it is indexed by a key. if key is missing it raises KeyErrorS. get() return default value if provided otherwise None but never raise an error.

~ use get() is safer choice than []
.get() has o(n) time complexity and O(k) space complexity where k is unique element.

~replace an existing key the old value is overwritten the insertion oreder does not change.

~if we delete key and insert it again it goes to the end.

~ Example : 'name' : phonenumber i.e. phonebook

## Creation Way
d1 = {}
d2 = {"Name":"John" , "age":10}
d3 = dict(Name:"John" , age = 25)  -->rule : key does'nt have double or single quote in this syntax otherwise it will raise an error

d4 = dict([("name","John") , ("age" , 25)]) #remind : in this we don't use : we use , 
d5 = {x : x*x for x in range(5)}

## Access and update
value = d.get(key , default = "x")
    ~default is optional ,  if key  not include then it shows default.
    if default is not provide it shows None.
    and if key exists it shows key value.

    example : value = d.get("city" , "Unknown")
    value = Unknown

## Delete and merge
del d['age'] ->delete age key with its value and modified original dictionary

removed = d.pop('age') ->remove age key with its  value and modifies original dict.  

### for merge
| -> create new dictionary
|=  -> updates the left hand dictionary a|=b and when key overlap the right hand side wins.

## counting
we can do it using d.get(num , 0)+1 , 
manually , also using Counter function which import from Collections.
~Counter is designed specifically for frequency counting.

from collections import Counter.
freq = dict(Counter(nums))

## setdefault()
dictionary.setdefault(key , default_value)
if key exists -> return its value.
if does not exist -> create the key with the default value and return that value.

## Methods and operations

1) keys()  --> returns a dynamic view of the keys. use it when we need to iterate over keys or do membership test on keys.

2) values() -->  returns a dynamic view of the values, good for iterating over all values.

3) items() ---> returns a view of (key , value) pairs. Best for loops that need both at once. it does'nt take any argument

4) get(key , default) --> safe lookup without keyError . best when the key may be absent.

5) update(mapping_or_iterable)  -> overrites existing keys and add new keys.it accepts another mapping of key-value pairs or keyword argument

6) pop(key , default)  -> removes key and returns its value. used it when we need the value and want to delete the entry in one step.

7) popitem()  --> Removes and returns a (key,value) pair in LIFO order. Good for destructive iteration.

8) setdefault(key , default)  --> returns the value if the key exists ; otherwise insert the key with default and returns the default.useful for grouping and nested accumulation.  the default value must be a list [].because only list have .append() value.

9) copy() creates seprate dict objects . changes in one doest affects original but netsed objects are shared.

10) fromkeys() -->  create a new dictionary from key in an iterable.All keys share the same value object.

11) clear() -> removes all items from the dictionary . 

12) del dict['key']  --> deletes key-values pair , Raise keyError if missing.