#nome @ email . com
#faleconosco@kabum.com.br
#sac @ pichau . com.br
#murilo.zcarvalho @ fatec . sp . gov . br

def validador_de_email(email):
    temArroba = '@' in email
    temPonto = '.' in email
    if temArroba and temPonto:
        return True
    else:
        return False
seu_email = input("Digite um email:")
if validador_de_email(seu_email):
    print("E-mail válido!")
else:
    print("E-mail inválido!")
