#Segundo projeto com CherryPy

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

#Se pedimos para o arquivo rodar
if __name__=="__main__":
    cherrypy.quickstart(NossoSite())