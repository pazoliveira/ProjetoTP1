import os
import re
from pathlib import Path

# Pasta onde estão os seus arquivos de cabeçalho (.h / .hpp)
DIRETORIO_HEADERS = "src"

def injetar_doxy(caminho_arquivo):
    with open(caminho_arquivo, "r", encoding="utf-8") as f:
        conteudo = f.read()

    # Evita duplicação caso já tenha Doxygen
    if "@brief" in conteudo:
        print(f"[IGNORADO] O arquivo {caminho_arquivo.name} já possui documentação.")
        return

    # Extrai o nome da classe do arquivo
    match_classe = re.search(r'class\s+(\w+)', conteudo)
    if not match_classe:
        print(f"[AVISO] Nenhuma classe encontrada em {caminho_arquivo.name}")
        return
    
    nome_classe = match_classe.group(1)

    # Cria o bloco Doxygen para a classe
    doc_classe = f"""/**
 * @brief Representa o domínio {nome_classe} no sistema Kanban.
 * @details Valida e armazena o valor correspondente às regras de negócio.
 */
"""
    # Insere a documentação logo antes da declaração da classe
    conteudo = conteudo.replace(f"class {nome_classe}", f"{doc_classe}class {nome_classe}")

    linhas = conteudo.split('\n')
    novas_linhas = []
    dentro_public = False

    for linha in linhas:
        if "public:" in linha:
            dentro_public = True
            novas_linhas.append(linha)
            continue
        if "private:" in linha or "protected:" in linha:
            dentro_public = False
            novas_linhas.append(linha)
            continue
        
        # Identifica métodos públicos (linhas com parêntese e ponto e vírgula)
        if dentro_public and ("(" in linha and ";" in linha) and not linha.strip().startswith("//"):
            if "set" in linha:
                doc_metodo = "    /**\n     * @brief Define um novo valor após a validação.\n     * @param valor Dado de entrada a ser validado.\n     * @throw std::invalid_argument Se o valor for inválido.\n     */"
                novas_linhas.append(doc_metodo)
            elif "get" in linha:
                doc_metodo = "    /**\n     * @brief Retorna o valor atualmente armazenado.\n     * @return String contendo o valor.\n     */"
                novas_linhas.append(doc_metodo)
        
        novas_linhas.append(linha)

    # Salva o arquivo atualizado no disco
    conteudo_atualizado = '\n'.join(novas_linhas)
    with open(caminho_arquivo, 'w', encoding='utf-8') as f:
        f.write(conteudo_atualizado)

    print(f"[SUCESSO] Documentação aplicada em: {caminho_arquivo.name}")

def percorrer_diretorio():
    caminho = Path(DIRETORIO_HEADERS)
    # Varre a pasta recursivamente procurando arquivos .h
    for arquivo_hpp in caminho.glob("**/*.h"):
        injetar_doxy(arquivo_hpp)

if __name__ == "__main__":
    print("Iniciando injeção automatizada de Doxygen...")
    percorrer_diretorio()
    print("Processo concluído!")