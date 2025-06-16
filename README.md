<<<<<<< HEAD
# Laboratorio 5 - IE0117: Programación Bajo Plataformas Abiertas

##Descripción del laboratorio

Este repositorio contiene la implementación de una estructura de datos de **arreglo dinámico en lenguaje C**, como parte del Laboratorio #5 del curso IE0117 - Programación Bajo Plataformas Abiertas de la Escuela de Ingeniería Eléctrica de la Universidad de Costa Rica.

El objetivo de este laboratorio es poner en práctica el uso de memoria dinámica, organización modular del código, buenas prácticas de programación en C, y el uso de sistemas de control de versiones con Git siguiendo el flujo GitFlow.

---

##Estructura del proyecto

\`\`\`
.
├── include/
│   └── arreglo.h           # Encabezado con definición de funciones y estructura
├── src/
│   └── arreglo.c           # Implementación de funciones del arreglo dinámico
├── main.c                  # Programa principal con pruebas
├── Makefile                # Compilación automática
└── README.md               # Este archivo
\`\`\`

---

## Pasos para compilar

Puedes compilar el proyecto usando \`make\`:

\`\`\`bash
make
\`\`\`

Esto generará un ejecutable llamado \`main\`.

---

## Pasos para ejecutar

Una vez compilado, ejecuta el programa con:

\`\`\`bash
./main
\`\`\`

Deberías ver una demostración de las operaciones básicas sobre el arreglo dinámico (agregar, eliminar, imprimir, etc.).

---

## Pasos para limpiar archivos generados

Para eliminar los archivos objeto y el ejecutable, puedes usar:

\`\`\`bash
make clean
\`\`\`

Esto borrará los archivos \`main\`, \`main.o\` y \`arreglo.o\`.

---

## Prueba de memory leaks con Valgrind

Para validar que no existen fugas de memoria, ejecuta el siguiente comando:

\`\`\`bash
valgrind ./main
\`\`\`

Si el programa fue implementado correctamente, deberías ver el mensaje:

\`\`\`
All heap blocks were freed -- no leaks are possible
\`\`\`

---

## Enlace al repositorio

Este es el enlace público al repositorio en GitHub donde se aloja el código:

> (https://github.com/ANDRES-LA/laboratorio5)

Este proyecto fue desarrollado por José Andrés, estudiante de IE0117.
Nota: Esta implementación fue realizada siguiendo el flujo GitFlow con al menos 3 commits en la rama feature/arreglo.

