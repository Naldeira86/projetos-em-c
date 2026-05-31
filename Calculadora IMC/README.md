# Calculadora de IMC

Calculadora de Índice de Massa Corporal desenvolvida em C.

## Funcionalidades

- Entrada de peso (kg) e altura (m)
- Cálculo do IMC: `peso / (altura * altura)`
- Classificação automática do resultado

## Classificações

| IMC | Classificação |
|-----|---------------|
| < 18.5 | Abaixo do peso |
| 18.5 – 24.9 | Peso normal |
| 25 – 29.9 | Sobrepeso |
| >= 30 | Obesidade |

## Como executar

```bash
gcc -o imc "CALCULADORA IMC.c"
./imc
```
