import numpy as np
from sklearn.linear_model import LinearRegression

x = np.array([
    [1,7],
    [2,6],
    [3,5],
    [4,4]
])
y = np.array([55,60,65,70])

model = LinearRegression()
model.fit(x,y)

print("Model Coefficient :  ",model.coef_)  #[ 2.5 -2.5]
print("Model intercept  : " ,model.intercept_) #70.0

prediction = model.predict([[2,5]])  #2*2.5 + 5*(-2.5) + 70.0
print("Prediction =  ",prediction)  #62.5