# Python Avançado: Estendendo C para Python  -  Parte II

Tutorial: um binding de C para Python para operações com funções e tipos

Você pode acessar o link do tutorial no Medium [clicando aqui](https://medium.com/@diegocatalao/python-avançado-estendendo-c-para-python-parte-ii-cb013812f3a7).

## Descrição

Este repositório é para a segunda parte do Tutorial Avançado de Python. Nesse tutorial foram implementados alguns métodos em C/Python para receber dados de diversos tipos e como alterar suas assinaturas.

## Dependências

Para este projeto é requerido a versão do Python >= 3.x e algumas dependências de desenvolvimento:

### Ubuntu
```bash
$ sudo apt-get install python3
$ sudo apt-get install python3-dev
```

### Mac OSX

Baixe o instalador para Mac [neste link](https://www.python.org/downloads/macos/).

## Instalação

Antes de mais nada, adicione ao projeto sua virtualenv e instale as dependências do projeto para desenvolvimento:

```bash
$ python3 -m venv .venv
$ source .venv/bin/activate
$ python3 -m pip install -r requirements/dev.txt
```

Para instalar o módulo você deve usar o `setup.py` que já está configurado para tal:

```bash
$ python3 setup.py build
$ python3 setup.py install
```

## Testando a aplicação

Você pode testar a aplicação criando um arquivo que irá chamar as funções escritas em CPython ou executar os testes unitáris na pasta `tests/`.

```bash
$ python3 -m unittest
```

## Autores

- Diego H S Catalão: [LinkedIn](https://www.linkedin.com/in/diego-catal%C3%A3o-573110207/) | [GitHub](https://github.com/diegocatalao)

## Licença

Este projeto está licenciado com a licença do MIT.