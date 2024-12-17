function changeLanguage(){
    var language = document.getElementById("language").innerText; 
    switch(language){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            console.error(`${language.toString()} is not a supported language`);
    }
}