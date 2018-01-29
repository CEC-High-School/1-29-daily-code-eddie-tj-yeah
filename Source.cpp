#include <allegro5\allegro.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <iostream>
using namespace std;

int main() {

	ALLEGRO_DISPLAY *window = NULL;

	al_init();

	al_init_font_addon();
	al_init_ttf_addon();
	window = al_create_display(800, 800);
	int age;
	al_clear_to_color(al_map_rgb(100, 255, 100));
	ALLEGRO_FONT *font = al_load_ttf_font("hp.ttf", 72, 0);
	al_draw_textf(font, al_map_rgb(255, 100, 100), 400, 364, 1, "What is your age?");
	al_flip_display();

	cin >> age;
	al_clear_to_color(al_map_rgb(100, 255, 100));
	al_draw_textf(font, al_map_rgb(255, 100, 100), 400, 364, 1, "Happy %dth birthday!", age);
	al_flip_display();
	al_rest(2);
	













}