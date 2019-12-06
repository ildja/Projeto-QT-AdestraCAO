#include "arquivo.h"



Arquivo::Arquivo()
{

}

bool Arquivo::salvarLista(QString &arquivo, Classificador a)
{
    QFile arq(arquivo + ".csv");

        arq.open(QIODevice::WriteOnly);
        if(arq.isOpen() == 1){
            for(auto d : a.returnVector()){
                QString linha = d.getNome() + "," + d.getSexo() + "," + d.getRaca() + "," + d.getIdade() + "," + d.getResponsavel() + "," + d.getAdestrador() + "," + d.getAvaliador1() + "," + d.getAvaliador2() + "," + QString::number(d.getNota1()) + "," + QString::number(d.getNota2()) + "\n";
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
    if(b.getLista().size() > 0) b.limparVetor();
    QFile arq(arquivo);
        arq.open(QIODevice::ReadOnly);
        QString linha;
        QStringList dados;
        while(!arq.atEnd()){
            Caes temp;
            linha = arq.readLine();
            dados = linha.split(",");
            temp.setNome(dados[0]);
            temp.CalcularMedia();
            temp.setRaca(dados[2]);
            temp.setIdade(dados[3].toInt());
            temp.setSexo(dados[4]);
            temp.setResponsavel(dados[5]);
            temp.setAdestrador(dados[6]);
            temp.setNota1(dados[8].toInt());
            temp.setNota2(dados[9].toInt());
            b.btn_inserirDados(temp);
        }
        arq.close();
        return 0;
}
