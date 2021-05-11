#Primeiro projeto com CherryPy

#Importa a biblioteca
import cherrypy

#Implementa nossa aplicação WEB
class NossoSite(object):
    @cherrypy.expose
    def index(self):
        return "Ola Murilo!"

#Se pedimos para o arquivo rodar
if __name__=="__main__":
    cherrypy.quickstart(NossoSite())