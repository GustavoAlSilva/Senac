<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
            include('conexao.php');
            if (isset($_GET['id_usuario'])){
                $id = $_GET['id_usuario'];
                $sql = "Delete from usuario where id_usuario='$id'";
                $query = mysqli_query($conexao, $sql);
                
                if ($query){
                    header('location:listar.php');
                } else {
                    echo "Erro: Os Dados não foram deletados.<br/>";
                    echo "Comando: ".$sql."<br/>";
                }
            }
        ?>
    </body>
</html>