import numpy as np
import matplotlib.pyplot as plt
x, y = np.loadtxt('lineal1.txt', skiprows=1, usecols=[0,1], unpack=True)
x1, y1 = np.loadtxt('constante.txt', skiprows=1, usecols=[0,1], unpack=True)
x2, y2 = np.loadtxt('cuadratica.txt', skiprows=1, usecols=[0,1], unpack=True)
x3, y3 = np.loadtxt('logaritmica.txt', skiprows=1, usecols=[0,1], unpack=True)



print(x,y)

plt.plot(x,y)
plt.plot(x1,y1)
plt.plot(x2,y2)
plt.plot(x3,y3)
plt.show()