<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>06 - ELSEIF</title>
</head>
<body>
    <?php
        $nome = "Gustavo Silva";
        if($nome == "Cláudia Werlich") {
            echo "Olá Cláudia. </br> Tudo bem com você?";
        } elseif ($nome == "Jonas Mello") {
            echo "Olá Jonas. </br> Tudo bem com você?";
        } elseif ($nome == "Gustavo Silva") {
            echo "Olá Gustavo. </br> Tudo bem com você?";
        } else {
            echo "Olá $nome!";
        }
    ?>
</body>
</html>