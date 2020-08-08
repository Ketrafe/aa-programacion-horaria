#include <stdio.h>

#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <random>
#include <sstream>
#include <string>
#include <vector>

#include "Asignatura.hpp"
#include "Aula.hpp"
#include "Carrera.hpp"

using namespace std;

vector<string> split(string, char);
vector<Carrera> generarCarreras(string);
vector<Carrera> generarAsignaturas(string);
vector<Aula> generarSalas(string, string);
int random(int, int);
vector<Aula> salasLlenas(vector<Aula>, vector<Carrera>);
void imprimirSalas(vector<Aula>);
