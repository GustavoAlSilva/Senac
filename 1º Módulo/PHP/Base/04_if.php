<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>04 - IF</title>
</head>
<body>
    <?php
        $idade = 17;
        if ($idade < 18) {
            echo "Você não possui idade necessária para entrar.";
        }
        else {
            echo "Seja bem-vindo(a)!"; 
        }
    ?>
</body>
</html>