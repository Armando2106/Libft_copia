/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:39:27 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/26 15:24:47 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<ctype.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include<xlocale.h>
#include<stdlib.h>
#include"ft_isalpha.c"
#include"ft_isdigit.c"
#include"ft_isalnum.c"
#include"ft_isascii.c"
#include"ft_isprint.c"
#include"ft_strlen.c"
#include"ft_memset.c"
#include"ft_bzero.c"
#include"ft_toupper.c"
#include"ft_tolower.c"
#include"ft_strchr.c"
#include"ft_memcpy.c"
#include"ft_strlcpy.c"
#include"ft_memmove.c"
#include"ft_strlcat.c"
#include"ft_strrchr.c"
#include"ft_strncmp.c"
#include"ft_memchr.c"
#include"ft_memcmp.c"
#include"ft_strnstr.c"
#include"ft_atoi.c"
#include"ft_calloc.c"
#include"ft_strdup.c"
#include"ft_substr.c"

int main ()
{
	printf("Esta funcion es ISALPHA \n");
	printf("%d \n",ft_isalpha(' '));
	printf("%d \n", isalpha(' '));
	printf("\n");
	
	printf("Esta funcion es ISDIGIT \n");
	printf("%d \n", ft_isdigit('2'));
	printf("%d \n", isdigit('2'));
	printf("\n");

	printf("Esta funcion es ISALNUM \n");
	printf("%d \n", ft_isalnum('{'));
	printf("%d \n", isalnum('{'));
	printf("\n");

	printf("Esta funcion es ISASCII \n");
	printf("%d \n", ft_isascii('2'));
	printf("%d \n", isascii('2'));
	printf("\n");

	printf("Esta funcion es ISPRINT \n");
	printf("%d \n", ft_isprint(' '));
	printf("%d \n", isprint(' '));
	printf("\n");

	printf("Esta funcion es STRLEN \n");
	printf("%zu \n", ft_strlen("st"));
	printf("%lu \n", strlen("st"));
	printf("\n");

	printf("Esta funcion es MEMSET \n");
	char a[100] = "abcde";
	printf("%s \n", ft_memset(a,'A', 5 ));
	printf("%s \n", memset(a, 'A', 5));
	printf("\n");

	printf("Esta funcion es BZERO \n");
	char b[10] = "abcde";
	ft_bzero(b, 3);
	printf("%s \n ", b);
	bzero(b, 3);
	printf("%s \n funcion original:", b);
	printf("\n \n");

	printf("Esta funcion es TOUPPER \n");
	printf("%d \n", ft_toupper('a'));
	printf("%c \n", (char)toupper('a'));
	printf("\n");

	printf("Esta funcion es TOLOWER \n");
	printf("%d \n", ft_tolower('A'));
	printf("%c \n", (char)tolower('A'));
	printf("\n");

	printf("Esta funcion es STRCHR \n");
	char c[100] = "abcde";
	printf("%s \n", ft_strchr(c, 'c'));
	printf("%s \n", strchr(c, 'c'));
	printf("\n");

	printf("Esta funcion es MEMCPY \n");
	char d[100] = "abcde";
	char e[20];
	printf("%s \n", ft_memcpy(e, d, 5));
	printf("%s \n", memcpy(e, d, 5));
	printf("\n");

	printf("Esta funcion es STRLCPY \n");
	char F[100] = "abcdefg";
	char G[20];
	printf("%zu \n", ft_strlcpy(G, F, sizeof(G)));
	printf("%lu \n", strlcpy(G, F, sizeof(G)));
	printf("\n");

	printf("Esta funcion es MEMMOVE \n");
	char H[20] = "abcde";
	char I[20];
	printf("%s \n", ft_memmove(I, H, sizeof(H)));
	printf("%s \n", memmove(I, H, sizeof(H)));
	printf("\n");

	printf("Esta funcion es STRLCAT \n");
	char J[] = "abcde";
	char K[] = "FGHIJ";
	printf("%zu \n", ft_strlcat(J, K,sizeof(J)));
	printf("%lu \n", strlcat(J, K, sizeof(J)));
	printf("\n");

	printf("Esta funcion es STRRCHR \n");
	char* ca = "hola mundo";
	char bu = '2';
	printf("%s \n", ft_strrchr(ca, bu));
	printf("%s \n", strrchr(ca, bu));
	printf("\n");

	printf("Esta funcion es STRCMP \n");
	size_t n = 4;
	printf("%d \n", ft_strncmp("hola", "holo", n));
	printf("%d \n", strncmp("hola", "holo", n));
	printf("\n");

	printf("Esta funcion es MEMCHR \n");
	char M[] = "abcde, fgh";
	int N = 'g';
	printf("%s \n", ft_memchr(M, N, sizeof(M)));
	printf("%s \n", memchr(M, N, sizeof(M)));
	printf("\n");

	printf("Esta funcion es MEMCMP \n");
	printf("%d \n", ft_memcmp("heLlO", "hello", 5));
	printf("%d \n", memcmp("heLlO", "hello", 5));
	printf("\n");

	printf("Esta funcion es STRNSTR \n");
	char cad[] = "Hola, mundo!";
	char sub[] = "mundo";
	printf("%s \n", ft_strnstr(cad, sub, 13));
	printf("%s \n", strnstr(cad, sub, 13));
	printf("\n");

	printf("Esta funcion es ATOI \n");
	printf("%d \n", ft_atoi("-1234 5"));
	printf("%d \n", atoi("-1234 5"));
	printf("\n");
	
//-----------------------------------------------------------	

	printf("Esta funcion es CALLOC \n");
	int *numeros = calloc(10, sizeof(int));
	int ip = 0;
    while (ip < 10) {
        ip++;
		printf ("%d",numeros[ip]);
		}
	printf("\n");

	int *arr = (int *)ft_calloc(10, sizeof(int));
    // Inicializar el arreglo
    int i = 0;
    while (i < 10) {
        arr[i] = i + 1;  // Inicializar con valores del 1 al 10
        i++;
    }
    // Imprimir los valores del arreglo
    i = 0;
    while (i < 10) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n\n");

    // Liberar la memoria
    free(arr);

//-------------------------------------------------
	printf("Esta funcion es STRDUP \n");

	const char *original1 = "armando";
	const char *original = "Hola, mundo!";

    char *duplicated = ft_strdup(original);
	char *duplicado2 = strdup(original1);

	printf("%s\n", original1);
	printf("%s\n", duplicado2);

    if (duplicated != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicated);
		printf("\n");

        // Liberar la memoria asignada
        free(duplicated);
    }

//----------------------------------------------------
	printf("Esta funcion es SUBSTR \n");

	const char *originall = "Hola, mundo!";
    unsigned int start = 6;
    size_t len = 3;

	printf("Caden original: Hola mumdo. despues del espacion 6 imprimeme 3 \n" );
    char *subcadena = ft_substr(originall, start, len);
    if (subcadena != NULL) {
        printf("Subcadena: %s\n", subcadena);

        // Liberar la memoria asignada
        free(subcadena);
    } else {
        printf("La subcadena es NULL (falla de asignación de memoria).\n");
    }


    return 0;
}
