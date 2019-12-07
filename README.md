# AdestraCAO

### Projeto feito utilizando Qt Creator (QT), para disciplina de: Técnicas de Programação 2019.2.

# Sobre o Gerenciador

O **AdestraCAO** é um aplicativo de cadastro de cães participantes de campeonato, gerenciando as notas indicadas pelos avaliadores, indicando o pódio com nome e raça.


![imagem 1](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/01.jpg)

Na tela de cadastro é inserido nome, sexo, idade e raça do animal; nome do responsável e do adestrador do cachorro; e nome dos dois avaliadores e suas respectivas notas. Nessa mesma tela encontra-se a amostragem dos cadastrados. Além da tela de cadastro e amostragem dos Cães inseridos, o AdestraCAO possui uma tela de estatísticas chamada Resultado Campeões, que contem os três principais destaques, o número de fêmeas e machos, e a média de idade dos Cães participantes.


# Manual do Usuário

### AdestraCAO possui um layout fácil e acessível que possibilita uma utilização rápida!

### Como começar a usar?

Vamos começar inserindo os dados como nome, responsável, adestrador e avaliadores, ressaltando que devem ser digitados palavras com no mínimo três letras, já os dados numéricos como idade e notas são exclusivamente validos de 0 a 100 e de 0 a 30, respectivamente. Para finalizarmos vamos inserir a senha válida (201916100), só assim é possível realizar o cadastro com sucesso. 


![imagem 2](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/02.jpg)
![imagem 3](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/03.jpg)

### Ah!! E se for digitado um animal que já tenha cadastro? 

Bem, nesse caso não será possível essa aplicação, pois o programa possui um algoritmo que detecta essa duplicidade, impedindo o cadastro. O mesmo ocorre se faltar algum dado ou não tenha nenhum na planilha de cadastro.


![imagem 16](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/16.jpg)

### Como ordenar os Cães por nome? Por média? Por raça?

Temos um quadro de seleção que auxilia na organização desses itens. Seleciona-se o item desejado e clica no botão para a efetuação do processo de organização.

![Imagem 4](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/04.jpg)

![imagem 5](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/05.jpg)

![imagem 6](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/06.jpg)


### Eita!! Errei dados já cadastrados, e agora? Como posso editar?

Você pode alterar os dados clicando duas vezes na célula que deseja editar, aparecerá uma caixa de mensagem perguntando se você quer alterar o dado selecionado. Se "Yes", você pode editar o dado desejado. Já no dado de Média, se você clicar em "Yes", duas caixas de entrada de dados aparecerão e você poderá alterar a nota do primeiro avaliador e do segundo avaliador para recalcular a média.

![imagem 07](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/07.jpg)

![imagem 08](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/08.jpg)


### Ah!! Você também pode excluir dados cadastrados!! Legal né?!

É só clicar no botão Excluir Dados que esta posicionado dentro da tabela de Provas Realizadas, acima do nome do Cachorro. Vai aparecer uma caixa de mensagem onde você deverá digitar o nome do cachorro que deseja excluir os dados. ps.: É preciso digitar o nome do animal que irá ser excluido da mesma forma que esta na tabela.

![imagem 09](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/09.jpg) 

![imagem 10](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/10.jpg)


### Como salvar os dados em um arquivo? E como carregar os dados de um arquivo existente?

Simples!! Basta selecionar a opção Salvar lá em arquivos e todos os dados serão salvos em arquivos separados por vírgula (.csv). daí, você já pode limpar a tabela se não desejar que fique a mostra na tela ou se desejar sair do aplicativo, sendo acessados em suas respectivas opções em arquivos.

imagem salvar


Para carregar também é muito fácil, basta selecionar um arquivo que respeite o formato lido pelo app (todas informações separadas por vírgulas) e ele será mostrado automaticamente dentro das tabelas e estará pronto para ser lido nas estatísticas, ordenado por nome, média e raça.

imagem carregar


### Legal! Chegamos agora na parte boa... Vamos descobrir quem são os três colocados, número de fêmeas, machos e média de idade dos animais cadastrados.

Apenas precisa acessar a segunda página do aplicativo e clicar em "Atualizar". Os três colocados serão mostrados nas suas respectivas posições no pódio. Também conterá a quantidade de cães fêmeas e machos e a idade média dos cadastrado no aplicativo.

![imagem 13](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/13.jpg)

![imagem 14](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/14.jpg)


### Fácil ne?! Haha, agora que você esta por dentro de como é fácil usar o AdestraCAO, vamos descobrir quem são os Cães do seu pódio! 

## Informações adicionais
Projeto realizado por **Ildja Viviane de Queiroz**, bacharelando em Engenharia Elétrica no IFPB - _campus_ João Pessoa. 
Contato: [ildjaviviane1@gmail.com](mailto:ildjaviviane1@gmail.com).
