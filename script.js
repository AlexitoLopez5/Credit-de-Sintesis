function mostrarContenido(id) {
    var contenidos = document.getElementsByClassName("contenido");
    for (var i = 0; i < contenidos.length; i++) {
      contenidos[i].style.display = "none";
    }
  
    var contenido = document.getElementById(id);
    contenido.style.display = "block";
  }


  document.addEventListener('keydown', function(event) {
    if (event.code === 'ArrowLeft') {
      moveLeft();
    } else if (event.code === 'ArrowRight') {
      moveRight();
    }
  });
  
  function moveLeft() {
    var car = document.getElementById('car');
    var leftPosition = parseInt(window.getComputedStyle(car).getPropertyValue('left'));
    
    if (leftPosition > 0) {
      car.style.left = (leftPosition - 10) + 'px';
    }
  }
  
  function moveRight() {
    var car = document.getElementById('car');
    var leftPosition = parseInt(window.getComputedStyle(car).getPropertyValue('left'));
    
    if (leftPosition < (window.innerWidth - 50)) {
      car.style.left = (leftPosition + 10) + 'px';
    }
  }
  
  