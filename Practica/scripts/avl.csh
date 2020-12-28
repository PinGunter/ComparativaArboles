#!/bin/csh
@ inicio = 100
@ fin = 250000
@ incremento = 100
set ejecutable = bin/avl
set salida =  data/avl.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
end
