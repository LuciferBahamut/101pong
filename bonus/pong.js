var xBall = Math.floor(Math.random() * 300) + 50;
var yBall = 50;
var x_speed = (2, 7);
var y_speed = 2;
var score = 0;
var bscore = 0;
var paddle_length = 45;

function setup() {
  createCanvas(400, 400);
  x_speed = random(-7, 7);
  y_speed = 2;
  
}

//Background

function draw() {

  background(0);
  
  fill('#ffffff');
  rectMode(CENTER)
  rect(mouseX, 380, paddle_length * 2, 15);

  ball_movement();
  display_game();
  bounce();
  regulation();
  reset_score();
  paddle_movement();

  fill('#d9c3f7');
  textSize(12);
  text("Actual Score: " + score, 5, 15);
  text("Best Score: " + bscore, 5, 25)
}

function ball_movement() {
  xBall += x_speed;
  yBall += y_speed;
}


function bounce() {

  if (xBall < 10 ||
    xBall > 400 - 10) {
    x_speed *= -1;
  }
  if (yBall < 10 ||
    yBall > 400 - 10) {
    y_speed *= -1;
  }
}

function reset_score() {
  if (yBall >= 400 ||
    yBall > 400 - 10) {
    yBall = 50;
    xBall = Math.floor(Math.random() * 300) + 50;
    score = 0;
    ySpeed = 2;
 }

}

function display_game() {
  fill('#d9c3f7');
  ellipse(xBall, yBall, 20, 20);
}

function regulation() {
  if (x_speed > 10) {
    x_speed = 10;
}
  if (y_speed > 10) {
    y_speed = 10;
    paddle_length -= 0,5;
  }
  if (xBall > 400) {
    
  }
}

function paddle_movement() {
  if ((xBall > mouseX - paddle_length &&
      xBall < mouseX + paddle_length) &&
    (yBall >= 370)) {
    y_speed *= -1,2;
    score++;
    if (score >= bscore) {
      bscore = score;
    }

  }
}
}
