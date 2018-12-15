# gitdca

### Configuracion inicial
* git config --global user.email "you@example.com"
* git config --global user.name "Your Name"

### Git Global aliases
* git config --global alias.co checkout
* git config --global alias.br branch
* git config --global alias.ci commit
* git config --global alias.st status

### Git Local aliases
Lo primero es entrar en el fichero "bashrc".
Para modificar este fichero hacemos uso del comando `gedit ~/.bashrc`.
Y una vez dentro metemos tantos alias como queramos.

* alias gs='git status'
* alias ga='git add'
* alias gb='git branch'
* alias gc='git commit'
* alias gd='git diff'
* alias go='git checkout'

### Git bisect
En las imagenes que se puden ver a continuación se explica como he utilizado git bisect para encontrar el fallo
en el software.
Una vez que hemos encontrado el fallo solo tendremos que hacer `git bisect reset` para volver al estado 
inicial y ahora si, arreglar el fallo.

![gitbisect](https://github.com/jorgegs29/gitdca/blob/master/gitbisect.PNG)
![gitdiff](https://github.com/jorgegs29/gitdca/blob/master/gitdiff.PNG)


### Git Hooks
Lo primero es consultar los hooks samples en mi caso voy a utilizar pre-commit hook sample. Y para ello tenemos que cambiar el nombre quitando el sufijo sample y darle permisos con el comando `chmod +x pre-commit´


