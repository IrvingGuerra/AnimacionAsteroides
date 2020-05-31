#ifndef RANDOM_ASTEROIDE_H_
#define RANDOM_ASTEROIDE_H_
struct punto {
	float x;
	float y;
};
class Random_Asteroide{
private:
    punto 	pts[10];
	punto 	ptsRotados[10];
	int		ejeX; //Posicion en la screen eje X
	int 	ejeY; //Posicion en la screen eje Y
    int     size; //PEQUEÑO, MEDIANO O GRANDE y mas formas.
	int 	direccion; //NORTE, NORESTE, ESTE, SURESTE, SUR, SUROESTE, OESTE, NOROESTE, NORTE
	int 	eje; //IZQUIERDA O DERECHA
public:
	Random_Asteroide(int = 1, int = 10);
	void inicializaRandom_Asteroide(float, float, int);
	void imprimeRandom_AsteroideColor();
	void imprimeRandom_AsteroideNegro();
	void mueveRandom_Asteroide(int,int);
    void rotarEje(float angulo);
};
#endif