# Trabalho 1 (Estrutura de Dados)
Trabalho de desenvolvimento C/C++ para a disciplina de Estruturas de Dados do curso de Ciência da Computação da Universidade Federal do Rio de Janeiro (UFRJ).

## Descrição

### Cidr blocks
O programa utiliza *uma estrutura de dados* para resolver o seguinte problema: ler uma lista de blocos cidr e informações associadas a cada bloco e guardá-los. Após a lista de blocos, serão dados alguns IPs, que devem ser consultados. Então, imprimir a informação mais específica sobre o bloco.

### Exemplo

**Entrada:**
```
8            //número de blocos com informação
0.0.0.0/0 N/A
146.164.0.0/16 UFRJ
146.164.3.7/32 acd.ufrj.br
146.164.41.0/24 DCC-UFRJ
146.164.41.220/32 Maquina do Claudson
3.0.0.0/8 GE
18.72.0.3/32  name server: bitsy.mit.edu 
18.62.0.0/24 eecs.mit
146.164.3.8
146.164.41.210
5.0.1.2
```
**Saida:**
```
146.164.3.8 UFRJ
146.164.41.210 DCC-UFRJ
5.0.1.2 N/A
```
