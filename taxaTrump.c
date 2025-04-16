#include <stdio.h>
#include <string.h>

int main() {
    // Vetores com países e suas respectivas taxas
    char *paises[] = {
        "Brasil", "China", "Uniao Europeia", "Vietna", "Taiwan",
        "Japao", "India", "Coreia do Sul", "Tailandia", "Suica",
        "Indonesia", "Malasia", "Cambodja", "Reino Unido", "Africa do Sul",
        "Bangladesh", "Singapura", "Israel", "Filipinas", "Chile",
        "Peru", "Nicaragua", "Noruega", "Costa Rica", "Jordania",
        "Republica Dominicana", "Emirados Arabes Unidos", "Nova Zelandia", "Argentina", "Equador",
        "Guatemala", "Honduras", "Madagascar", "Mianmar", "Tunisia",
        "Cazaquistao", "Servia", "Egito", "Arabia Saudita", "El Salvador",
        "Costa do Marfim", "Laos", "Botsuana", "Trinidad e Tobago", "Marrocos",
        "Algeria", "Oma", "Uruguai", "Bahamas", "Lesoto",
        "Ucrania", "Bahrein", "Catar", "Mauricio", "Fiji",
        "Islandia", "Quenia", "Liechtenstein", "Guiana", "Haiti",
        "Bosnia e Herzegovina", "Nigeria", "Namibia", "Brunei", "Bolivia",
        "Panama", "Venezuela", "Macedonia do Norte", "Etiopia", "Gana",
        "Moldavia", "Angola", "Republica Democratica do Congo", "Jamaica", "Mocambique",
        "Paraguai", "Zambia", "Libano", "Tanzania", "Iraque",
        "Georgia", "Senegal", "Azerbaijao", "Camaroes", "Uganda",
        "Albania", "Armenia", "Nepal", "Sint Maarten", "Ilhas Malvinas",
        "Gabao", "Kuwait", "Togo", "Suriname", "Belize",
        "Papua-Nova Guine", "Malawi", "Liberia", "Ilhas Virgens Britanicas", "Afeganistao",
        "Zimbabue", "Benim", "Barbados", "Monaco", "Siria",
        "Uzbequistao", "Republica do Congo", "Djibuti", "Polinesia Francesa", "Ilhas Cayman",
        "Kosovo", "Curacao", "Vanuatu", "Ruanda", "Serra Leoa",
        "Mongolia", "San Marino", "Antigua e Barbuda", "Bermudas", "Essuatini",
        "Ilhas Marshall", "Saint Pierre e Miquelon", "Sao Cristovao e Neves", "Turcomenistao", "Granada",
        "Sudao", "Ilhas Turks e Caicos", "Aruba", "Montenegro", "Santa Helena",
        "Quirguistao", "Iemen", "Sao Vicente e Granadinas", "Niger", "Santa Lucia",
        "Nauru", "Guine Equatorial", "Ira", "Libia", "Samoa",
        "Guine", "Timor-Leste", "Montserrat", "Chade", "Mali",
        "Maldivas", "Tajiquistao", "Cabo Verde", "Burundi", "Guadalupe",
        "Butao", "Martinica", "Tonga", "Mauritania", "Dominica",
        "Micronesia", "Gambia", "Guiana Francesa", "Ilha Christmas", "Andorra",
        "Republica Centro-Africana", "Ilhas Salomao", "Mayotte", "Anguila", "Ilhas Cocos",
        "Eritreia", "Ilhas Cook", "Sudao do Sul", "Comores", "Kiribati",
        "Sao Tome e Principe", "Ilha Norfolk", "Gibraltar", "Tuvalu", "Territorio Britanico do Oceano Indico",
        "Tokelau", "Guine-Bissau", "Svalbard e Jan Mayen", "Ilhas Heard e McDonald", "Reunion"
    };
    float taxas[] = {
        0.10, 2.45, 0.39, 0.90, 0.64,
        0.46, 0.52, 0.50, 0.72, 0.61,
        0.64, 0.47, 0.10, 0.10, 0.60,
        0.74, 0.10, 0.33, 0.10, 0.10,
        0.10, 0.36, 0.30, 0.17, 0.40,
        0.10, 0.10, 0.20, 0.10, 0.12,
        0.10, 0.10, 0.93, 0.88, 0.55,
        0.54, 0.74, 0.10, 0.10, 0.10,
        0.41, 0.95, 0.74, 0.12, 0.10,
        0.59, 0.10, 0.10, 0.10, 0.99,
        0.10, 0.10, 0.10, 0.80, 0.63,
        0.10, 0.10, 0.73, 0.76, 0.10,
        0.70, 0.27, 0.42, 0.47, 0.20,
        0.10, 0.29, 0.65, 0.10, 0.17,
        0.61, 0.63, 0.22, 0.10, 0.31,
        0.10, 0.33, 0.10, 0.10, 0.78,
        0.10, 0.10, 0.10, 0.22, 0.10,
        0.10, 0.10, 0.10, 0.82, 0.10,
        0.10, 0.10, 0.10, 0.15, 0.34,
        0.10, 0.10, 0.49, 0.35, 0.10,
        0.10, 0.10, 0.81, 0.10, 0.10,
        0.10, 0.44, 0.10, 0.10, 0.10,
        0.10, 0.10, 0.10, 0.99, 0.10,
        0.10, 0.10, 0.10, 0.10, 0.15,
        0.10, 0.10, 0.10, 0.59, 0.25,
        0.10, 0.61, 0.10, 0.10, 0.10,
        0.10, 0.26, 0.10, 0.10, 0.10,
        0.10, 0.10, 0.10, 0.10, 0.10,
        0.10, 0.10, 0.10, 0.10, 0.10,
        0.10, 0.10, 0.10, 0.10, 0.10,
        0.10, 0.10, 0.10, 0.58, 0.10,
        0.10, 0.10, 0.10, 0.10, 0.10,
        0.10, 0.10, 0.10, 0.10, 0.73
    };


    int n = sizeof(taxas) / sizeof(taxas[0]); // Total de países
    char pais[50];
    float valor, valorFinal;
    int i = 0;
    // Solicitar valor do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    // Solicitar o país
    printf("Digite o pais para aplicar a tarifa: ");
    scanf("%s", pais);

    // Buscar o país no vetor
    int encontrado = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(paises[i], pais) == 0) {
            valorFinal = valor * (1 + taxas[i]);
            printf("O valor final com a tarifa aplicada (%0.2f%%) e: %.2f\n", taxas[i] * 100, valorFinal);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Pais nao encontrado na lista.\n");
    }

    return 0;
}
