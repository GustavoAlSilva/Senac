<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>08 - FOR</title>
</head>
<body>
    <?php
        for ($i = 1; $i <= 10; $i++) {
            $cubo = $i * $i * $i;
            echo "O cubo de $i é $cubo </br>";
        }
    ?>
</body>
</html>