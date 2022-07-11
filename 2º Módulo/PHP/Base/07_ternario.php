<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>07 - TERNARIO</title>
</head>
<body>
    <?php
        $n1 = 9;
        $n2 = 5;
        $ternario = ($n2 > $n1) ? // "IF", mas mais direto
            "O número 2 é maior que o número 1." : "O número 2 não é maior que o número 1.";
        echo $ternario;
?>
</body>
</html>