var used;

function replaceList(input){
    
    if (used){
        return;
    }
    if (!["1","2","3"].includes(input)) {
        return;
    }

    const userChoice = {
        "1": "first",
        "2": "second",
        "3": "third"
    };

    var translate = userChoice[input];
    var oldItem = document.getElementById(translate)
    var newNode = createNewNode()
    var listNode = oldItem.parentNode;

    listNode.replaceChild(newNode,oldItem);
    
    used = true;

    return;
}

function createNewNode(){

    var newNode = document.createElement('li');
    var newItem = (prompt("What item would you like to bring with you?"))

    newNode.append(newItem);

    return newNode;
}

