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
@app.route("/nome/<nosso_nome>")
def aparece_meu_nome(nosso_nome):
    return f'''
        <h1>Bem vindo {escape(nosso_nome)}</h1>
    '''

@app.route("/pagina")
def rodar_pagina_html():
    return render_template('ola_mundo.html')

if __name__ == '__main__':
    app.run()