'''Código em python usando thread para executar o T=100 de uma série de taylor '''
#Calebe de Sa Ferreira | TIA: 32088116  
#Mateus de Pasquali da Silva | TIA: 32086997
#Nicolas Pinsdorf | TIA: 32036108

from threading import Thread
import concurrent.futures
import time

def Taylor(ln): #Função que calcula a série de Taylor 
    taylor_Func = 0
    for i in range(ln):
        if i == 0:
            pass
        else:
             taylor_Func += 1/i
    return taylor_Func
begin = time.time()

with concurrent.futures.ThreadPoolExecutor() as executor:
    print('Compilando o programa!')
    future = executor.submit(Taylor, 100)#ln = 100
    return_value = future.result() 
    Resultado = return_value 
    print('Resultado = ', Resultado)
    end = time.time()
    print('Speedup: ', end - begin, 'segundos')
