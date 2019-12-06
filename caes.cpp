#include "caes.h"

bool Caes::setNome(const QString &value)
{
    if(value.size()>2){
        nome = value;
        return false;
    }else return true;
}

QString Caes::getNome() const
{
    return nome;
}

void Caes::setSexo(const QString &value)
{
    sexo = value;
}

QString Caes::getSexo() const
{
    return sexo;
}

void Caes::setIdade(const int &value)
{
    idade = value;
}

int Caes::getIdade() const
{
    return idade;
}

void Caes::setRaca(const QString &value)
{
    raca = value;
}

QString Caes::getRaca() const
{
    return raca;
}

bool Caes::setResponsavel(const QString &value)
{
    if(value.size()>2){
       responsavel = value;
        return false;
    }else return true;
}

QString Caes::getResponsavel() const
{
    return responsavel;
}

bool Caes::setAdestrador(const QString &value)
{
    if(value.size()>2){
       adestrador = value;
        return false;
    }else return true;
}

QString Caes::getAdestrador() const
{
    return adestrador;
}

bool Caes::setAvaliador1(const QString &value)
{
    if(value.size()>2){
        avaliador1 = value;
        return false;
    }else return true;
}

QString Caes::getAvaliador1() const
{
    return avaliador1;
}

bool Caes::setAvaliador2(const QString &value)
{
    if(value.size()>2){
       avaliador2 = value;
        return false;
    }else return true;
}

QString Caes::getAvaliador2() const
{
    return avaliador2;
}

void Caes::setNota1(int value)
{
    nota1 = value;
    CalcularMedia();
}

int Caes::getNota1() const
{
    return nota1;
}

void Caes::setNota2(int value)
{
    nota2 = value;
    CalcularMedia();
}

int Caes::getNota2() const
{
    return nota2;
}

float Caes::CalcularMedia() {
    media =  ((nota1*5.0)+(nota2*5.0))/10.0;
}

double Caes::getMedia() const
{
    return media;
}

Caes::Caes()
{
    nota1 = 0;
    nota2 = 0;
    media = 0;

}

