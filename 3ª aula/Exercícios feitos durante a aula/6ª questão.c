int x, y, *p;

 y = 0; 

p = &y; 

x = *p; 

x = 4; 

(*p)++; 

--x; 

(*p) += x; 

printf("x=%d y=%d *p=%d", x, y, *p);



Seja o trecho de código acima, quais serão os valores de x, y e *p no comando printf?

Escolha uma opção:
a. x=5, y=6, *p=1
--b. x=3, y=4, *p=4
c. x=0, y=1, *p=10
d. x=y, y=2, *p=0,5