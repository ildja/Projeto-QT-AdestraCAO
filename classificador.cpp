#include "classificador.h"

void Classificador::btn_inserirDados(const Caes c)
{
    lista.push_back(c);
}

bool Classificador::NomeRepetido(Classificador a, Caes b)
{
    bool clone = false;

        for(int i = 0; i < a.size(); i++){
            if(a.lista[i].getNome() == b.getNome() and a.lista[i].getResponsavel() == b.getResponsavel()){
                clone = true;
                break;
            }
        }
    return clone;
}

QVector<Caes> Classificador::getLista() const
{
    return lista;
}

void Classificador::setLista(const QVector<Caes> &value)
{
    lista = value;
}

Classificador::Classificador()
{

}

QVector<Caes> Classificador::returnVector()
{
    return lista;
}

void Classificador::limparVetor()
{
    if(lista.size() > 0)
    lista.clear();
}

void Classificador::ordenarListaNome()
{
    std::stable_sort(lista.begin(), lista.end(), [] (Caes a, Caes b) { return a.getNome() < b.getNome();});
}

void Classificador::ordenarListaRaca() {
    std::stable_sort(lista.begin(), lista.end(), [] (Caes a, Caes b) { return a.getRaca() < b.getRaca();});
}

void Classificador::ordenarListaMedia(){
    std::stable_sort(lista.begin(), lista.end(), [] (Caes a, Caes b) { return a.getMedia() > b.getMedia();});
}

QString Classificador::primeirolugar()
{
    ordenarListaMedia();
    return lista[0].getNome();
}

QString Classificador::Racaprimeirolugar()
{
    ordenarListaMedia();
    return lista[0].getRaca();
}

QString Classificador::segundolugar()
{
    ordenarListaMedia();
    return lista[1].getNome();
}

QString Classificador::Racasegundolugar()
{
    ordenarListaMedia();
    return lista[1].getRaca();
}

QString Classificador::terceirolugar()
{
    ordenarListaMedia();
    return lista[2].getNome();
}

QString Classificador::Racaterceirolugar()
{
    ordenarListaMedia();
    return lista[2].getRaca();
}

std::tuple<int, int> Classificador::contadorGenero(Classificador g)

{
    int gefem = 0;
    int gemasc = 0;

    for (int i = 0; i<g.size(); i++){
        if(g.lista[i].getSexo()=="Feminino") gefem++;
        if(g.lista[i].getSexo()=="Masculino") gemasc++;
    }

     return std::make_tuple(gefem, gemasc);
}

void Classificador::apagarNome(int i)
{
    lista.erase(lista.begin()+i);
}

void Classificador::eraseNome(QString txt, Classificador a)
{
    for(int i = 0; i < a.size(); i++){
        if(a[i].getResponsavel() == txt){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::mudarObjeto(int l, int c, QString n)
{
    switch(c){

    case 0:
        lista[l].setNome(n);
        break;
    case 2:
        lista[l].setRaca(n);
        break;
    case 4:
        lista[l].setSexo(n);
        break;
    case 5:
        lista[l].setResponsavel(n);
        break;
    case 6:
        lista[l].setAdestrador(n);
        break;
    }
}

void Classificador::mudarObjeto(int l, int c, int i)
{

    switch(c){
    case 1:
        lista[l].setNota1(i);
        break;
    case 2:
        lista[l].setNota2(i);
        break;
    case 3:
        lista[l].setIdade(i);
        break;
    }
}

void Classificador::setNota1(int index, int value)
{
    lista[index].setNota1(value);
}

void Classificador::setNota2(int index, int value)
{
    lista[index].setNota2(value);
}

void Classificador::setNome(int index, QString value)
{
    lista[index].setNome(value);
}

void Classificador::clear()
{
    lista.clear();
}

int Classificador::size()
{
    return lista.size();
}

/*void Classificador::erase(int index)
{
    lista.erase(lista.begin()+index);
}*/

Caes Classificador::find(int index)
{
    return lista[index];
}

Caes Classificador::operator[](int i)
{
    return lista[i];
}

double Classificador::getMediaIdade()
{
    double mediaidade = 0;

    for(auto c : lista){
        mediaidade += c.getIdade();
    }

    return mediaidade/lista.size();
}
