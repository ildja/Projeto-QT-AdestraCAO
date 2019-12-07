#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QPixmap>
#include <QApplication>
#include <QDesktopServices>
#include <QTextStream>
#include <QInputDialog>
#include <QWidget>
#include <tuple>
#include "arquivo.h"
#include "caes.h"
#include "classificador.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Classificador a;


private slots:
    void on_btn_inserirDados_clicked();
    void on_btn_limpardados_clicked();
    void on_btn_ordenar_clicked();
    void on_tabela_provarealizada_cellDoubleClicked(int row, int column);
    void on_btn_atualizar_clicked();
    void on_actionSalvar_triggered();
    void on_actionCarregar_triggered();
    void on_actionSair_triggered();
    void on_actionLimpar_Tabela_triggered();
    void on_ExcluirDados_clicked();


private:
    Ui::MainWindow *ui;
    void inserirDadosNaTabela();
    void inserirNaTabela(Caes k, int linhas);
    void Salvar();
    void Carregar();
};

#endif // MAINWINDOW_H
