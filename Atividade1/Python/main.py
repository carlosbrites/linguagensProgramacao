#implementação da função strcmp em python
def strcmp(str1, str2):
    if not isinstance(str1, str) or not isinstance(str2, str):
        raise ValueError("Ambas as entradas devem ser strings")
    
    return (str1 > str2) - (str1 < str2)
    
        
#implementação da função strcat em python
def strcat(str1, str2):
    if not isinstance(str1, str) or not isinstance(str2, str):
        raise ValueError("Ambas as entradas devem ser strings")

    result = str1 + str2
    return result


string1 = "ABC"
string2 = "abc"

result = strcmp(string1, string2) # chamada da função strcmp


if result > 0:
    print(f"{string1} é maior que {string2} na tabela ascii")
elif result < 0:
    print(f"{string1} é menor que {string2} na tabela ascii")
else:
    print(f"{string1} é igual a {string2} na tabela ascii")


stringAux = strcat(string1, string2) # chamada da função strcat

print(stringAux, "é a concatenação de", string1, "e", string2)
