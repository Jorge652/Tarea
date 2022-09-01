 close all
 clear all
 clc

 load logaritmica.txt
 x1 = logaritmica(:,1);
 y1 = logaritmica(:,2);

 load cuadratica.txt
 x2 = cuadratica(:,1);
 y2 = cuadratica(:,2);

 load lineal1.txt
 x3 = lineal1(:,1);
 y3 = lineal1(:,2);

 load constante.txt
 x4 = constante(:,1);
 y4 = constante(:,2);



 figure()
 title('Grafica')
 hold on
 plot(x1,y1,'y','linewidth',2)
 grid on
 plot(x2,y2,'g','linewidth',2)
 hold on
 plot(x3,y3,'b','linewidth',2)
 grid on
 plot(x4,y4,'r','linewidth',2)

