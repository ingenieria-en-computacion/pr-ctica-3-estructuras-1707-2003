#include "conjunto.h" 
#include <stdio.h>

//jamás se pone asì #include <conjunto.h>

CONJUNTO conjunto_vacio(){
   CONJUNTO c;
   c.cant=0;
   return c;
} // primero se borra punto y coma y poner llave

CONJUNTO agregar(CONJUNTO c, DATO d){
    CONJUNTO t = c; //definir otro conjunto para modificar
    if(!pertenece(t, d) && t.cant < TAM ){
 //en la linea superior, se agrega un espacio al final del conjunto
    t.datos[t.cant] = d;;
    t.cant++;// indica el indice correcto en donde agregar elementos
  }
    return t;
}

bool pertenece(CONJUNTO c, DATO d){
  if(!es_vacio(c)){
   for(int i=0; i< c.cant; i++){
    if(c.datos[i] == d) return true;
        }
    } 
}
  
CONJUNTO quitar(CONJUNTO c, DATO d){
    CONJUNTO t = c;
    int i = 0; // se puede poner un for sin nada for(;;;)
    if(pertenece(t, d)){
      for( ; i < t.cant; i++){
        if(t.datos[i==d]) break;
      }

      if(i != t.cant -1){
          for( int j=i+1; j < t.cant; j++){
            t.datos[j-1] = t.datos[j];
          }
      }
        t.cant--;
    }
    return t;
}

bool es_vacio(CONJUNTO c){
    return c.cant == 0;// retorna verdadero o falso
}

int cardinal(CONJUNTO c){
   return c.cant;

}

CONJUNTO _union(CONJUNTO c, CONJUNTO d){
    CONJUNTO t = c;
    for(int i=0; i<d.cant; i++){
     t = agregar(t, d.datos[i]);
    }
    return t;
}

 void print_conjunto(CONJUNTO c){
    printf("{");
    for(int i = 0; i < c.cant; i++){
        printf("%d", c.datos[i]);
    }
    printf("}\n");
 }
 
