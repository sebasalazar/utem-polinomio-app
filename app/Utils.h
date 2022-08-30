#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <regex>
#include "Monomio.h"

/**
 * Espacio de nombres para utilidades de manejo de monomios/polinomios
 */
namespace Utils {



    /**
     * 
     * @param texto cadena de texto
     * @return String sin espacios
     */
    std::string acomodar(std::string texto);

    /**
     * 
     * @param polinomioStr representación de texto del polinomio
     * @return Un arreglo con los terminos separados.
     */
    std::vector<std::string> obtener_terminos(std::string polinomioStr);

    /**
     * 
     * @param texto cadena de texto
     * @return Objeto monomio
     */
    Monomio str2Monomio(std::string texto);

    /**
     * 
     * @param polinomioStr Representación de string del polinomio
     * @return arreglo del polinomio.
     */
    std::vector<Monomio> convertir(std::string polinomioStr);

    /**
     * 
     * @param polinomio Arreglo de polinomios
     * @param value Elemento a evaluar
     * @return el valor resultante
     */
    double evaluar(std::vector<Monomio> polinomio, double value);
}

#endif /* UTILS_H */
