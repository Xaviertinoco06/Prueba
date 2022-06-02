#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <iostream>
#include <string>
#include <cstring>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <Windows.h>
using namespace std;

ALLEGRO_TIMER* Timer;

int x=1024;
int y = 0;





int animacion(){
	Timer = al_create_timer(1.0);
	al_start_timer(Timer);
	ALLEGRO_BITMAP* negra;
	negra = al_load_bitmap("imagenes/negra.png");
	while (true)
	{
		if (al_get_timer_count(Timer)== 2)
		{
			x -= 350;
			al_set_timer_count(Timer, 0);
			

		}
		al_draw_bitmap(negra, x, 75, 0);
		al_flip_display();
	}
	
	
	}
int main() {
	ALLEGRO_DISPLAY* display;
	al_init();
	al_init_image_addon();
	

	display = al_create_display(1024, 768);
	
	
	
ALLEGRO_BITMAP* Cancha = al_load_bitmap("imagenes/Tile_BatallaEnemy.bmp");
	
	al_clear_to_color(al_map_rgb(50,10,70));
	
	
	
	al_draw_bitmap(Cancha, 0, 0, 0);
	

	
	al_rest(1000.0);
	al_destroy_display(display);
}


    
