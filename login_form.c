<!doctype html>
<html>
<title>Log in page </title>
<body>
<div class= "can">
<span class= "text1">Welcome to</span>
<span class= "text2">Nuel's Forum</span>
<input type="text" placeholder="username/email">
<input type="password" placeholder="password">
<input type="submit" placeholder="login">
</div>
</body>
</html>
<style type="text/css">
*{
margin: 0;
padding: 0;
font-family: courier;
}
body{
background: blue;
}
.can span{
color: white;
text-transform: uppercase;
font-weight: 500;
}
.can{
width: 300px;
padding: 40px;
border: none;
border-radius: 300px;
position: absolute;
top: 50%;
left: 50%;
transform: translate(-50%, -50%);
background: linear-gradient(black,blue);
text-align: center;
}
.can input[type="text"], .can input[type="password"]{
border: 0;
background: none;
display: block;
margin: 20px auto;
text-align: center;
border: 2px solid blue;
border-radius: 24px;
padding: 14px 10px;
width: 200px;
outline: none;
color: white;
transition: 1s;
}
.can input[type="text"]:focus, .can input[type="password"]:focus{
width: 280px;
border-color: green;
}
.can input[type="submit"]{
border: 0;
background: none;
display: block;
margin: 20px auto;
text-align: center;
border: 2px solid green;
border-radius: 24px;
padding: 14px 40px;
outline: none;
color: white;
transition: 1s;
}
.can input[type="submit"]:hover{
background: blue;
}
.text1{
letter-spacing: 8px;
margin-bottom: 20px;
font-size: 25px;
font-weight: 500;
transition: 0.25s;
animation: txt 10s infinite;
color: white;
position: relative;
background: none;
}
.text2{
font-size: 20px;
}
@keyframes txt{
0%{
color: white;
margin-bottom: -50px;
}
25%{
color: blue;
letter-spacing: 10px;
margin-bottom: -50px;
}
50%{
color: orange;
letter-spacing: 8px;
margin-bottom: -50px;
}
75%{
color: red;
letter-spacing: 8px;
margin-bottom: -50px;
}
}
</style>
