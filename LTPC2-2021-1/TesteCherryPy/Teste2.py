#Arquivo criado para possuir diferente rotas na aplicação
import random
import string

import cherrypy


class StringGenerator(object):
    #localhost:8080
    @cherrypy.expose
    def index(self):
        return "Hello world!"
    #localhost:8080/generate
    @cherrypy.expose
    def generate(self):
        return ''.join(random.sample(string.hexdigits, 8))


if __name__ == '__main__':
    cherrypy.quickstart(StringGenerator())