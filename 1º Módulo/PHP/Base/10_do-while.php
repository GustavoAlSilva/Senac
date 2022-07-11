<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>10 - DO WHILE</title>
</head>
<body>
    <?php
        $cont = 200;
        do {
            $dobro = $cont * 2;
            echo "O dobro de $cont é $dobro";
            $cont++;
        } while ($cont <= 0);
    ?>
</body>
</html>