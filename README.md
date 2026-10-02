# Projeto Conjunto de produção de Sistema Kanban

> Tarefas remanescentes para conclusão das classes domínios:

 Aqui está a tabela completa com as especificações e validações dos **11 Domínios**, organizada por nível de dificuldade e pronta para copiar e colar diretamente no seu `README.md` do Git:

# Tabela de Especificação dos Domínios — TP1

| Status | Domínio | Dificuldade | Regras de Validação & Formato |
| --- | --- | --- | --- |
| `[X]` | **Estado** | 🟢 Fácil | Aceita exclusivamente as strings `"A FAZER"`, `"FAZENDO"` ou `"FEITO"`.
| `[X]` | **Identificador** | 🟢 Fácil | Exatamente 6 caracteres: os 3 primeiros são letras (`a-z`, `A-Z`) e os 3 últimos são dígitos (`0-9`).
| `[X]` | **Limite** | 🟢 Fácil | Valor numérico inteiro no intervalo de `1` a `25` (inclusive).
| `[X]` | **Papel** | 🟢 Fácil | Aceita exclusivamente as strings `"GESTOR"` ou `"DESENVOLVEDOR"`.
| `[X]` | **Prioridade** | 🟢 Fácil | Aceita exclusivamente as strings `"ALTA"`, `"MEDIA"` ou `"BAIXA"`.
| `[X]` | **Tamanho** | 🟢 Fácil | Aceita exclusivamente as strings `"GRANDE"`, `"MÉDIO"` ou `"PEQUENO"`.
| `[X]` | **Nome** | 🟡 Médio | Até 15 caracteres (letras `A-Z`, `a-z` e espaços). Não pode começar nem terminar com espaço; todo espaço deve ser seguido obrigatoriamente por uma letra.
| `[X]` | **Senha** | 🟡 Médio | Exatamente 5 caracteres alfanuméricos (`a-z`, `A-Z`, `0-9`). Deve conter obrigatoriamente pelo menos uma letra e pelo menos um dígito.
| `[X]` | **Texto** | 🟡 Médio | Até 30 caracteres (letras, dígitos, espaços e pontuações `,`, `;`, `.`, `:`, `?`, `!`). Deve iniciar com letra maiúscula, terminar com ponto (`.`) e não pode conter pontuações consecutivas.
| `[X]` | **EMAIL** | 🔴 Difícil | Formato `parte-local@domínio`. **Parte local:** até 64 chars, sem iniciar/terminar com `.` ou `-`, ponto/hífen seguido de letra/dígito. **Domínio:** até 255 chars, subpartes separadas por `.`, sem iniciar/terminar com `-`.
| `[X]` | **Timestamp** | 🔴 Difícil | Formato `DIA-MÊS-ANO-HORÁRIO`. Dia (`1`-`31`), Mês (`JAN`..`DEZ`), Ano (`2000`-`2099`), Horário (`00:00`-`23:59`). **Obrigatória validação de dias por mês e anos bissextos**.

---

Arquitetura do projeto 

## Domínios 
    [] Tratamento de erros
    [] Teste unitário
    [] Documentação
    [] Código
    [] Unificação

## Entidades
    [Cartão de atividade]
    [Pessoa]
    [Projeto]
    [Quadro]


