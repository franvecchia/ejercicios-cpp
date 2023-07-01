#include <iostream>
using namespace std;

struct Episodio {
    long int id_serie;
    int nro_temporada;
    long int cantidad_descargas;
    string titulo_episodio;
    int nro_epidodio;
    int fecha_ult_descarga;
};


int main()
{
    int cantE = 10;
    Episodio epi[cantE] = {
        {123456781, 1,10, "La venganza", 1, 20230613}, 
        {123456781, 1,20, "La furia", 2, 20230613}, 
        {123456781, 1,15, "La esperanza", 3, 20230613}, 
        {123456781, 1,8, "La tristeza", 4, 20230613}, 
        {123456781, 2,11, "La armonia", 1, 20230613}, 
        {123456781, 2,12, "La muerte", 2, 20230613}, 
        {123456781, 2,13, "La vida", 3, 20230613}, 
        {123456782, 1,7, "El apocalipsis", 1, 20230613}, 
        {123456782, 1,5, "El trueno", 2, 20230613}, 
        {123456782, 1,6, "La lluvia", 3, 20230613}, 
    };
    
    int i = 0;
    int cantSeries = 0;
    cout << "Listado de descargas de Series" << endl;

    while(i < cantE) {
        long int serieAnt = epi[i].id_serie;
        int cantEpisodiosSerie = 0;
        int cantDescargasSerie = 0;

        cout << "Serie: " << epi[i].id_serie << endl;

        while(i < cantE && serieAnt==epi[i].id_serie) {
            int temporadaAnt = epi[i].nro_temporada;
            int cantEpisodiosTemporada = 0;
            int cantDescargasTemporada = 0;
            cout << "Temporada: " << epi[i].nro_temporada << endl;
            cout << "Numero Epidodio     Titulo Episodio   Cant descargas    Fecha ultima descarga" << endl;

            while (i < cantE && serieAnt == epi[i].id_serie && temporadaAnt == epi[i].nro_temporada){
                cantEpisodiosTemporada++;
                cantDescargasTemporada = cantDescargasTemporada + epi[i].cantidad_descargas;
                cout << epi[i].nro_epidodio << "     " << epi[i].titulo_episodio << "    " << epi[i].cantidad_descargas << "    " << epi[i].fecha_ult_descarga << endl; 
                i++;
            }

            cout << "Cantidad Total de Episodios de la temporada: " << cantEpisodiosTemporada << endl; 
            cout << "Total de descargas de la temporada: " << cantDescargasTemporada << endl;
            cantEpisodiosSerie = cantEpisodiosSerie + cantEpisodiosTemporada;
            cantDescargasSerie = cantDescargasSerie + cantDescargasTemporada;
            
        }
        
        cout << "Cantidad Total de Episodios de la Serie: " << cantEpisodiosSerie << endl;
        cout << "Total descargas de la Serie: " << cantDescargasSerie << endl;
        cantSeries++;

    }
    
    cout << "Total General de Series: " << cantSeries << endl;

    return 0;
}