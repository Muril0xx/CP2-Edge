# Vinheria Agnello 🍷

## Sistema Inteligente de Monitoramento Ambiental com Arduino

## 📖 Sobre o Projeto

O **Sistema de Monitoramento Ambiental da Vinheria Agnello** foi desenvolvido com o objetivo de garantir condições ideais de armazenamento para vinhos, utilizando automação e monitoramento em tempo real.

A conservação correta dos vinhos depende diretamente de fatores como **temperatura**, **umidade** e **luminosidade**. Pensando nisso, o projeto utiliza sensores conectados ao **Arduino Uno** para acompanhar constantemente essas variáveis ambientais.

Os dados coletados são exibidos em um **display LCD I2C 16x2**, enquanto alertas visuais e sonoros são acionados automaticamente através de **LEDs** e **buzzer**, permitindo rápida identificação de condições inadequadas no ambiente.

---

# 👨‍💻 Integrantes

* Isa
* Murilo 

---

# 🚀 Funcionalidades

✅ Monitoramento da luminosidade do ambiente
✅ Monitoramento da temperatura
✅ Monitoramento da umidade
✅ Exibição de dados em tempo real no LCD
✅ Alertas visuais utilizando LEDs
✅ Alertas sonoros utilizando buzzer
✅ Cálculo da média de 5 leituras dos sensores
✅ Sistema de mensagens automáticas no display
✅ Termômetro personalizado no LCD utilizando caracteres especiais

---

# 🛠️ Componentes Utilizados

| Componente                   | Quantidade |
| ---------------------------- | ---------- |
| Arduino Uno                  | 1          |
| Breadboard                   | 1          |
| Sensor LDR                   | 1          |
| Sensor TMP36                 | 1          |
| Sensor de Umidade (simulado) | 1          |
| Display LCD I2C 16x2         | 1          |
| LEDs                         | 3          |
| Resistores                   | Diversos   |
| Buzzer                       | 1          |
| Jumpers                      | Diversos   |

---

# ⚙️ Funcionamento do Sistema

O sistema realiza leituras contínuas dos sensores para identificar as condições ambientais da vinheria.

Com base nos valores coletados, o Arduino toma decisões automáticas para alertar o usuário sobre possíveis riscos ao armazenamento adequado dos vinhos.

---

## 💡 Controle de Luminosidade

| Situação             | Ação do Sistema       |
| -------------------- | --------------------- |
| Ambiente ideal       | LED verde aceso       |
| Meia luz             | LED amarelo aceso     |
| Ambiente muito claro | LED vermelho + buzzer |

---

## 🌡️ Controle de Temperatura

| Temperatura       | Status            |
| ----------------- | ----------------- |
| Entre 10°C e 15°C | Ideal             |
| Acima de 15°C     | Temperatura alta  |
| Abaixo de 10°C    | Temperatura baixa |

---

## 💧 Controle de Umidade

| Umidade         | Status        |
| --------------- | ------------- |
| Entre 50% e 70% | Ideal         |
| Acima de 70%    | Umidade alta  |
| Abaixo de 50%   | Umidade baixa |

---

# 🖥️ Display LCD

O display LCD exibe informações importantes em tempo real, como:

* 🌡️ Temperatura atual
* 💧 Umidade do ambiente
* 📢 Mensagens de status
* ⚠️ Alertas automáticos

Além disso, foi implementado um **termômetro personalizado** utilizando caracteres especiais do Arduino, tornando a interface mais visual, moderna e intuitiva.

---

# ▶️ Como Executar o Projeto

## 1️⃣ Abrir o projeto no Tinkercad

Importe ou abra a simulação do circuito no Tinkercad.

## 2️⃣ Iniciar a simulação

Clique em **“Start Simulation”** para ligar o sistema.

## 3️⃣ Alterar os sensores

Modifique os valores dos sensores para simular mudanças no ambiente.

## 4️⃣ Observar os resultados

Verifique:

* LEDs de alerta
* Acionamento do buzzer
* Informações no display LCD
* Mudanças nas mensagens do sistema

---

# 📁 Estrutura do Projeto

```txt
📦 vinheria-agnello
 ┣ 📜 README.md
 ┣ 📜 codigo.ino
 ┣ 🖼️ circuito.png
 ┗ 📹 video-explicativo.mp4
```

---

# 🔗 Links do Projeto

## 🧪 Simulação no Tinkercad



---

## 🎥 Vídeo Explicativo

https://youtu.be/e2Gzda7pUhA?si=C7Fwa9H6fOapSgXp
---

# 🖼️ Imagem do Circuito

Adicionar print do circuito desenvolvido no Tinkercad.

---

# 💻 Tecnologias Utilizadas

* Arduino IDE
* Linguagem C++
* Tinkercad
* Display LCD I2C
* Sensores analógicos
* Programação embarcada

---

# 🎯 Objetivos do Projeto

Este projeto teve como foco:

* Aplicar conceitos de automação e IoT
* Integrar hardware e software utilizando Arduino
* Criar um sistema inteligente de monitoramento ambiental
* Simular uma aplicação real voltada para vinherias

---

# 📚 Aprendizados

Durante o desenvolvimento do projeto, foram trabalhados conhecimentos relacionados a:

* Sensores analógicos
* Leitura de dados ambientais
* Programação em C++
* Estruturas condicionais
* Monitoramento em tempo real
* Sistemas embarcados
* Interface com display LCD

---

# ✅ Conclusão

O projeto proporcionou uma experiência prática no desenvolvimento de soluções embarcadas utilizando Arduino, permitindo integrar sensores, atuadores e interface visual em um único sistema.

A implementação dos alertas automáticos e do monitoramento em tempo real tornou a solução mais eficiente, intuitiva e próxima de aplicações reais utilizadas no controle ambiental de vinherias e adegas.

Além disso, o projeto reforça a importância da tecnologia na preservação da qualidade dos vinhos, garantindo melhores condições de armazenamento através da automação.


https://youtu.be/e2Gzda7pUhA?si=C7Fwa9H6fOapSgXp

