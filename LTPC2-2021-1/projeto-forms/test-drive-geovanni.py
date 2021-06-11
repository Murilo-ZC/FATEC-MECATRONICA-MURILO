import cherrypy


class StringGenerator(object):
    def calcular_imposto(self,salario):
        if salario <= 1903.98:
            imposto = 0
        elif salario <= 2826.65:
            imposto = salario * 0.075 - 142.80
        elif salario <= 3751.05:
            imposto = salario * 0.15 - 354.80
        elif salario <= 4664.68:
            imposto = salario * 0.225 - 636.13
        else:
            imposto = salario * 0.275 - 869.36
        return imposto
    @cherrypy.expose
    def index(self):
        return """<html>
              <head></head>
              <body>
                <h1>seja muito bem vindo ao seu calculador de imposto de renda:</h1>
                <p>informe seu salario:</p>
                <form method="get" action="obrigado">
                  <input type="text" value="salario" name="salario" />
                  <button type="submit">Give it now!</button>
                </form>
              </body>
            </html>"""

    @cherrypy.expose
    def obrigado(self, salario):
        salario = salario.upper()
        return f"""<html>          
              <head></head>         
              <body>           
              <h1>Obrigado!</h1>                       
              <p>Obrigado seu salario esta aqui: {salario}</p>            
              <p>salario:{salario}</p>      
              <p>imposto devido: {self.calcular_imposto(float(salario))}</p>            
            </body>        
            </html>"""


if __name__ == '__main__':
    cherrypy.quickstart(StringGenerator())


