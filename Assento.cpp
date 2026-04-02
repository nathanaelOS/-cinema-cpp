#include "Assento.hpp"
#include <stdexcept>

Assento::Assento(int numero) : numero(numero), reservado(false) {}

void Assento::reservar() {
    if (reservado) {
        throw std::runtime_error("Assento " + std::to_string(numero) + " ja esta reservado.");
    }
    reservado = true;
}

void Assento::liberar() {
    reservado = false;
}

bool Assento::estaReservado() const {
    return reservado;
}

int Assento::getNumero() const {
    return numero;
}
