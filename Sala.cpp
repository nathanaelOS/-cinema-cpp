#include "Sala.hpp"
#include <iostream>
#include <stdexcept>

Sala::Sala(const std::string& nome, int totalAssentos) : nome(nome) {
    for (int i = 1; i <= totalAssentos; i++) {
        assentos.push_back(Assento(i));
    }
}

void Sala::reservar(int numero) {
    for (Assento& a : assentos) {
        if (a.getNumero() == numero) {
            a.reservar(); // lanca excecao se ja reservado
            std::cout << "Assento " << numero << " reservado com sucesso.\n";
            return;
        }
    }
    throw std::runtime_error("Assento " + std::to_string(numero) + " nao encontrado.");
}

void Sala::cancelar(int numero) {
    for (Assento& a : assentos) {
        if (a.getNumero() == numero) {
            a.liberar();
            std::cout << "Reserva do assento " << numero << " cancelada.\n";
            return;
        }
    }
    throw std::runtime_error("Assento " + std::to_string(numero) + " nao encontrado.");
}

void Sala::exibirMapa() const {
    std::cout << "\n=== Mapa da Sala: " << nome << " ===\n";
    for (const Assento& a : assentos) {
        std::cout << "[" << a.getNumero() << ": "
                  << (a.estaReservado() ? "X" : "O") << "] ";
    }
    std::cout << "\n(O = livre, X = reservado)\n";
}

int Sala::consultarDisponibilidade() const {
    int livres = 0;
    for (const Assento& a : assentos) {
        if (!a.estaReservado()) livres++;
    }
    return livres;
}
