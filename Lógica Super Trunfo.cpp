#include <iostream>
#include <string>

using namespace std;

// Estrutura para a carta
struct Carta {
    string nome;
    int ataque;
    int defesa;
    int velocidade;
};

// Função para comparar as cartas
void compararCartas(Carta carta1, Carta carta2, int escolha) {
    cout << "Comparando as cartas..." << endl;
    
    // Verifica qual atributo foi escolhido
    int atributo1, atributo2;
    switch (escolha) {
        case 1:
            atributo1 = carta1.ataque;
            atributo2 = carta2.ataque;
            cout << "Atributo escolhido: Ataque" << endl;
            break;
        case 2:
            atributo1 = carta1.defesa;
            atributo2 = carta2.defesa;
            cout << "Atributo escolhido: Defesa" << endl;
            break;
        case 3:
            atributo1 = carta1.velocidade;
            atributo2 = carta2.velocidade;
            cout << "Atributo escolhido: Velocidade" << endl;
            break;
        default:
            cout << "Escolha inválida!" << endl;
            return;
    }

    // Exibe os valores dos atributos
    cout << "Jogador 1 (" << carta1.nome << ") tem " << atributo1 << endl;
    cout << "Jogador 2 (" << carta2.nome << ") tem " << atributo2 << endl;

    // Faz a comparação
    if (atributo1 > atributo2) {
        cout << "Jogador 1 venceu a rodada!" << endl;
    } else if (atributo1 < atributo2) {
        cout << "Jogador 2 venceu a rodada!" << endl;
    } else {
        cout << "Empate!" << endl;
    }
}

int main() {
    // Criando cartas para os jogadores
    Carta jogador1 = {"Cavaleiro", 75, 60, 50};
    Carta jogador2 = {"Dragão", 80, 55, 70};

    // Mostrando as cartas
    cout << "Carta do Jogador 1: " << jogador1.nome << endl;
    cout << "Ataque: " << jogador1.ataque << ", Defesa: " << jogador1.defesa << ", Velocidade: " << jogador1.velocidade << endl;
    cout << endl;
    cout << "Carta do Jogador 2: " << jogador2.nome << endl;
    cout << "Ataque: " << jogador2.ataque << ", Defesa: " << jogador2.defesa << ", Velocidade: " << jogador2.velocidade << endl;
    cout << endl;

    // Pedindo para o jogador escolher o atributo
    int escolha;
    cout << "Escolha o atributo para comparar:" << endl;
    cout << "1. Ataque" << endl;
    cout << "2. Defesa" << endl;
    cout << "3. Velocidade" << endl;
    cout << "Digite sua escolha (1-3): ";
    cin >> escolha;

    // Comparando as cartas
    compararCartas(jogador1, jogador2, escolha);

    return 0;
}

