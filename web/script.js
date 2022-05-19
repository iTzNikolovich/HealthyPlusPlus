function bmi(){
    var cm = document.getElementById("height").value;
    var kg = document.getElementById("weight").value;
    m = +cm/100;
    bmi = Math.round(+kg / (m*m));
    if(bmi < 16.5 ){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "You're extremely underweight." ;
    }
    if(bmi >= 16.5 && bmi <= 18.4){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "You're underweight." ;
    }
    if(bmi >= 18.5 && bmi <= 24.9){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "Your weight is normal." ;
    }
    if(bmi >= 25 && bmi <= 30){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "You're overweight." ;
    }
    if(bmi >= 30.01 && bmi <= 34.9){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "First degree obesity." ;
    }
    if(bmi >= 35 && bmi <= 40){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "Second degree obesity." ;
    }
    if(bmi > 40){
        document.getElementById("result").innerHTML = "BMI: " + bmi + " kg/m2: " + "Third degree obesity." ;
    }
}

function fatmass(){
    var cm = document.getElementById("height").value;
    var neck = document.getElementById("neck").value;
    var abdominal = document.getElementById("abdominal").value;
    var hips = document.getElementById("hips").value;
    if(document.getElementById("gender").value == "male"){
        fm =  Math.round(495/(1.0324 - 0.19077*(Math.log(+abdominal - +neck)/2.30258509299404) + 0.15456*(Math.log(+cm)/2.30258509299404)) - 450);
    }
    if(document.getElementById("gender").value == "female"){
        fm =  Math.round(495/(1.29579 - 0.35004*(Math.log(+abdominal + +hips - +neck)/2.30258509299404) + 0.22100*(Math.log(+cm)/2.30258509299404) ) - 450);
    }
    document.getElementById("result").innerHTML = "Your Fat Mass is: " + fm + "%";
}

function idealweight(){
    var cm = document.getElementById("height").value;
    if(document.getElementById("gender").value == "male"){
        iw = +cm - 100 - (+cm - 150) / 4;
    }
    if(document.getElementById("gender").value == "female"){
        iw = +cm - 100 - (+cm - 150) / 2;
    }
    document.getElementById("result").innerHTML = "Your Ideal Weight is: " + iw + "kg";
}