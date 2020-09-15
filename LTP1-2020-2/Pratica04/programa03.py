#Pede para o usuário digitar uma senha e valida ela com a senha secreta
#Cria uma variavel para guardar a senha
senha_secreta = '123456'

#Pede para o usuario digitar sua senha
senha = input('Informe a senha:')

#Verifica se a senha do usuario esta correta
if senha == senha_secreta:
  print('Bem vindo Hackerman')
else:
  print('Acesso negado!')

