// JSUI 

mgraaphics.init();
mgraphics.relative_coords = 0; // Left top corner 
mgraphics.autofill = 0;


var mousePos = []; // Empty array 
var JSUIsize = [box.rect[2]-box.rect[0],box.rect[3]-box.rect[1]];
 //[2]-[0] is Top right - top left | [3]-[1] is Bot Right-Bot Left  

// function called by the object to draw the window 
function paint()
{
    var squareSize = 40;
    mgraphics.set_source_rgba(1,0,0,1);
    mgraphics.rectangle(mousePos[0]-squareSize/2 ,mousePos[1]-squareSize,
                         squareSize,squareSize);
    mgraphics.fill();
}

function ondrag(x,y) //epsilon coordinates of the mouse on the window 
{
    mousePos = [x,y];
    mgraphics.redraw(); //Every time mouse in rectangle it will call paint()


    var x = mousePos[0]/JSUIsize[0];
    var y = mousePos[1]/JSUIsize[1];

    outlet(0,[x,y]);
}
