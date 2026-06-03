def insert_patient_data(name : str , age :int):  #type hint
    if type(name)== str and type(age)==int:   #-->type validation , because type hints not create the error even if wrong data type value is passes it is just for information
        if age > 0:
            print(name)
            print(age)
            print("inserted into database")
        else:
            raise ValueError('Age should be greater than 0')
    else:
        raise TypeError('Incorrect data type')
    

def update_patient_data(name : str , age :int):
    
    if type(name)== str and type(age)==int:
        print(name)
        print(age)
        print("inserted into database")

    else:
        raise TypeError('Incorrect data type')
    
insert_patient_data('abhay',8)
print("Function call")

'''
observe , we write a too much code for data validation , type validation just for two operation insert and update if we have design 50+ function then ??? so pydantic model play a crucial role , reduces boilerplate code.
'''