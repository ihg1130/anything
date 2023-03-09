-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- 생성 시간: 22-12-05 05:10
-- 서버 버전: 10.4.25-MariaDB
-- PHP 버전: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- 데이터베이스: `lim`
--

-- --------------------------------------------------------

--
-- 테이블 구조 `member`
--

CREATE TABLE `member` (
  `userid` varchar(45) COLLATE utf8mb4_unicode_ci NOT NULL,
  `id` varchar(12) COLLATE utf8mb4_unicode_ci NOT NULL,
  `pw` varchar(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `pw_confirm` varchar(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `name` varchar(5) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `phone` varchar(11) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `email` varchar(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `type` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- 테이블의 덤프 데이터 `member`
--

INSERT INTO `member` (`userid`, `id`, `pw`, `pw_confirm`, `name`, `phone`, `email`, `type`) VALUES
('register', '333', '666', '444', '55', '01033114455', '00', '타투이스트 회원'),
('register', '333', '666', '444', '55', '01033114455', '00', '타투이스트 회원'),
('register', '333', '666', '444', '55', '01033114455', '00', '타투이스트 회원'),
('register', '111', '444', '222', '33', NULL, '99', '일반회원');

-- --------------------------------------------------------

--
-- 테이블 구조 `post`
--

CREATE TABLE `post` (
  `num` int(11) NOT NULL,
  `id` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `userid` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `name` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `title` varchar(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `content` varchar(300) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `p_date` datetime DEFAULT NULL,
  `image` varchar(100) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `address` varchar(100) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `genre` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `piece` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `subject` varchar(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- 테이블의 덤프 데이터 `post`
--

INSERT INTO `post` (`num`, `id`, `userid`, `name`, `title`, `content`, `p_date`, `image`, `address`, `genre`, `piece`, `subject`) VALUES
(1, '', 'post', '타투이스트_혜은', '감성 있는 나비', '어쩌구 저쩌구 했습니다.', '2022-12-03 16:13:41', 'xy12030713417.jpg', '서울', '수채화', '목', '맹수'),
(2, '', 'post', '타투이스트_시엔', '손가락 반지 타투', '손가락에 그냥 그렸습니다.', '2022-12-03 16:15:15', 'mj12030715156.jpg', '인천', '라인워크', '손목', '커플'),
(3, '', 'post', '타투이스트_화수', '가슴에 멋있는 호랑이', '간지가 납니다.', '2022-12-03 16:24:16', 'xs12030724169.jpg', '서울', '블랙워크', '가슴', '맹수'),
(4, '', 'post', '타투이스트_틴코', '옆구리에 뭔지 모를 레터링', '아무 글자나 했습니다.', '2022-12-03 16:29:45', 'er12030729454.jpg', '서울', '레터링', '옆구리', '없음'),
(5, '', 'post', '타투이스트_노잔디', '팔에 이쁜 드림캐쳐', '사진보고 그렸습니다.', '2022-12-03 16:35:09', 'cd12030735094.jpg', '부산', '라인워크', '팔', '나침반'),
(6, '', 'post', '타투이스트_스완', '가슴 아래 꽃들', '작업 할때 힘들었습니다.', '2022-12-03 16:41:36', 'mj12030741363.jpg', '서울', '라인워크', '가슴', '꽃');

-- --------------------------------------------------------

--
-- 테이블 구조 `review`
--

CREATE TABLE `review` (
  `num` int(11) NOT NULL,
  `id` varchar(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `userid` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `name` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `title` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `content` varchar(300) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `r_date` datetime DEFAULT NULL,
  `image` varchar(100) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `heart` int(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- 테이블의 덤프 데이터 `review`
--

INSERT INTO `review` (`num`, `id`, `userid`, `name`, `title`, `content`, `r_date`, `image`, `heart`) VALUES
(1, '333', 'review', '55', 'adsf', 'asdf', '2022-11-29 16:32:32', NULL, NULL),
(2, '333', 'review', '55', 'sa', 'asaa', '2022-11-29 16:33:21', NULL, NULL),
(3, '333', 'review', '55', 'zz', 'zzz', '2022-11-29 16:34:49', NULL, NULL),
(4, '333', 'review', '55', 'zz', 'zzz', '2022-11-29 16:36:49', NULL, NULL),
(5, '333', 'review', '55', 'asd', 'sdadas', '2022-11-29 16:37:15', NULL, NULL),
(6, '333', 'review', '55', 'sad', 'sad', '2022-11-29 16:38:00', NULL, NULL),
(7, '333', 'review', '55', 'sad', 'asdasddsa', '2022-11-29 16:52:36', 'ry11290752361.jpg', NULL),
(8, '333', 'review', '55', 'sad', 'asdasddsa', '2022-11-29 16:52:37', 'wg11290752374.jpg', NULL),
(9, '', 'review', '', 'asdf', 'adsffds', '2022-12-01 15:19:15', NULL, NULL),
(10, '', 'review', '', 'asd', 'asdsd', '2022-12-01 15:40:06', NULL, NULL),
(11, '', 'review', '', 'asd', 'asdasd', '2022-12-01 15:40:57', NULL, NULL),
(12, '', 'review', '', 'cvxcvxcv', 'xcvxcvxcv', '2022-12-01 15:42:07', NULL, NULL),
(13, '', 'review', '', 'df', 'sdfasdf', '2022-12-01 15:45:52', NULL, 1),
(14, '', 'review', '', 'ㅋㅌㅊㅋㅌㅊ', 'ㅋㅌㅊㅋㅌㅊㅋㅌㅊ', '2022-12-01 16:23:20', NULL, 1);

--
-- 덤프된 테이블의 인덱스
--

--
-- 테이블의 인덱스 `post`
--
ALTER TABLE `post`
  ADD PRIMARY KEY (`num`);

--
-- 테이블의 인덱스 `review`
--
ALTER TABLE `review`
  ADD PRIMARY KEY (`num`);

--
-- 덤프된 테이블의 AUTO_INCREMENT
--

--
-- 테이블의 AUTO_INCREMENT `post`
--
ALTER TABLE `post`
  MODIFY `num` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- 테이블의 AUTO_INCREMENT `review`
--
ALTER TABLE `review`
  MODIFY `num` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
