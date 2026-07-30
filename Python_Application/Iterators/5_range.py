lst = [1,2,3]
print(id(lst))

lst_iter = iter(lst)
print(id(lst_iter))  #id of original and id of its iterator should be different.

lst_iter1 = iter(lst_iter)
print(id(lst_iter1)) #id of above iterator and this iterator is same. so it is lst_iter itself.