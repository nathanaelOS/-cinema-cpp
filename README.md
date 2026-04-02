# Sistema de Reserva de Assentos de Cinema (C++)

Atividade Complementar — Sistema orientado a objetos em C++ com separação entre interface e implementação.

## Estrutura do Projeto

```
cinema/
├── Assento.hpp   # Interface da classe Assento
├── Assento.cpp   # Implementação da classe Assento
├── Sala.hpp      # Interface da classe Sala
├── Sala.cpp      # Implementação da classe Sala
└── main.cpp      # Programa principal
```

## Classes

- **Assento**: representa um assento com número e status de reserva.
- **Sala**: gerencia um conjunto de assentos, permitindo reservas e cancelamentos.

## Compilação

```bash
g++ -o cinema main.cpp Assento.cpp Sala.cpp
./cinema
```

## Funcionalidades

- Criar sala com N assentos
- Reservar assento por número
- Cancelar reserva
- Exibir mapa visual da sala (O = livre, X = reservado)
- Consultar quantidade de assentos disponíveis
- Tratamento de erro ao tentar reservar assento já ocupado
