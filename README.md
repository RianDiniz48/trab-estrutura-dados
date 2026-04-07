##  Visão Geral

Este projeto foi desenvolvido na disciplina de **Estrutura de Dados** com o objetivo de criar um sistema simples para gerenciamento de rotas de ônibus utilizando C++.

A ideia surgiu a partir de dificuldades observadas em rotas reais, como falhas na ordem das paradas e inconsistências no trajeto. Para isso, foi implementada uma solução baseada em estruturas dinâmicas que permite maior controle sobre o itinerário.

---

##  Finalidade

O sistema tem como principal finalidade permitir o controle de uma rota de ônibus, oferecendo operações para:

- Adicionar novas paradas
- Remover paradas existentes
- Consultar paradas pelo nome
- Exibir o trajeto completo
- Visualizar o trajeto inverso
- Informar a quantidade total de paradas

---

##  Estrutura Utilizada

A estrutura escolhida foi a **lista duplamente encadeada**, onde cada elemento possui:

- Um valor (nome da parada)
- Um ponteiro para o próximo elemento
- Um ponteiro para o elemento anterior

Essa abordagem permite percorrer a lista em ambas as direções.

---

##  Operações Disponíveis

O sistema funciona por meio de um menu interativo contendo:

- Inserção no início da lista
- Inserção no final da lista
- Inserção em posição específica
- Remoção da primeira parada
- Remoção da última parada
- Busca por nome (com correspondência parcial)
- Listagem da rota (ordem normal)
- Listagem da rota (ordem inversa)
- Contagem total de paradas
