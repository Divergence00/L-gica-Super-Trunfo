# Jogo de L�gica Super Trunfo - C++

# Funcionaliades

Carta do Jogador 1:
Carta: Cavaleiro
Ataque: 75, Defesa: 60, Velocidade: 50

Carta do Jogador 2:
Carta: Drag�o
Ataque: 80, Defesa: 55, Velocidade: 70

Escolha o atributo para comparar:
1. Ataque
2. Defesa
3. Velocidade
Digite sua escolha (1-3): 1

Comparando as cartas...
Atributo escolhido: Ataque
Jogador 1 (Cavaleiro) tem 75
Jogador 2 (Drag�o) tem 80
Jogador 2 venceu a rodada!


# Estrutura

struct Carta {
    string nome;     // Nome do personagem ou item da carta
    int ataque;      // Atributo de ataque
    int defesa;      // Atributo de defesa
    int velocidade;  // Atributo de velocidade
};

# Como jogar

#O programa exibe duas cartas, uma para o Jogador 1 e outra para o Jogador 2.

#O jogador escolhe qual atributo quer comparar entre as cartas:

#1 = Ataque

#2 = Defesa

#3 = Velocidade

#O programa compara os atributos escolhidos e determina o vencedor ou empate.

#O jogo termina, mostrando a carta vencedora ou indicando um empate, dependendo da compara��o dos atributos.
