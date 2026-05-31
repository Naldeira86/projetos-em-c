#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define texto "==== SISTEMA DE LOGIN ===="

int main() {
    printf("%s\n", texto);
    char usuario[50];
    char senha[20];
    char usuario_correto[] = "admin";
    char senha_correta[] = "Naldeira86@#$";

    printf("\nDigite seu usuario: ");
    scanf("%49s", usuario);

    printf("\nDigite sua senha: ");
    scanf("%19s", senha);

    if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("\nAcesso liberado!\n");
    } else {
        printf("\nUsuario ou senha incorretos.\n");
    }

    system("pause");
    return 0;
}
