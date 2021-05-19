import random
import string
import cherrypy

class StringGenerator(object):
    @cherrypy.expose
    def index(self):
        return """
        <!DOCTYPE html>
        <html>
          <head>
            <meta charset="utf-8">
            <meta name="viewport" content="width=device-width, initial-scale=1">
            <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bulma@0.9.2/css/bulma.min.css">
            <title>Minha Página WEB com Python</title>
          </head>
          <body>
            <h1>Minha Entrada de Dados:</h1>
            <iframe width="560" height="315" src="https://www.youtube.com/embed/CDW2ReQZOQU" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
            <p>Informe seu nome e sua opinião:</p>
            <form method="get" action="obrigado">
                <input class="input" type="text" placeholder="Nome:" name="nome"><br><br>
                <input class="input is-rounded" type="text" placeholder="Opinião" name="opiniao">
                <button class="button is-info is-rounded" type="submit">Dar Opinião</button>
            </form>
          </body>
        </html>"""

    @cherrypy.expose
    def generate(self, length=8):
        return ''.join(random.sample(string.hexdigits, int(length)))

    @cherrypy.expose
    def obrigado(self, nome, opiniao):
        nome = nome.upper()
        opiniao = opiniao.upper()
        return f"""<html>
          <head></head>
          <body>
            <h1>Obrigado!</h1>            
            <p>Obrigado {nome} por sua opinião!</p>
            <p>Opinião:{opiniao}</p>
            <img src="https://i.pinimg.com/originals/0a/92/35/0a92358a5d63bfa6bda947eb834bf878.jpg">           
            <a href="http://localhost:8080">Voltar</a>
          </body>
        </html>"""


if __name__ == '__main__':
    cherrypy.quickstart(StringGenerator())