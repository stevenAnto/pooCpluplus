#include<iostream>
#include<string>

class LibroCalificaciones{
  public:
    explicit LibroCalificaciones(std::string nombre):
      nombreCurso( nombre){

      }
    void setNombreCurso( std::string nombre){
      nombreCurso = nombre;
    }
    std ::string obtenerNombreCurso() const {
      return nombreCurso;
    }

    void mostrarMensaje() const{
      std :: cout << "bienvenido al :"<<std ::endl
	<< obtenerNombreCurso()
	<< "!" << std ::endl;
    }
  private:
    std::string nombreCurso;
};
