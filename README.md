# Projeto Conjunto de produção de Sistema Kanban

kanban-project-manager/
│
├── src/
│   ├── domain/
│   │   ├── headers/
│   │   │   ├── email.h
│   │   │   ├── estado.h
│   │   │   ├── identificador.h
│   │   │   ├── limite.h
│   │   │   ├── nome.h
│   │   │   ├── papel.h
│   │   │   ├── prioridade.h
│   │   │   ├── senha.h
│   │   │   ├── tamanho.h
│   │   │   ├── texto.h
│   │   │   └── timestamp.h
│   │   │
│   │   └── sources/
│   │       ├── email.cpp
│   │       ├── estado.cpp
│   │       ├── identificador.cpp
│   │       ├── limite.cpp
│   │       ├── nome.cpp
│   │       ├── papel.cpp
│   │       ├── prioridade.cpp
│   │       ├── senha.cpp
│   │       ├── tamanho.cpp
│   │       ├── texto.cpp
│   │       └── timestamp.cpp
│   │
│   ├── entities/
│   │   ├── headers/
│   │   │   ├── cartao_atividade.h
│   │   │   ├── pessoa.h
│   │   │   ├── projeto.h
│   │   │   └── quadro.h
│   │   │
│   │   └── sources/
│   │       ├── cartao_atividade.cpp
│   │       ├── pessoa.cpp
│   │       ├── projeto.cpp
│   │       └── quadro.cpp
│   │
│   └── main.cpp
│
├── docs/
├── Doxyfile
├── CMakeLists.txt
├── .gitignore
└── README.md