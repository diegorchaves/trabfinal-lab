// Inclui o arquivo de cabeçalho da biblioteca Allegro 5
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <stdio.h>
#include <time.h>

#define azul al_map_rgb(0,0,255)

void inicia_tudo(){

al_init();
    al_init_font_addon();

}

// Nossa conhecida função main...
int main(void)
{
    srand (time(NULL));
    int largura = 500;
    int altura = 500;
    // Variável representando a janela principal
    ALLEGRO_DISPLAY *janela = NULL;
    ALLEGRO_FONT    *font = NULL;

    // Inicializamos a biblioteca

    inicia_tudo();
    font = al_create_builtin_font();

    // Criamos a nossa janela - dimensões de 640x480 px
    janela = al_create_display(largura, altura);

    // Preenchemos a janela de branco
    char palavras[6][20] = {"mariana","eu","te","amo","muito","<3 <3 <3"};
    for (int i = 0; i<6; i++){


        al_clear_to_color(al_map_rgb(rand () % 232, rand () % 250, rand () % 250));
        al_draw_text(font,al_map_rgb(0,0,0),250,250,ALLEGRO_ALIGN_CENTER,palavras[i]);

        // Atualiza a tela
        al_flip_display();
        al_rest(1.0);
    }


    // Segura a execução por 10 segundos

    // Finaliza a janela

    al_destroy_display(janela);
    return 0;
}
