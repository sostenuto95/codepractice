let time = 0;
let wave = [];

let slider;


function setup(){
    createCanvas(600, 400);
    slider = createSlider(1, 100 ,1);
}

function draw() {
    background(0);
    translate(200, 200);

    let x = 0;
    let y = 0;


    for (let i = 0; i < slider.value(); i++){
        let prevx = x;
        let prevy = y;
        let n = i*2+1;   // Odd Number 
        let radius = 70 * (4 / (n * PI));    
        x += radius * cos(n * time); // X Coordinate over time
        y += radius * sin(n * time); // Y Coordinate over time 
        //wave.push(y);   // Add it to End of the Array
       
        

        stroke(255 , 100);
        noFill();
        ellipse(prevx, prevy, radius*2); // Expects a diameter , which radius is only half

        fill(255); 
        stroke(255);
        line(prevx , prevy, x, y); // Line from (0,0) to the Dot
        //ellipse(x, y, 8);



    }
    wave.unshift(y);  // Add it to Top of the Array [0]
    translate(150, 0); // Nudge to 
    line(x-150, y, 0, wave[0]); // Connecting Unit Circle with the wave Representation  

    beginShape();
    noFill();
    for(let i =0; i < wave.length; i++){
        vertex(i, wave[i]);  // The Heigh is follwoing y 
    }
    
    endShape();

    time += 0.05;

    if (wave.length >250 ){
        wave.pop(); // Delete 
    }



}