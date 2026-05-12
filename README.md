Integrantes
Isadora Bradac - RM 569585
Murilo Araujo - RM 573517


Descrição do Projeto
Este projeto foi desenvolvido com o objetivo de criar um sistema de monitoramento ambiental para a Vinheria Agnello, utilizando Arduino e sensores eletrônicos para garantir condições adequadas de armazenamento dos vinhos.
O sistema realiza o monitoramento da luminosidade, temperatura e umidade do ambiente em tempo real, emitindo alertas visuais e sonoros sempre que os valores estiverem fora das condições ideais.
Além disso, as informações são exibidas em um display LCD I2C, permitindo uma visualização rápida e prática do status do ambiente.

Objetivo
O principal objetivo do projeto é automatizar o controle ambiental da vinheria, auxiliando na preservação da qualidade dos vinhos armazenados.

O sistema foi dividido em duas etapas:
CP1
Implementação do sensor LDR para leitura da luminosidade do ambiente, juntamente com LEDs indicadores e buzzer para alertas.

CP2
Implementação do sensor DHT11 para leitura de temperatura e umidade, além da utilização do display LCD I2C para exibição das informações em tempo real.

Funcionalidades
O sistema possui as seguintes funcionalidades:
Leitura da luminosidade utilizando sensor LDR
Leitura de temperatura utilizando DHT11
Leitura de umidade utilizando DHT11
Exibição de mensagens no display LCD
Sistema de alerta visual utilizando LEDs
Sistema de alerta sonoro utilizando buzzer
Monitor serial para acompanhamento das leituras
Interface personalizada no LCD com caractere customizado
Componentes Utilizados
Componente	Quantidade
Arduino Uno	1
Sensor DHT11	1
Sensor LDR	1
Display LCD I2C 16x2	1
LED Verde	1
LED Amarelo	1
LED Vermelho	1
Buzzer	1
Resistores	4
Protoboard	1
Jumpers	Diversos
Funcionamento do Sistema
Monitoramento da Luminosidade

O sensor LDR realiza a leitura da intensidade luminosa do ambiente.
Estados do sistema:
LED verde → ambiente adequado
LED amarelo → nível de alerta
LED vermelho → situação crítica
Buzzer → acionado em situações críticas
Monitoramento da Temperatura

O sensor DHT11 realiza a leitura da temperatura do ambiente.
Faixas utilizadas:
Temperatura	Status
Entre 10°C e 15°C	Temperatura ideal
Acima de 15°C	Temperatura alta
Abaixo de 10°C	Temperatura baixa
Monitoramento da Umidade

O sensor DHT11 também realiza a leitura da umidade relativa do ar.
Faixas utilizadas:
Umidade	Status
Entre 50% e 70%	Umidade ideal
Acima de 70%	Umidade alta
Abaixo de 50%	Umidade baixa
Display LCD

O display LCD I2C foi utilizado para exibir:
Temperatura
Umidade
Status do ambiente
Alertas do sistema

Também foi implementado um caractere personalizado no display para deixar a interface mais visual e interativa.

Estrutura do Código

O código foi organizado em etapas para facilitar o entendimento e manutenção:

Inicialização dos componentes
Leitura dos sensores
Verificação das condições ambientais
Acionamento dos LEDs
Acionamento do buzzer
Exibição das mensagens no LCD
Exibição dos dados no monitor serial
Bibliotecas Utilizadas

As seguintes bibliotecas foram utilizadas no projeto:

Wire.h
LiquidCrystal_I2C.h
DHT.h
Como Executar o Projeto
1. Instalar a IDE Arduino

Baixar e instalar a IDE oficial do Arduino.

Instalar as bibliotecas

Na IDE Arduino:
Sketch
Include Library
Manage Libraries

Instalar:
LiquidCrystal I2C
DHT sensor library

Montar o circuito
Realizar as conexões conforme o esquema do projeto utilizando:
Arduino Uno
LCD I2C
DHT11
LDR
LEDs
Buzzer

Executar o código
Conectar o Arduino ao computador
Selecionar a placa Arduino Uno
Selecionar a porta correta
Fazer upload do código

Simulação
A simulação do projeto foi desenvolvida utilizando:
Tinkercad

Dificuldades Encontradas
Durante o desenvolvimento do projeto, algumas dificuldades foram encontradas, principalmente relacionadas à configuração do display LCD I2C e à leitura correta do sensor DHT11.
Foi necessário ajustar o endereço I2C do display e revisar as conexões físicas do circuito para garantir o funcionamento correto dos componentes.
Além disso, também houve desafios na organização das leituras dos sensores e no gerenciamento dos alertas do sistema.

Melhorias Futuras
Como possíveis melhorias futuras, o projeto poderia incluir:
Integração com internet das coisas (IoT)
Envio de alertas para celular
Armazenamento dos dados em nuvem
Dashboard para monitoramento remoto
Controle automático de climatização

Conclusão
O projeto permitiu aplicar conceitos de programação, eletrônica e automação utilizando Arduino.
Com o desenvolvimento do sistema, foi possível compreender melhor a utilização de sensores, leitura de dados em tempo real, acionamento de atuadores e exibição de informações em displays.
O resultado final foi um sistema funcional de monitoramento ambiental para uma vinheria, capaz de auxiliar na preservação da qualidade dos produtos armazenados.

https://youtu.be/e2Gzda7pUhA?si=C7Fwa9H6fOapSgXp

