from flask import Flask,render_template
from markupsafe import escape
app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<p>Hello, World!</p>"
@app.route("/eu")
def minha_apresentacao():
    return '''
        <h1>Meu Nome</h1>
        <h2>Palmeiras sem mundial!</h2>
        <p>Esse texto vai aqui!</p>
    '''
@app.route("/nome")
@app.route("/nome/<nosso_nome>")
def aparece_meu_nome(nosso_nome=None):
    if nosso_nome == None:
        return f"""
            <h1>Você não falou seu nome!</h1>
        """
    else:
        return f'''
            <h1>Bem vindo {escape(nosso_nome)}</h1>
        '''

@app.route("/calculadora")
def descreve_calculadora():
    return render_template('calculadora_word.html')

@app.route("/calculadora/<operacao>/<num1>")
@app.route("/calculadora/<operacao>/<num1>/<num2>")
def calculadora(operacao=None, num1=None, num2=None):
    if operacao == "soma":
        resultado = float(num1)+float(num2)
        return f"""
            <h1>Resultado da {operacao}:{resultado}</h1>
        """
    elif operacao == 'menos':
        resultado = float(num1) - float(num2)
        return f"""
                    <h1>Resultado da {operacao}:{resultado}</h1>
                """


@app.route("/pagina")
def rodar_pagina_html():
    return render_template('ola_mundo.html')

if __name__ == '__main__':
    app.run()