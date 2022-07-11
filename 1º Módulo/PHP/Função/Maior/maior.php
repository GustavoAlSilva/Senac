<?php
    $n1 =$_POST["n1"];
    $n2 =$_POST["n2"];
  
    function maior($n1, $n2) {
        if ($n1 == $n2) {
            return "Eles são iguais";
        }
        else if ($n1 > $n2) {
            return $n1;
        }
        else {
            return $n2;
        }
    }       
 
    $resultado = maior($n1, $n2);     

    echo "Número 1: " . $n1;
    echo "<br>Número 2: " . $n2;
    echo "<br> Maior:  " . $resultado;
 
?>