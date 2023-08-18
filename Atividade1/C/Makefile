# Nome do programa de saída
OUTPUT = main

# Compilador a ser usado
CC = gcc

# Opções de compilação
CFLAGS = -Wall -Wextra -g

# Regra principal: compilação e linkagem
$(OUTPUT): main.c
	$(CC) $(CFLAGS) -o $(OUTPUT) main.c

# Regra para executar o programa
run: $(OUTPUT)
	./$(OUTPUT)

# Regra para limpar arquivos gerados
clean:
	rm -f $(OUTPUT)