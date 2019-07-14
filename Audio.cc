/*
 * -------------------------------
 * Juego del Ahorcado en C++ -----
 * Autor: Rub�n Rodr�guez --------
 * Fecha: 14-4-19 ----------------
 * -------------------------------
 */

/*
 * Fichero de implementacion del modulo Audio
 */

#include "Audio.h"


/*
 * Pre: ---
 * Post: Ha reproducido por el microfono la banda sonora correspondiente
 *       al menu principal del juego
 */
void sonidoMenuPrincipal(){
    mciSendString("close MENU", NULL, 0, NULL);
    mciSendString("open Audio\\menu.wav alias MENU", NULL, 0, NULL);
    mciSendString("play MENU", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono la banda sonora correspondiente
 *       al menu de opciones del juego
 */
void sonidoMenuOpciones(){
    mciSendString("close OPTIONS", NULL, 0, NULL);
    mciSendString("open Audio\\opciones.wav alias OPTIONS", NULL, 0, NULL);
    mciSendString("play OPTIONS", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono la banda sonora correspondiente
 *       a la primera pista del juego
 */
void sonidoPistaPrimera(){
    mciSendString("close FIRST_TRACK", NULL, 0, NULL);
    mciSendString("open Audio\\main.wav alias FIRST_TRACK", NULL, 0, NULL);
    mciSendString("play FIRST_TRACK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono la banda sonora correspondiente
 *       a la segunda pista del juego
 */
void sonidoPistaSegunda(){
    mciSendString("close SECOND_TRACK", NULL, 0, NULL);
    mciSendString("open Audio\\speed.wav alias SECOND_TRACK", NULL, 0, NULL);
    mciSendString("play SECOND_TRACK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono la banda sonora correspondiente
 *       a la tercera pista del juego
 */
void sonidoPistaTercera(){
    mciSendString("close THIRD_TRACK", NULL, 0, NULL);
    mciSendString("open Audio\\master.wav alias THIRD_TRACK", NULL, 0, NULL);
    mciSendString("play THIRD_TRACK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono la banda sonora correspondiente
 *       a la tercera pista del juego
 */
void sonidoRing(){
    mciSendString("close RING", NULL, 0, NULL);
    mciSendString("open Audio\\Ring.wav alias RING", NULL, 0, NULL);
    mciSendString("play RING", NULL, 0, NULL);
}



/*
 * Pre: <<pista>> es el indice de la pista musical seleccionada por
 *      el usario a reproducir
 * Post: Ha reproducido durante la partida la banda sonora con indice de pista
 *       <<pista>>
 */
void tocarMusicaPartida(int& pista){
    switch(pista){
        // Reproducir primera pista
        case 0 :
            sonidoPistaPrimera();
        break;
        // Reproducir segunda pista
        case 1 :
            sonidoPistaSegunda();
        break;
        // Reproducir tercera pista
        case 2 :
            sonidoPistaTercera();
        break;
            // Reproducir tercera pista
        case 3 :
            // El audio del juego esta silenciado
        break;
        default:
            cerr <<" La pista " << pista << " es desconocida " << endl;
    }
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido correcto debido
 *       a que el usuario ha acertado una letra de la palabra
 */
void tocarSonidoCorrecto(){
    mciSendString("close CORRECTO", NULL, 0, NULL);
    mciSendString("open Audio\\correcto.wav alias CORRECTO", NULL, 0, NULL);
    mciSendString("play CORRECTO", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido incorrecto debido
 *       a que el usuario ha acertado una letra de la palabra
 */
void tocarSonidoIncorrecto(){
    mciSendString("close INCORRECT", NULL, 0, NULL);
    mciSendString("open Audio\\incorrecto.wav alias INCORRECT", NULL, 0, NULL);
    mciSendString("play INCORRECT", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido Find_out debido
 *       a que el usuario ha descifrado la palabra
 */
void tocarSonidoFindOut(){
    mciSendString("close FIND_OUT", NULL, 0, NULL);
    mciSendString("open Audio\\FindOut.wav alias FIND_OUT", NULL, 0, NULL);
    mciSendString("play FIND_OUT", NULL, 0, NULL);
}


/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido incorrecto debido
 *       a que el usuario ha fallado toda la palabra
 */
void tocarSonidoGameOver(){
    mciSendString("close GAME_OVER", NULL, 0, NULL);
    mciSendString("open Audio\\GameOver.wav alias GAME_OVER", NULL, 0, NULL);
    mciSendString("play GAME_OVER", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido incorrecto debido
 *       a que el usuario conteste si quiere jugar otra vez
 */
void tocarSonidoReloj(){
    mciSendString("close CLOCK", NULL, 0, NULL);
    mciSendString("open Audio\\Reloj.wav alias CLOCK", NULL, 0, NULL);
    mciSendString("play CLOCK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido del ranking
 */
void tocarSonidoRanking(){
    mciSendString("close RANKING", NULL, 0, NULL);
    mciSendString("open Audio\\Ranking.wav alias RANKING", NULL, 0, NULL);
    mciSendString("play RANKING", NULL, 0, NULL);
}




/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido de los creditos
 */
void tocarSonidoCreditos(){
    mciSendString("close CREDITS", NULL, 0, NULL);
    mciSendString("open Audio\\creditos.wav alias CREDITS", NULL, 0, NULL);
    mciSendString("play CREDITS", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha reproducido por el microfono el sonido del bonus al aceptar la palabra
 */
void tocarSonidoBonusLife(){
    mciSendString("close BONUS_LIFE", NULL, 0, NULL);
    mciSendString("open Audio\\BonusLife.wav alias BONUS_LIFE", NULL, 0, NULL);
    mciSendString("play BONUS_LIFE", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido del menu principal
 */
void detenerSonidoMenu(){
    mciSendString("close MENU", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido del menu de opciones
 */
void detenerSonidoOpciones(){
    mciSendString("close OPTIONS", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de la primera pista
 */
void detenerSonidoPistaPrimera(){
    mciSendString("close FIRST_TRACK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de la segunda pista
 */
void detenerSonidoPistaSegunda(){
    mciSendString("close SECOND_TRACK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de la tercera pista
 */
void detenerSonidoPistaTercera(){
    mciSendString("close THIRD_TRACK", NULL, 0, NULL);
}




/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de Find out
 */
void detenerSonidoFindOut(){
    mciSendString("close FIND_OUT", NULL, 0, NULL);
}




/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de Game over
 */
void detenerSonidoGameOver(){
    mciSendString("close GAME_OVER", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de Reloj
 */
void detenerSonidoReloj(){
    mciSendString("close CLOCK", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido del ranking
 */
void detenerSonidoRanking(){
    mciSendString("close RANKING", NULL, 0, NULL);
}


/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido del ring
 */
void detenerSonidoRing(){
    mciSendString("close RING", NULL, 0, NULL);
}



/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido de los creditos
 */
void detenerSonidoCreditos(){
    mciSendString("close CREDITS", NULL, 0, NULL);
}




/*
 * Pre: ---
 * Post: Ha detenido la reproduccion del sonido del bonus al aceptar la palabra
 */
void detenerSonidoBonus(){
    mciSendString("close BONUS_LIFE", NULL, 0, NULL);
}



/*
 * Pre: <<pista>> es el indice de la pista musical seleccionada por
 *      el usario a reproducir
 * Post: Ha detenido la banda sonora de la partida la con indice de pista
 *       <<pista>>
 */
void detenerSonidoPartida(int& pista){
    switch(pista){
        // Detener primera pista
        case 0 :
            detenerSonidoPistaPrimera();
        break;
        // Detener segunda pista
        case 1 :
            detenerSonidoPistaSegunda();
        break;
        // Detener tercera pista
        case 2 :
            detenerSonidoPistaTercera();
        break;
            // Detener tercera pista
        case 3 :
            // El audio del juego esta silenciado
        break;
        default:
            cerr <<" La pista " << pista << " es desconocida " << endl;
    }
}


