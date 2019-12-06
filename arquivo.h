#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QDebug>
#include "caes.h"
#include "classificador.h"

class Arquivo : public Classificador
{
public:
    Arquivo();
    Classificador a, b;
    static bool salvarLista(QString &arquivo, Classificador a);
    static bool carregarLista(QString &arquivo, Classificador &b);

};

#endif // ARQUIVO_H
