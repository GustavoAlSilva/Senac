<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mais barato</title>
</head>
<body>
    <form method="POST">
        Valor 1: <input type="text" name="num1"/><br/>
        Valor 2: <input type="text" name="num2"/><br/>
        Valor 3: <input type="text" name="num3"/><br/>
        <input type="submit" name="submit">
        </br></br>
    </form>
    <?php    
        if (isset($_POST['submit'])){
            $num1 = $_POST['num1'];
            $num2 = $_POST['num2'];
            $num3 = $_POST['num3'];
            if (is_numeric($num1) == true && is_numeric($num2) == true && is_numeric($num3) == true){   
                if ($num1 < $num2 && $num1 < $num3){
                    echo "Valor mais barato: R$$num1";    
                }
                else if ($num2 < $num1 && $num2 < $num3){
                    echo "Valor mais barato: R$$num2";    
                }
                else if ($num3 < $num1 && $num3 < $num2){
                    echo "Valor mais barato: R$$num3";
                }
                else{
                    echo "Por favor, digite valores distintos.";
                }
            }
            else {
                echo "Por favor, digite apenas números.";
            }
        }    
    ?>
</body>
</html>
