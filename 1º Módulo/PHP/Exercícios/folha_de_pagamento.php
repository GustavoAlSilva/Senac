<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Folha de pagamento</title>
</head>
<body>
    <form method="POST">
        Horas trabalhadas no mês: <input type="text" name="num1"/><br/>
        Valor da hora trabalhada no mês: <input type="text" name="num2"/><br/>
        <input type="submit" name="submit">
        </br></br>
    </form>
    <?php
        if (isset($_POST['submit'])){
            $horas =$_POST['num1'];
            $valor =$_POST['num2'];
            $salliquido = 0;
            $desconto_ir = 0;
            $desconto_sindicato = 0;
            $desconto_fgts = 0;
            if (is_numeric($horas) && is_numeric($valor)){
                $salbruto = $horas * $valor;
                $desconto_sindicato = (0.03) * $salbruto;
                $desconto_fgts = (0.11) * $salbruto;
                if ( $salbruto > 2500){
                    $desconto_ir = (0.20) * $salbruto;
                    $salliquido = $salbruto - ($desconto_ir + $desconto_sindicato);
                    echo "Salário líquido: R$" .$salliquido ."<br/>FGTS: R$" .$desconto_fgts ."<br/>Imposto de renda: R$" .$desconto_ir ."<br/>Sindicato: R$" .$desconto_sindicato ."<br/><br/>";   
                }
                if ( $salbruto > 1500 && $salbruto <= 2500){
                    $desconto_ir = (0.10) * $salbruto;
                    $salliquido = $salbruto - ($desconto_ir + $desconto_sindicato);
                    echo "Salário líquido: R$" .$salliquido ."<br/>FGTS: R$" .$desconto_fgts ."<br/>Imposto de renda: R$" .$desconto_ir ."<br/>Sindicato: R$" .$desconto_sindicato ."<br/><br/>";    
                }
                if ( $salbruto <= 1500 && $salbruto > 900){
                    $desconto_ir = (0.05) * $salbruto;
                    $salliquido = $salbruto - ($desconto_ir + $desconto_sindicato);
                    echo "Salário líquido: R$" .$salliquido ."<br/>FGTS: R$" .$desconto_fgts ."<br/>Imposto de renda: R$" .$desconto_ir ."<br/>Sindicato: R$" .$desconto_sindicato ."<br/><br/>";     
                }
                if ($salbruto <= 900){
                    $salliquido = $salbruto - $desconto_sindicato;
                    echo "Salário líquido: R$" .$salliquido ."<br/>FGTS: R$" .$desconto_fgts ."<br/>Imposto de renda: R$" .$desconto_ir ."<br/>Sindicato: R$" .$desconto_sindicato ."<br/><br/>";    
                }
            }else {
                echo "Por favor, digite apenas números.";
            }
        }
    ?> 
</body>
</html>
