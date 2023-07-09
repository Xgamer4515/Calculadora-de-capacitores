# Calculadora de capacitores
Este é um programa em C++ que calcula a capacitância total de capacitores em diferentes tipos de associação: série, paralelo e mista.

## Compilação e execução

1.Certifique-se de ter um compilador C++ instalado em seu sistema.

2.Abra um terminal ou prompt de comando e navegue até o diretório onde o arquivo do código-fonte está localizado.

3.Compile o programa usando o seguinte comando:
```
g++ -o jokenpo main.cpp
```
Se você estiver usando um sistema Windows, você pode usar o MinGW para compilar:
```
g++ -o jokenpo.exe main.cpp
```
4.Após a compilação bem-sucedida, execute o programa digitando o seguinte comando:
```
./jokenpo
```
No Windows, use o comando:
```
jokenpo.exe
```

## Opções do menu
Ao executar o programa, você será apresentado a um menu com as seguintes opções:

1. Série: Calcula a capacitância total dos capacitores em uma associação em série.
2. Paralelo: Calcula a capacitância total dos capacitores em uma associação em paralelo.
3. Mista: Calcula a capacitância total dos capacitores em uma associação mista, com capacitores em série e paralelo.

Escolha a opção desejada digitando o número correspondente e pressionando Enter.

## Entrada de dados

Dependendo da opção selecionada, o programa solicitará diferentes informações:

- Para a opção Série e Paralelo: digite a quantidade de capacitores e, em seguida, insira os valores da capacitância e unidades para cada capacitor.
- Para a opção Mista: digite a quantidade de capacitores em série e, em seguida, a quantidade de capacitores em paralelo. Em seguida, insira os valores da capacitância e unidades para cada capacitor.

## Saída

Após fornecer as informações necessárias, o programa calculará a capacitância total e exibirá o resultado na tela.

## Limpar a tela

O programa inclui uma função limparTela() para limpar a tela do console. Essa função utiliza comandos específicos para sistemas operacionais Windows e Linux. Certifique-se de ajustar essa função de acordo com o seu sistema operacional, se necessário.

## Continuar ou sair
Após calcular a capacitância total, o programa perguntará se você deseja continuar utilizando a calculadora. Digite 'S' ou 's' para continuar ou 'N' ou 'n' para sair do programa.

Espero que isso ajude a criar um README útil para o código da calculadora de capacitores!

## Contribuições

Contribuições são bem-vindas! Se você tiver alguma ideia, sugestão ou relatório de bug, abra um problema ou envie um pull request.

## Licença

Este projeto está licenciado sob a Licença MIT.
