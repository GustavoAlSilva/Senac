<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Formulário</title>
        <style type="text/css">
            td, th{padding: 5px; border:1px solid #ccc;}
        </style>
    </head>
    <body>
        <?php
            include('conexao.php');
            $sql = "Select id_usuario, nome, dt_nascimento from usuario";
            $query = mysqli_query($conexao, $sql);
            
            echo "<table>
                    <tr>
                        <th>Nome</th>
                        <th>Data de nascimento</th>
                        <th>Alterar</th>
                        <th>Deletar</th>";
            echo "<tbody>";
            if ($query){
                while ($registro= mysqli_fetch_array($query)){
                    
                    echo "<tr><td>".$registro['nome']."</td>";
                    echo "<td>".$registro['dt_nascimento']."</td>";
                    echo "<td><center><a href='alterar.php?id_usuario=".$registro['id_usuario']."'>(+)</a></center></td>";
                    echo "<td><center><a href='deletar.php?id_usuario=".$registro['id_usuario']."'>(-)</a></center></td></tr>";
                }
            }    
            echo "</tbody>";
            echo "</table>"
        ?>
        <input type="button" name="cadastro" value="Novo Cadastro" onclick="parent.location='adicionar.php'">
    </body>
</html>
