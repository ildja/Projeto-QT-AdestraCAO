# Gerenciando Campeonato de Adestramento de Cães!
Projeto feito utilizando Qt Creator (QT), para disciplina de: Técnicas de Programação 2019.2.


# Sobre o Gerenciador

O **AdestraCAO** é um aplicativo de cadastro de cães participantes de campeonato, gerenciando as notas indicadas pelos avaliadores, indicando o pódio com nome e raça.


![imagem tela inicial](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/TelaInicial.png)

Na tela de cadastro é inserido nome, sexo, idade e raça do animal; nome do responsável e do adestrador do cachorro; e nome dos dois avaliadores e suas respectivas notas. Nessa mesma tela encontra-se a amostragem dos cadastrados. Além da tela de cadastro e amostragem dos Cães inseridos, o AdestraCAO possui uma tela de estatísticas chamada Resultado Campeões, que contem os três principais destaques, o número de fêmeas e machos, e a média de idade dos Cães participantes.


# Manual do Usuário

### AdestraCAO possui um layout fácil e acessível que possibilita uma utilização rápida!

### Como começar a usar?

Vamos começar inserindo os dados como nome, responsável, adestrador e avaliadores, ressaltando que devem ser digitados palavras com no mínimo três letras, ja os dados numéricos como idade e notas são exclusivamente validos de zero a 100 e de zero a 30, respectivamente. Para finalizarmos vamos inserir a senha válida, só assim é possível realizar o cadastro com sucesso. 


![dados](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/preenchimentocadastro.png)

Ah!! E se for digitado um animal que já tenha cadastro? 

Bem, nesse caso não será possível essa aplicação, pois o programa possui um algoritmo que detecta essa duplicidade, impedindo o cadastro. O mesmo ocorre se faltar algum dado ou não tenha nenhum na planilha de cadastro.

imagem duplicidade


### Como ordenar os Cães por nome? Por média? Por raça?

Temos um quadro de seleção que auxilia na organização desses itens. Seleciona-se o item desejado e clica no botão para a efetuação do processo de organização.

![imagem com organização dados](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/ordenar.png)

### Eita!! Errei dados já cadastrados, e agora? Como posso editar?

Você pode alterar os dados clicando duas vezes na célula que deseja editar, aparecerá uma caixa de mensagem perguntando se você quer alterar o dado selecionado. Se sim, você pode editar o dado desejado. Já no dado de Média, se você clicar em "Yes", duas caixas de entrada de dados aparecerão e você poderá alterar a nota do primeiro avaliador e do segundo avaliador para recalcular a média.

![imagem editar](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/editardados1.png)
![editar](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/editardados2.png)

### Ah!! Você também pode excluir dados cadastrados!! Legal né?!

É só clicar no botão Excluir Dados que esta posicionado dentro da tabela de Provas Realizadas, acima do nome do Cachorro. Vai aparecer uma caixa de mensagem onde você deverá digitar o nome do cachorro que deseja excluir os dados.

![imagem caixa exclusão](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/excluir1.png) 
![excluir](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/excluir3.png)

### Como salvar os dados em um arquivo? E como carregar os dados de um arquivo existente?

Simples!! Basta selecionar a opção Salvar lá em arquivos e todos os dados serão salvos em arquivos separados por vírgula (.csv). daí, você ja pode limpar a tabela se não desejar que fique a disposição na tela ou sair do aplicativo, sendo acessados em suas respectivas opções em arquivos.

imagem salvar


Para carregar também é muito fácil, basta selecionar um arquivo que respeite o formato lido pelo app (todas informações separadas por vírgulas) e ele será mostrado automaticamente dentro das tabelas e estará pronto para ser lido nas estatísticas, ordenado por nome, média e raça.

imagem carregar


### Legal! Chegamos agora na parte boa... Vamos descobrir quem são os três colocados, número de fêmeas, machos e média de idade dos animais cadastrados.

Apenas precisa acessar a segunda página do aplicativo e clicar em "Atualizar". Os três colocados serão mostrados nas suas respectivas posições no pódio. Também conterá a quantidade de cães fêmeas e machos e a idade média dos cadastrado no aplicativo.


![imagem podio](https://github.com/ildja/Projeto-QT-AdestraCAO/blob/master/Imagens%20Prints/podio11.png)


### Fácil ne?! Haha, agora que você esta por dentro de como é facil usar o AdestraCAO, vamos descobrir quem são os Cães do seu pódio! 
