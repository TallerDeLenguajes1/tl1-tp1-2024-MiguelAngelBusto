# tl1-tp1-2024-MiguelAngelBusto

### **Funcionamiento de .gitignore**

#### **¿Para que es necesario incluir un .gitignore?**

Es necesario para ignorar/omitir archivos/datos que nosotros creamos que no sean de importancia o que no deban saberse.

#### **¿Cuándo se debe hacer?**

Dos ejemplos muy claros y sencillos pueden ser: un archivo donde tengas contraseñas de configuración ya sea de correo electrónico u otras configuraciones de servidor, o bien archivos que se generan por defecto según nuestro pc, como .DS_store en mac.
Si lo notas, ambos son archivos que si necesitamos omitir, uno por seguridad de nuestro código y otro para no sobrecargar el código en si. Aunque el mejor código en sí no es el más corto, si debemos buscar que sea lo más limpio posible.

#### **¿Cómo configuraría el archivo .gitignore?**

Para configurarlo se debe hacer lo siguien:
1. Crear un archivo en tu repositorio con .gitignore
2. Necesitar conocer como base 3 caracteres dentro de la configuración de la omisión de archivos:

- #: caracter para escribir comentarios dentro del archivo gitignore. Puedes usarlo sin problema en cualquier parte del archivo siempre y cuando no sea sobre la misma línea de una omisión.
- /: con este catacter, especificas una ruta dentro del programa para omitir. Como es una ruta puede ser o bien, o una carpeta o archivos específicos. Si escoges una carpeta debes saber que todo lo de dentro se omitirá.
- *: este caracter es en sí un comodín. Con este podemos usarlo como una “propiedad” dentro de las omisiones. Por ejemplo, si queremos omitir todos los archivos tipo texto (txt) dentro del programa, usamos *.txt en la configuración.

3. Debes usar los siguientes comandos para aplicar las reglas que tu creaste: 
- $ touch ~/.gitignore
- $ git config --global core.excludesFile ~/.gitignore
