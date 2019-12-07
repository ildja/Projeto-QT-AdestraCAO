#include "arquivo.h"



Arquivo::Arquivo()
{

}

bool Arquivo::salvarLista(QString &arquivo, Classificador a)
{
    QFile arq(arquivo + ".csv");

        arq.open(QIODevice::WriteOnly);
        if(arq.isOpen()){
            for(auto d : a.returnVector()){
                qDebug() << a.returnVector().size();
                QString linha = d.getNome() + ","
                                + QString::number(d.getMedia()) + ","
                                + QString::number(d.getNota1()) + ","
                                + QString::number(d.getNota2()) + ","
                                + d.getRaca() + ","
                                + QString::number(d.getIdade()) + ","
                                + d.getSexo() + ","
                                + d.getResponsavel() + ","
                                + d.getAdestrador() + ","
                                + d.getAvaliador1() + ","
                                + d.getAvaliador2() + "\n";

                arq.write(linha.toLocal8Bit());
            }
            arq.close();
            return 1;
        }else{
            return 0;
        }
}

bool Arquivo::carregarLista(QString &arquivo, Classificador &b)
{
    //if(b.getLista().size() > 0)
    b.limparVetor();
    QFile arq(arquivo);
        arq.open(QIODevice::ReadOnly);
        QString linha;
        QStringList dados;
        while(!arq.atEnd()){
            Caes temp;
            linha = arq.readLine();
            dados = linha.split(",");
            temp.setNome(dados[0]);
            temp.setMedia(dados[1].toInt());
            temp.setNota1(dados[2].toInt());
            temp.setNota2(dados[3].toInt());
            temp.setRaca(dados[4]);
            temp.setIdade(dados[5].toInt());
            temp.setSexo(dados[6]);
            temp.setResponsavel(dados[7]);
            temp.setAdestrador(dados[8]);
            temp.setAvaliador1(dados[9]);
            temp.setAvaliador2(dados[10]);

//            temp.setNome(dados[0]);

//         //   temp.CalcularMedia();
//            temp.setRaca(dados[2]);
//            temp.setIdade(dados[3].toInt());
//            temp.setSexo(dados[4]);
//            temp.setResponsavel(dados[5]);
//            temp.setAdestrador(dados[6]);
//            temp.setNota1(dados[8].toInt());
//            temp.setNota2(dados[9].toInt());
            b.btn_inserirDados(temp);
        }
        arq.close();
        return 0;
}
