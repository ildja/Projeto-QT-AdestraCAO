#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->txt_nota1->setMaximum(100);
    ui->txt_nota2->setMaximum(100);
    ui->txt_idade->setMaximum(30);
    ui->tabela_provarealizada->setColumnWidth(0,120);
    ui->tabela_provarealizada->setColumnWidth(1,80);
    ui->tabela_provarealizada->setColumnWidth(2,190);
    ui->tabela_provarealizada->setColumnWidth(3,80);
    ui->tabela_provarealizada->setColumnWidth(4,100);
    ui->tabela_provarealizada->setColumnWidth(5,110);
    ui->tabela_provarealizada->setColumnWidth(6,120);
    ui->tabela_provarealizada->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_inserirDados_clicked()
{
    Caes c;

    if(c.setNome(ui->txt_nome->text()) or c.setResponsavel(ui->txt_responsavel->text()) or c.setAdestrador(ui->txt_adestrador->text()) or c.setAvaliador1(ui->txt_avaliador1->text()) or c.setAvaliador2(ui->txt_avaliador2->text())){
        QMessageBox::warning(this, "Dados Incompletos","Insira Todos os dados, incluindo palavras com mais de 2 letras");

    }else if(ui->txt_senha_acesso->text() == "201916100"){
            c.setSexo(ui->combo_sexo->currentText());
            c.setRaca(ui->combo_raca->currentText());
            c.setIdade(ui->txt_idade->text().toInt());
            c.setNota1(ui->txt_nota1->text().toInt());
            c.setNota2(ui->txt_nota2->text().toInt());

            if(ui->txt_idade->text().toInt() != 0 or ui->txt_nota1->text().toInt() or ui->txt_nota2->text().toInt()){

                if(!a.NomeRepetido(a, c)){
                    a.btn_inserirDados(c);
                    inserirDadosNaTabela();

                }else{
                    QMessageBox::warning(this, "Erro Duplicidade","Esse Cadastro já existe!");
                    }
            }else{
                QMessageBox::information(this,"Erro Preenchimento","Preencha todos os dados");
            }

    }else{
        QMessageBox::information(this,"Senha incorreta","Digite uma senha válida!");
            ui->txt_senha_acesso->clear();
    }

        ui->txt_nome->clear();
        ui->combo_sexo->setCurrentText("Selecione o sexo");
        ui->combo_raca->setCurrentText("Selecione a raça");
        ui->txt_idade->setValue(0);
        ui->txt_responsavel->clear();
        ui->txt_adestrador->clear();
        ui->txt_avaliador1->clear();
        ui->txt_avaliador2->clear();
        ui->txt_nota1->setValue(0);
        ui->txt_nota2->setValue(0);
        ui->txt_senha_acesso->clear();
}

void MainWindow::inserirDadosNaTabela()
{
    ui->tabela_provarealizada->setRowCount(0);

    int linhas = 0;

    QVector<Caes> temp = a.getLista();

    for(auto preencher : temp){

    ui->tabela_provarealizada->insertRow(linhas);

    ui->tabela_provarealizada->setItem(linhas,0, new QTableWidgetItem(preencher.getNome()));
    ui->tabela_provarealizada->setItem(linhas,1, new QTableWidgetItem(QString::number(preencher.getMedia())));
    ui->tabela_provarealizada->setItem(linhas,2, new QTableWidgetItem(preencher.getRaca()));
    ui->tabela_provarealizada->setItem(linhas,3, new QTableWidgetItem(QString::number(preencher.getIdade())));
    ui->tabela_provarealizada->setItem(linhas,4, new QTableWidgetItem(preencher.getSexo()));
    ui->tabela_provarealizada->setItem(linhas,5, new QTableWidgetItem(preencher.getResponsavel()));
    ui->tabela_provarealizada->setItem(linhas++,6, new QTableWidgetItem(preencher.getAdestrador()));
    }
}

void MainWindow::on_btn_limpardados_clicked()
{
    ui->txt_nome->clear();
    ui->combo_sexo->setCurrentText("Selecione o sexo");
    ui->combo_raca->setCurrentText("Selecione a raça");
    ui->txt_idade->setValue(0);
    ui->txt_responsavel->clear();
    ui->txt_adestrador->clear();
    ui->txt_avaliador1->clear();
    ui->txt_avaliador2->clear();
    ui->txt_nota1->setValue(0);
    ui->txt_nota2->setValue(0);
    ui->txt_senha_acesso->clear();
}

void MainWindow::on_btn_ordenar_clicked()
{
    if(ui->sel_nome->isChecked()) {
        ui->tabela_provarealizada->clearContents();
        a.ordenarListaNome();
        inserirDadosNaTabela();

    }else if (ui->sel_media->isChecked()) {
            ui->tabela_provarealizada->clearContents();
            a.ordenarListaMedia();
            inserirDadosNaTabela();


    }else if (ui->sel_raca->isChecked()) {
           ui->tabela_provarealizada->clearContents();
           a.ordenarListaRaca();

           inserirDadosNaTabela();

    }else{
          QMessageBox::warning(this,"Erro","Selecione uma das opções!");
         }
}

void MainWindow::on_actionSalvar_triggered()
{
    Salvar();
}

void MainWindow::on_actionCarregar_triggered()
{
    Carregar();
}

void MainWindow::Salvar()
{
    QString arqname = QFileDialog::getSaveFileName(this, "Salvar Arquivo","","*.csv");

    if(Arquivo::salvarLista(arqname, a) == 1)
        QMessageBox::information(this,"Salvar Provas Realizadas", "Dados salvos com Sucesso!");
    else
        QMessageBox::information(this,"Erro", "Não foi possível salvar os dados!");
}

void MainWindow::Carregar()
{
    QString arqname = QFileDialog::getOpenFileName(this, "Carregar Arquivos","","*.csv");

    if(Arquivo::carregarLista(arqname, a) == 1){
        QMessageBox::critical(this,"Arquivo","O arquivo já foi lido, favor cheque a tabela!");
    }else{
        ui->tabela_provarealizada->setRowCount(0);
        inserirDadosNaTabela();
       }
}

void MainWindow::on_actionLimpar_Tabela_triggered()
{
    ui->tabela_provarealizada->setRowCount(0);
}

void MainWindow::on_actionSair_triggered()
{
    QApplication::quit();
}

void MainWindow::on_tabela_provarealizada_cellDoubleClicked(int row, int column)
{
    if(column == 0){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Nome", "Digite o novo Nome", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
                a.mudarObjeto(row, column, txt);
                inserirDadosNaTabela();
            }
        }
    }

    if(column == 1){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Nota Avaliador 1", "Nota Avaliador 1", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
                a.mudarObjeto(row, column, txt.toInt());


            }

            QString txt1 = QInputDialog::getText(this, "Alterar Nota Avaliador 2", "Nota Avaliador 2", QLineEdit::Normal,"",&ok);
            if(ok and !txt1.isEmpty()){
                a.mudarObjeto(row, column + 1, txt.toInt());

            }
            a.find(row).CalcularMedia();
            inserirDadosNaTabela();
        }
    }

    if(column == 2){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Raça", "Digite a Raça", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
            a.mudarObjeto(row, column, txt);
            inserirDadosNaTabela();
            }
        }
    }

    if(column == 3){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Idade", "Digite a idade:",QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
            a.mudarObjeto(row, column, txt.toInt());
            inserirDadosNaTabela();          
            }
        }
    }

    if(column == 4){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Sexo", "Digite o sexo:", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
            a.mudarObjeto(row, column, txt);
            inserirDadosNaTabela();          
            }
        }
    }

    if(column == 5){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Destino", "Digite o novo destino", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
            a.mudarObjeto(row, column, txt);
            inserirDadosNaTabela();
            }
        }
    }

    if(column == 6){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Responsável", "Digite o responsável", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
            a.mudarObjeto(row, column, txt);            
            inserirDadosNaTabela();
            }
        }
    }
}

void MainWindow::on_btn_atualizar_clicked()
{
    a.ordenarListaIdade();
    a.ordenarListaMedia();


    int Feminino, Masculino;

    std::tie(Feminino, Masculino)= a.contadorGenero(a);

    if(ui->tabela_provarealizada->rowCount() == 0){
           QMessageBox::warning(this, "Atualização", "Atualização Inválida! Preencha a Tabela!");
    }else{

        if(a.size() >= 1){
          ui->txt_vencedorPrimeiro->setText(a.primeirolugar());
          ui->txt_racavencedora->setText(a.Racaprimeirolugar());

          if(a.size() >= 2){
          ui->txt_vencedorSegundo->setText(a.segundolugar());
          ui->txt_racaSegunda->setText(a.Racasegundolugar());

          if(a.size() >= 3){
          ui->txt_vencedorTerceiro->setText(a.terceirolugar());
          ui->txt_racaTerceiro->setText(a.Racaterceirolugar());
            }
          }
          ui->generofeminino->setText(QString::number(Feminino));
          ui->generomasculino->setText(QString::number(Masculino));
          ui->txt_mediaidade->setText(QString::number(a.getMediaIdade()));
         }
        }
}

void MainWindow::on_ExcluirDados_clicked()
{
    QMessageBox::StandardButton resp = QMessageBox::question(this, "Excluir Itens", "Você deseja excluir um item?");
    if(resp == QMessageBox::Yes){
        bool ok;

        QString txt = QInputDialog::getText(this, "Excluir Itens", "Digite o nome do cachorro(igual a como foi cadastrado) para excluí-lo", QLineEdit::Normal,"",&ok);

        bool apagarNome = false;
        int i = 0;

        for(auto proc : a.getLista()){
            if(proc.getNome() == txt){
                a.apagarNome(i);
                apagarNome = true;
                break;
            }
            i++;
        }

        for(int i = 0; i < a.size(); i++){
            if(a.lista[i].getResponsavel() == txt){
                a.eraseNome(txt, a);
                apagarNome = true;
                break;
            }
        }

        if(apagarNome){
            inserirDadosNaTabela();
        }
    }
}

void MainWindow::inserirNaTabela(Caes k, int linhas)
{
    ui->tabela_provarealizada->setItem(linhas,0, new QTableWidgetItem(k.getNome()));
    ui->tabela_provarealizada->setItem(linhas,1, new QTableWidgetItem(QString::number(k.getMedia())));
    ui->tabela_provarealizada->setItem(linhas,2, new QTableWidgetItem(k.getRaca()));
    ui->tabela_provarealizada->setItem(linhas,3, new QTableWidgetItem(QString::number(k.getIdade())));
    ui->tabela_provarealizada->setItem(linhas,4, new QTableWidgetItem(k.getSexo()));
    ui->tabela_provarealizada->setItem(linhas,5, new QTableWidgetItem(k.getResponsavel()));
    ui->tabela_provarealizada->setItem(linhas,6, new QTableWidgetItem(k.getAdestrador()));
}

