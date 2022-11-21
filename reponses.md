# Exercice 1

angle | cosinus
    0 |    1.00
   10 |    0.98
   20 |    0.94
   30 |    0.87
   40 |    0.77
   50 |    0.64
   60 |    0.50
   70 |    0.34
   80 |    0.17

# Exercice 3

val1 xxx
mask1=0x35 53
mask1=0x35 53
~1=fffffffe
mask1=0x14 20

# Exercice 4 

OU | 33 | 51 | 0011 0011 | byte1 | 0x4 | 0011 0111
/
ET | 3F | 61 | 0011 1111 | byte1 & 0x0F | 0000 1111
/
ET | 3F | 61 | 0011 1111 | byte1 & 0xF0 | 0011 0000
/
INV | 8 | 8 | 0000 1000 | ~byte1 | 1111 0111
/
ET+INV | 33 | 51 | 0011 0011 | byte1 & ~(0x10) | 
ET+INV | 33 | 51 | 0011 0011 | byte1 & ~(1<<4); | 1110 1111

# Exercice 5
1) A
2) C
3) C
4) B

# Exercice 6
3
3.33
3.33

# Exercice 7
1) A et B
2) C et D

# Exercice 8
combien de melons ?2
prix a payer : 5.98 euros

# Exercice 9
1) A et C
2) B
3) A et B