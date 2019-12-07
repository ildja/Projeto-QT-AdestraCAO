#ifndef CAES_H
#define CAES_H
#include <QObject>

class Caes
{
private:
    QString nome;
    QString sexo;
    QString raca;
    int idade;
    QString responsavel;
    QString adestrador;
    QString avaliador1;
    QString avaliador2;
    int nota1;
    int nota2;
    double media;

public:
    Caes();
    Caes(QString name, QString sex, QString raca, QString idad, QString resp, QString adest, QString avali1, QString avali2, float nota1, float nota2);

    QString getNome()const;
    bool setNome(const QString &value);

    QString getSexo()const;
    void setSexo(const QString &value);

    QString getRaca()const;
    void setRaca(const QString &value);

    int getIdade()const;
    void setIdade(const int &value);

    QString getResponsavel()const;
    bool setResponsavel(const QString &value);

    QString getAdestrador()const;
    bool setAdestrador(const QString &value);

    QString getAvaliador1()const;
    bool setAvaliador1(const QString &value);

    QString getAvaliador2()const;
    bool setAvaliador2(const QString &value);

    int getNota1()const;
    void setNota1(int value);

    int getNota2()const;
    void setNota2(int value);

    float CalcularMedia();

    double getMedia() const;

signals:

public slots:
};

#endif // CAES_H
