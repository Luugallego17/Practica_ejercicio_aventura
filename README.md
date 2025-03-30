# Practica_ejercicio_aventura

# Búsqueda del Tesoro 🏆

 -Este repositorio contiene el código de un emocionante juego llamado "Búsqueda del Tesoro". El objetivo del juego es tomar decisiones estratégicas para mantener tu energía mientras atraviesas diversos desafíos y llegar al tesoro perdido al final de la aventura.

# Descripción del Juego 📖

 -. El juego comienza con el personaje llamado JeyJey, quien cuenta con 100 puntos de energía.
 -. A medida que avanzas, cada decisión afecta tu puntaje, representando la energía restante.
 -. El juego consta de varias etapas:
 1. Puerta Mágica: Acertar el número correcto para avanzar.
 2. Habitación del Monstruo Guardián: Elegir entre luchar o huir, ambas opciones impactan tu energía.
 3. Laberinto: Navegar por tres caminos donde perderás energía dependiendo de la dirección que elijas.
 4. Tesoro Perdido: Solo podrás reclamar el tesoro si conservas suficiente energía.

# Pseudocódigo 💡

INICIO

    DEFINIR variables: personaje = "JeyJey", puerta = 0, puntaje = 100
    MOSTRAR mensaje de bienvenida y reglas del juego
    
    HACER
        MOSTRAR puerta mágica y pedir número
        SI número incorrecto:
            REDUCIR energía
        SI energía <= 0:
            MOSTRAR "Game over"
            SALIR
    MIENTRAS número incorrecto

    MOSTRAR opciones en la Habitación del Monstruo Guardián
    LEER opción
    SEGÚN opción:
        CASO luchar: REDUCIR energía
        CASO huir: REDUCIR energía
        CASO inválido: REDUCIR energía
    SI energía <= 0:
        MOSTRAR "Game over"
        SALIR
    ITERAR tres caminos del laberinto:
        PEDIR dirección
        SI izquierda: REDUCIR energía
        SI derecha: REDUCIR energía
        SI inválido: REDUCIR energía
    SI energía <= 0:
        MOSTRAR "Game over"
        SALIR
    SI energía suficiente:
     MOSTRAR "Felicidades, conseguiste el tesoro"
    SINO:
        MOSTRAR "No tienes suficiente energía para reclamar el tesoro"
FIN


