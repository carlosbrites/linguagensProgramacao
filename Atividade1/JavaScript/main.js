// implementação da função strcmp
function strcmp(str1, str2) {
    if (typeof str1 !== 'string' || typeof str2 !== 'string') 
        throw Error("Ambas as entradas devem ser strings")

    return (str1 > str2) - (str1 < str2)
}

// implementação da função strcat
function strcat(str1, str2){
    if (typeof str1 !== 'string' || typeof str2 !== 'string') 
        throw Error("Ambas as entradas devem ser strings")
    
    return str1 + str2;
}

var string1 = "abc"
var string2 = "ABC"

var result = strcmp(string1, string2) // chamada da função strcmp

if (result > 0)
    console.log("%s é maior que %s na tabela ascii", string1, string2)
else if (result < 0)
    console.log("%s é menor que %s na tabela ascii", string1, string2)
else
    console.log("%s é igual a %s na tabela ascii", string1, string2)


stringAux = strcat(string1, string2) // chamada da função strcat
console.log("%s é a concatenação de %s e %s", stringAux, string1, string2)