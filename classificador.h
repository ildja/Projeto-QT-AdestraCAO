#ifndef CLASSIFICADOR_H
#define CLASSIFICADOR_H

#include <QObject>
#include <QVector>
#include <algorithm>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QStringList>
#include <QMessageBox>
#include <tuple>
#include "caes.h"

class Classificador
{

public:
    QVector <Caes> lista;

    explicit Classificador();
    void btn_inserirDados (const Caes c);
    bool NomeRepetido(Classificador a, Caes b);

    QVector<Caes> getLista() const;
    QVector <Caes> returnVector();
 //   QVector<Caes> search();

    void limparVetor();

    void setLista(const QVector<Caes> &value);
    void ordenarListaMedia ();
    void ordenarListaNome ();
    void ordenarListaRaca();
    double getMediaIdade();

    QString primeirolugar();
    QString Racaprimeirolugar();
    QString segundolugar();
    QString Racasegundolugar();
    QString terceirolugar();
    QString Racaterceirolugar();

    std::tuple <int, int>contadorGenero(Classificador g);

    void setNota1(int index, int value);
    void setNota2(int index, int value);
    void setNome(int index, QString value);

    void clear();
    int size();

    //void erase(int index);
    Caes find(int index);
    Caes operator[](int i);
    void eraseNome(QString txt, Classificador b);
    void eraseMedia(QString txt);
    void eraseRaca(QString txt);
    void eraseIdade(QString txt);
    void eraseSexo(QString txt);
    void eraseResponsavel(QString txt);
    void eraseAdestrador(QString txt);
    void apagarNome(int i);


    void mudarObjeto(int l, int c, QString n);
    void mudarObjeto(int l, int c, int i);

signals:

public slots:
};

#endif // CLASSIFICADOR_H
