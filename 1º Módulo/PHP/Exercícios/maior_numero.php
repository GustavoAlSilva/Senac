<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Maior número</title>
</head>
<body>
    <form method="POST">
        Número 1: <input type="text" name="num1"/></br>
        Número 2: <input type="text" name="num2"/></br>
        Número 3: <input type="text" name="num3"/></br>
        <input type="submit" name="submit">
        </br></br>
    </form>
    <?php
        if (isset($_POST['submit'])) {
            $num1 = $_POST["num1"];
            $maior = $num1;
            $num2 = $_POST["num2"];
            $num3 = $_POST["num3"];
            if (is_numeric($num1) == true && is_numeric($num2) == true && is_numeric($num3) == true) {
                if($num2 >= $maior) {
                $maior = $num2;
                }
                if($num3 >= $maior) {
                    $maior = $num3;
                }
                echo "Maior número: ", $maior;
            }
            else {
                echo "Por favor, digite apenas números.";
            }
        }
    ?>
</body>
</html>
