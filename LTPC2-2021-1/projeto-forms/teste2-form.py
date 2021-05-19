import random
import string
import cherrypy

class StringGenerator(object):
    @cherrypy.expose
    def index(self):
        return """<html>
          <head></head>
          <body>
            <h1>Minha Entrada de Dados:</h1>
            <iframe width="560" height="315" src="https://www.youtube.com/embed/CDW2ReQZOQU" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
            <p>Informe seu nome e sua opinião:</p>
            <form method="get" action="obrigado">
              <input type="text" value="Nome:" name="nome" />
              <input type="text" value="Opinião:" name="opiniao" />
              <button type="submit">Give it now!</button>
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