class Calculation:
    def calc(self , a  = 1 , b = 1 , *args):
        result = a * b
        for no in args:
            result*=no

        return result
    
obj = Calculation()
print(obj.calc())
print(obj.calc(4))

#using multiple argument
print(obj.calc(2,4,5))