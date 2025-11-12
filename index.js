let newdiv = document.getElementById('new');

newdiv.addEventListener('click',function(){
    for (let index = 0; index < 240000000; index++) {
        let neel = document.createElement('div')
        console.log('fdjls');
        
    neel.classList.add('newb');
    newdiv.appendChild(neel)
        
    }
})