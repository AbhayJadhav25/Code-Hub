import dis
def maker():
    return lambda x: x + 1
dis.dis(maker)

'''
Disassembling a function that returns a lambda confirms this:
'''

f = lambda x: x + 1
print(f.__name__) #<lambda>