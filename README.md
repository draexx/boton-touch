# Arduino Button LED Control PULL_UP Project

## Simulación
[Ver projeto en Tinkercad](https://www.tinkercad.com/things/3uciR4t9P28-boton-touch)

## Descripción
Código Arduino que controla un LED usando un botón con configuración INPUT_PULLUP.

## Componentes
- Arduino
- LED
- Botón pulsador
- Resistencias (si es necesario)

## Código Explicado

### Configuración de Pines
```cpp
int led = 13;    // Pin del LED
int boton = 9;   // Pin del botón
```

### Función `setup()`
- Configura LED como salida
- Configura botón como entrada con resistencia pull-up interna

### Función `loop()`
- Lee estado del botón
- Enciende LED cuando botón es presionado
- Apaga LED cuando botón no está presionado

## Características
- Uso de `INPUT_PULLUP`
- Antirebote básico con `delay(20)`
- Control simple de LED mediante botón

## Personalización
- Cambiar pines según conexión física
- Ajustar tiempo de antirebote

## Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## Autor
[Pedro Carranza](https://github.com/draexx)
