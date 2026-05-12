#Explore Coefficient and interception
import numpy as np
from sklearn.linear_model import LinearRegression

X = np.array([[1] , [2] , [3] , [4] , [5]])
Y = np.array([50,55,60,65,70])

model = LinearRegression()

model.fit(X,Y)

print(model.coef_)
print(model.intercept_)

prediction = model.predict([[6]])
print(prediction)