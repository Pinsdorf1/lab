# Controle de acesso à região crítica para a variável global compartilhada

Nossa variável compartilhada é o resultado final.

Usamos #pragma omp critical em um de nossos códigos para evitar condições de corrida. Isso acontece quando pode haver resultados imprevisíveis ao executar dois ou mais threads simultaneamente. Desta forma, apenas uma thread pode executar o bloco estruturado por vez. Portanto, se um thread estiver em uma seção crítica, nenhum outro thread poderá estar na mesma seção crítica.
Para realizar todos as somatórias necessários na função taylor, usamos a variável local_rank, e então a variável compartilhada receberá esse valor acumulado.
