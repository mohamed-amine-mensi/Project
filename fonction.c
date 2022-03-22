#include "fonction.h"
void initminimap(minimap *m)
{
char nomFich[30];
int i;
m->image_minimap=IMG_Load("minimap/minimap.png");
m->minimap2=IMG_Load("minimap/minimap2.png");
m->minimap3=IMG_Load("minimap/minimap3.png");
m->bonhomme=IMG_Load("minimap/Joueur_miniature.png");
//m->ennemi=IMG_Load("minimap/ennemi.png");
m->position_minimap.x=0;
m->position_minimap.y=0;
m->position_bonhomme.x=0;
m->position_bonhomme.y=0;
//m->position_ennemii.x=0;
//m->position_ennemii.y=0;


void MAJMinimap( perso p,minimap *m,SDL_Rect camera,int redimensionnement)
{
SDL_Rect posJoueurABS,posEnnemiABS;
posJoueurABS.x = p.rect.x + camera.x;
posJoueurABS.y = p.rect.y + camera.y;

m->position_bonhomme.x=20+posJoueurABS.x * redimensionnement/100;
m->position_bonhomme.y=100+posJoueurABS.y * redimensionnement/100;

posEnnemiABS.x=e.position_ennemi.x + camera.x;
posEnnemiABS.y=e.position_ennemi.y + camera.y;

//m->position_ennemii.x=(posEnnemiABS.x * redimensionnement/100);
//m->position_ennemii.y=(100+posEnnemiABS.y * redimensionnement/100);
}

void afficher_minimap (minimap m, SDL_Surface *screen)
{
    SDL_BlitSurface(m.image_minimap,NULL,screen,&(m.position_minimap));
    SDL_BlitSurface(m.bonhomme,NULL,screen,&(m.position_bonhomme));
    // SDL_BlitSurface(m.ennemi,NULL,screen,&(m.position_ennemii));
    // SDL_BlitSurface(m.png,NULL,screen,&(m.pos_effet));
}

void Liberer (minimap *m,/*text *t*/)
{
    SDL_FreeSurface(m->bonhomme);
    SDL_FreeSurface(m->image_minimap);
 /*   SDL_FreeSurface(m->ennemi);
    SDL_FreeSurface(t->texte);*/
}
