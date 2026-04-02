#ifndef SALA_HPP
#define SALA_HPP

#include <string>
#include <vector>
#include "Assento.hpp"

class Sala {
private:
    std::string nome;
    std::vector<Assento> assentos;

public:
    Sala(const std::string& nome, int totalAssentos);

    void reservar(int numero);
    void cancelar(int numero);
    void exibirMapa() const;
    int consultarDisponibilidade() const;
};

#endif
