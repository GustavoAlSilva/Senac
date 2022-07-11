<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>09 - FOREACH</title>
</head>
<body>
    <?php
        $dia = array("Segunda-Feira",
        "Tercça-Feira",
        "Quarta-Feira",
        "Quinta-Feira");               
        foreach($dia as $item){
            echo "$item </br>";
        }   
        /* O Foreach realiza a função enquanto a lista não acabar (todos os itens da lista)
        */
    ?>
</body>
</html>