#include <iostream>
#include "Sala.hpp"

int main() {
    // Criar sala com 10 assentos
    Sala sala("Sala 1", 10);

    std::cout << "=== Sistema de Reserva de Cinema ===\n\n";

    // Reservar alguns assentos
    sala.reservar(1);
    sala.reservar(3);
    sala.reservar(5);

    // Testar erro ao reservar assento ja ocupado
    std::cout << "\nTentando reservar assento ja ocupado:\n";
    try {
        sala.reservar(3);
    } catch (const std::exception& e) {
        std::cout << "Erro: " << e.what() << "\n";
    }

    // Cancelar uma reserva
    std::cout << "\nCancelando reserva:\n";
    sala.cancelar(3);

    // Exibir mapa
    sala.exibirMapa();

    // Consultar disponibilidade
    std::cout << "\nAssentos disponiveis: " << sala.consultarDisponibilidade() << "/10\n";

    return 0;
}
