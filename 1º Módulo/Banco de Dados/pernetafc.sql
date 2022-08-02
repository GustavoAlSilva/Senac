-- phpMyAdmin SQL Dump
-- version 4.9.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 22-Set-2021 às 22:11
-- Versão do servidor: 10.4.6-MariaDB
-- versão do PHP: 7.3.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `pernetafc`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `adversario`
--

CREATE TABLE `adversario` (
  `id_adversario` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `arbitro`
--

CREATE TABLE `arbitro` (
  `id_arbitro` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `auxiliar`
--

CREATE TABLE `auxiliar` (
  `id_auxiliar` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `campeonato`
--

CREATE TABLE `campeonato` (
  `id_campeonato` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `cidade`
--

CREATE TABLE `cidade` (
  `id_cidade` int(11) NOT NULL,
  `uf_estado` varchar(2) DEFAULT NULL,
  `nome` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `equipe_arbitragem`
--

CREATE TABLE `equipe_arbitragem` (
  `id_equipe_arbitragem` int(11) NOT NULL,
  `id_arbitro` int(11) DEFAULT NULL,
  `id_tipo_arbitro` int(11) DEFAULT NULL,
  `id_jogo` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `estadio`
--

CREATE TABLE `estadio` (
  `id_estadio` int(11) NOT NULL,
  `id_cidade` int(11) DEFAULT NULL,
  `nome` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `estado`
--

CREATE TABLE `estado` (
  `uf_estado` varchar(2) NOT NULL,
  `nome` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `hist_goleada`
--

CREATE TABLE `hist_goleada` (
  `id_hist_gloeada` int(11) NOT NULL,
  `id_adversario` int(11) DEFAULT NULL,
  `id_jogo` int(11) DEFAULT NULL,
  `qtd_gol_adv` int(3) DEFAULT NULL,
  `qtd_gol_casa` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `jogador`
--

CREATE TABLE `jogador` (
  `id_jogador` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  `telefone` int(11) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `cpf` int(11) DEFAULT NULL,
  `salario` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `jogo`
--

CREATE TABLE `jogo` (
  `id_jogo` int(11) NOT NULL,
  `id_reserva` int(11) DEFAULT NULL,
  `id_tecnico` int(11) DEFAULT NULL,
  `id_auxiliar` int(11) DEFAULT NULL,
  `id_titular` int(11) DEFAULT NULL,
  `id_campeonato` int(11) DEFAULT NULL,
  `id_adversario` int(11) DEFAULT NULL,
  `id_estadio` int(11) DEFAULT NULL,
  `dt` date DEFAULT NULL,
  `placar` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `princ_evento`
--

CREATE TABLE `princ_evento` (
  `id_princ_evento` int(11) NOT NULL,
  `id_jogo` int(11) DEFAULT NULL,
  `tempo` time DEFAULT NULL,
  `ocorrido` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `reserva`
--

CREATE TABLE `reserva` (
  `id_reserva` int(11) NOT NULL,
  `id_jogador` int(11) DEFAULT NULL,
  `num_jogador` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `tecnico`
--

CREATE TABLE `tecnico` (
  `id_tecnico` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `tipo_arbitro`
--

CREATE TABLE `tipo_arbitro` (
  `id_tipo_arbitro` int(11) NOT NULL,
  `tipo` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Estrutura da tabela `titular`
--

CREATE TABLE `titular` (
  `id_titular` int(11) NOT NULL,
  `id_jogador` int(11) DEFAULT NULL,
  `num_jogador` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `adversario`
--
ALTER TABLE `adversario`
  ADD PRIMARY KEY (`id_adversario`);

--
-- Índices para tabela `arbitro`
--
ALTER TABLE `arbitro`
  ADD PRIMARY KEY (`id_arbitro`);

--
-- Índices para tabela `auxiliar`
--
ALTER TABLE `auxiliar`
  ADD PRIMARY KEY (`id_auxiliar`);

--
-- Índices para tabela `campeonato`
--
ALTER TABLE `campeonato`
  ADD PRIMARY KEY (`id_campeonato`);

--
-- Índices para tabela `cidade`
--
ALTER TABLE `cidade`
  ADD PRIMARY KEY (`id_cidade`),
  ADD KEY `uf_estado` (`uf_estado`);

--
-- Índices para tabela `equipe_arbitragem`
--
ALTER TABLE `equipe_arbitragem`
  ADD PRIMARY KEY (`id_equipe_arbitragem`),
  ADD KEY `id_arbitro` (`id_arbitro`),
  ADD KEY `id_tipo_arbitro` (`id_tipo_arbitro`),
  ADD KEY `id_jogo` (`id_jogo`);

--
-- Índices para tabela `estadio`
--
ALTER TABLE `estadio`
  ADD PRIMARY KEY (`id_estadio`),
  ADD KEY `id_cidade` (`id_cidade`);

--
-- Índices para tabela `estado`
--
ALTER TABLE `estado`
  ADD PRIMARY KEY (`uf_estado`);

--
-- Índices para tabela `hist_goleada`
--
ALTER TABLE `hist_goleada`
  ADD PRIMARY KEY (`id_hist_gloeada`),
  ADD KEY `id_adversario` (`id_adversario`),
  ADD KEY `id_jogo` (`id_jogo`);

--
-- Índices para tabela `jogador`
--
ALTER TABLE `jogador`
  ADD PRIMARY KEY (`id_jogador`);

--
-- Índices para tabela `jogo`
--
ALTER TABLE `jogo`
  ADD PRIMARY KEY (`id_jogo`),
  ADD KEY `id_reserva` (`id_reserva`),
  ADD KEY `id_tecnico` (`id_tecnico`),
  ADD KEY `id_auxiliar` (`id_auxiliar`),
  ADD KEY `id_titular` (`id_titular`),
  ADD KEY `id_campeonato` (`id_campeonato`),
  ADD KEY `id_adversario` (`id_adversario`),
  ADD KEY `id_estadio` (`id_estadio`);

--
-- Índices para tabela `princ_evento`
--
ALTER TABLE `princ_evento`
  ADD PRIMARY KEY (`id_princ_evento`),
  ADD KEY `id_jogo` (`id_jogo`);

--
-- Índices para tabela `reserva`
--
ALTER TABLE `reserva`
  ADD PRIMARY KEY (`id_reserva`),
  ADD KEY `id_jogador` (`id_jogador`);

--
-- Índices para tabela `tecnico`
--
ALTER TABLE `tecnico`
  ADD PRIMARY KEY (`id_tecnico`);

--
-- Índices para tabela `tipo_arbitro`
--
ALTER TABLE `tipo_arbitro`
  ADD PRIMARY KEY (`id_tipo_arbitro`);

--
-- Índices para tabela `titular`
--
ALTER TABLE `titular`
  ADD PRIMARY KEY (`id_titular`),
  ADD KEY `id_jogador` (`id_jogador`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `adversario`
--
ALTER TABLE `adversario`
  MODIFY `id_adversario` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `arbitro`
--
ALTER TABLE `arbitro`
  MODIFY `id_arbitro` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `auxiliar`
--
ALTER TABLE `auxiliar`
  MODIFY `id_auxiliar` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `campeonato`
--
ALTER TABLE `campeonato`
  MODIFY `id_campeonato` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `cidade`
--
ALTER TABLE `cidade`
  MODIFY `id_cidade` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `equipe_arbitragem`
--
ALTER TABLE `equipe_arbitragem`
  MODIFY `id_equipe_arbitragem` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `estadio`
--
ALTER TABLE `estadio`
  MODIFY `id_estadio` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `hist_goleada`
--
ALTER TABLE `hist_goleada`
  MODIFY `id_hist_gloeada` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `jogador`
--
ALTER TABLE `jogador`
  MODIFY `id_jogador` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `jogo`
--
ALTER TABLE `jogo`
  MODIFY `id_jogo` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `princ_evento`
--
ALTER TABLE `princ_evento`
  MODIFY `id_princ_evento` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `reserva`
--
ALTER TABLE `reserva`
  MODIFY `id_reserva` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `tecnico`
--
ALTER TABLE `tecnico`
  MODIFY `id_tecnico` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `tipo_arbitro`
--
ALTER TABLE `tipo_arbitro`
  MODIFY `id_tipo_arbitro` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `titular`
--
ALTER TABLE `titular`
  MODIFY `id_titular` int(11) NOT NULL AUTO_INCREMENT;

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `cidade`
--
ALTER TABLE `cidade`
  ADD CONSTRAINT `cidade_ibfk_1` FOREIGN KEY (`uf_estado`) REFERENCES `estado` (`uf_estado`);

--
-- Limitadores para a tabela `equipe_arbitragem`
--
ALTER TABLE `equipe_arbitragem`
  ADD CONSTRAINT `equipe_arbitragem_ibfk_1` FOREIGN KEY (`id_arbitro`) REFERENCES `arbitro` (`id_arbitro`),
  ADD CONSTRAINT `equipe_arbitragem_ibfk_2` FOREIGN KEY (`id_tipo_arbitro`) REFERENCES `tipo_arbitro` (`id_tipo_arbitro`),
  ADD CONSTRAINT `equipe_arbitragem_ibfk_3` FOREIGN KEY (`id_jogo`) REFERENCES `jogo` (`id_jogo`);

--
-- Limitadores para a tabela `estadio`
--
ALTER TABLE `estadio`
  ADD CONSTRAINT `estadio_ibfk_1` FOREIGN KEY (`id_cidade`) REFERENCES `cidade` (`id_cidade`);

--
-- Limitadores para a tabela `hist_goleada`
--
ALTER TABLE `hist_goleada`
  ADD CONSTRAINT `hist_goleada_ibfk_1` FOREIGN KEY (`id_adversario`) REFERENCES `adversario` (`id_adversario`),
  ADD CONSTRAINT `hist_goleada_ibfk_2` FOREIGN KEY (`id_jogo`) REFERENCES `jogo` (`id_jogo`);

--
-- Limitadores para a tabela `jogo`
--
ALTER TABLE `jogo`
  ADD CONSTRAINT `jogo_ibfk_1` FOREIGN KEY (`id_reserva`) REFERENCES `reserva` (`id_reserva`),
  ADD CONSTRAINT `jogo_ibfk_2` FOREIGN KEY (`id_tecnico`) REFERENCES `tecnico` (`id_tecnico`),
  ADD CONSTRAINT `jogo_ibfk_3` FOREIGN KEY (`id_auxiliar`) REFERENCES `auxiliar` (`id_auxiliar`),
  ADD CONSTRAINT `jogo_ibfk_4` FOREIGN KEY (`id_titular`) REFERENCES `titular` (`id_titular`),
  ADD CONSTRAINT `jogo_ibfk_5` FOREIGN KEY (`id_campeonato`) REFERENCES `campeonato` (`id_campeonato`),
  ADD CONSTRAINT `jogo_ibfk_6` FOREIGN KEY (`id_adversario`) REFERENCES `adversario` (`id_adversario`),
  ADD CONSTRAINT `jogo_ibfk_7` FOREIGN KEY (`id_estadio`) REFERENCES `estadio` (`id_estadio`);

--
-- Limitadores para a tabela `princ_evento`
--
ALTER TABLE `princ_evento`
  ADD CONSTRAINT `princ_evento_ibfk_1` FOREIGN KEY (`id_jogo`) REFERENCES `jogo` (`id_jogo`);

--
-- Limitadores para a tabela `reserva`
--
ALTER TABLE `reserva`
  ADD CONSTRAINT `reserva_ibfk_1` FOREIGN KEY (`id_jogador`) REFERENCES `jogador` (`id_jogador`);

--
-- Limitadores para a tabela `titular`
--
ALTER TABLE `titular`
  ADD CONSTRAINT `titular_ibfk_1` FOREIGN KEY (`id_jogador`) REFERENCES `jogador` (`id_jogador`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
