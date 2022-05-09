'''Código em python usando thread para executar o T=100 de uma série de taylor '''
#Calebe de Sa Ferreira | TIA: 32088116  
#Mateus de Pasquali da Silva | TIA: 32086997
#Nicolas Pinsdorf | TIA: 32036108
from threading import Thread
import concurrent.futures
import time

def Taylor1(ln1):
    S = 0
    for i in range(ln1):
        if i == 0:
            pass
        else:
            S += 1/i
    return S
def Taylor2(ln2):
    X = 0
    b = ln2
    for i in range(ln2):
        X += 1 / b
        b += 1
    return X
def Taylor3(ln3):
    Z = 0
    c = ln3
    for d in range(ln3):
        Z += 1 / c
        c += 1
    return Z
begin = time.time()
with concurrent.futures.ThreadPoolExecutor() as executor:
    print('Compilando código!')
    future = executor.submit(Taylor1, 50)
    return_value = future.result()
    Resultado2 = Taylor2(25)
    Resultado3 = Taylor3(25)
    Final_result = return_value + Resultado2
    print('Resultado =', Final_result)
    end = time.time()
    print('Speedup: ', end - begin, 'segundos')
