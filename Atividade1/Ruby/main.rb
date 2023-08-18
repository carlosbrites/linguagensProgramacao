# implementação da função strcmp
def strcmp(str1, str2)
    if !str1.is_a?(String) || !str2.is_a?(String)
        raise "Ambas as entradas devem ser strings"
    end

    (str1 > str2) ? 1 : ((str1 < str2) ? -1 : 0)
end

# implementação da função strcat
def strcat(str1, str2)
    if !str1.is_a?(String) || !str2.is_a?(String)
        raise "Ambas as entradas devem ser strings"
    end
    result = str1 + str2
end


string1 = 1
string2 = "ABC"

result = strcmp(string1, string2) # chamada da função strcmp

if result > 0
    puts "#{string1} é maior que #{string2} na tabela ascii"
elsif result < 0
    puts "#{string1} é menor que #{string2} na tabela ascii"
else
    puts "#{string1} é igual a #{string2} na tabela ascii"
end

stringAux = strcat(string1, string2) # chamada da função strcat
puts "#{stringAux} é a concatenação de #{string1} e #{string2}"