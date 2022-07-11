<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>05 - True</title>
</head>
<body>
    <?php
        $idade = 21;
        $identidade = true;
        if ($idade > 18 && $identidade == true) {
            echo "Seja bem-vindo(a)!";
        }
        else {
             echo "Você não pode entrar.";
        }
    ?>
</body>
</html>