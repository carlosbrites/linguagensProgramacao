#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Implementação da função strcmp manualmente
int my_strcmp(const char *string1, const char *string2) {
    // Verificar se os valores da string sao iguais ou se alguma string acabou
    while (*string1 && *string2 && *string1 == *string2) {
        string1++;
        string2++;
    }
    return (int)(*string1 - *string2); 
    // Assim que encontra um char diferente ou o final de uma string, ele retorna a diferenca entra as duas
    // sendo positivo para string1 maior, negativo para string2 maior e 0 para valores iguais
}

// Implementação da função strcat manualmente
char *my_strcat(char *string1, const char *string2){
    char *result = string1; // Guarda o ponteiro
    
    // Verificar o fim da string1
    while (*string1 != '\0') {
        string1++;
    }

    // Verificar o fim da string2 e concatenar na string1
    while (*string2 != '\0') {
        *string1 = *string2;
        string1++;
        string2++;
    }

    // Reposicionar o fim da string
    *string1 = '\0';
    
    return result;
}

int main() {
    char *str1Aux = "abc";
    char *str2Aux = "def";

    char *str1 = malloc(strlen(str1Aux) + strlen(str2Aux) + 1); // alocação de espaço suficiente para string1 e string2 por causa da função strcat
    char *str2 = malloc(strlen(str2Aux) + 1);

    strcpy(str1, str1Aux);
    strcpy(str2, str2Aux);

    int result = my_strcmp(str1, str2); // chamada da função strcmp

    if (result < 0) 
        printf("%s é menor que %s na tabela ascii\n", str1, str2);
    else if (result > 0) 
        printf("%s é maior que %s na tabela ascii\n", str1, str2);
    else 
        printf("%s é igual a %s na tabela ascii\n", str1, str2);


    my_strcat(str1, str2); // chamada da função strcat
    printf("%s é a concatenação das 2 strings \n", str1);

    free(str1); 
    free(str2);

    return 0;
}