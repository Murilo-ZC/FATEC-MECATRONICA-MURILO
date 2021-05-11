#Terceiro projeto com CherryPy

#Importa a biblioteca
import cherrypy

#Implementa nossa aplicação WEB
class NossoSite(object):
    @cherrypy.expose
    def index(self):
        return "Ola Murilo!"
    @cherrypy.expose
    def fatec(self):
        return "Bem vindo ao Curso de Mecatrônica da FATEC SA"
    @cherrypy.expose
    def minhaPagina(self):
        return """<html>
                  <head></head>
                  <body>
                    <h1>Ola Mundo! - Minha página Web!</h1>
                    <h2>Links:</h2>
                    <a href="https://www.youtube.com/">Youtube</a>
                    <a href="https://www.youtube.com/watch?v=GgwUenaQqlM">Video - Hero too</a>
                    <br>
                    <iframe width="560" height="315" src="https://www.youtube.com/embed/GgwUenaQqlM" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
                  </body>
                </html>"""

#Se pedimos para o arquivo rodar
if __name__=="__main__":
    cherrypy.quickstart(NossoSite())