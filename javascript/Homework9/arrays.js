var bookNames = new Array(
                "To Kill a Mockingbird", "Jaws", "Don Quixote",
                "Moby Dick","Northern Lights"
);

var bookDates = new Array(
                "July 11, 1960","February 1, 1974", "July 11, 1615",
                "October 18, 1851", "November 16, 1995"
);

function displayBooks() {
    output = "<ul>";
    for (var i = 0; i < bookNames.length; i++) {
            output += "<li>" + bookNames[i] +
            " - " + bookDates[i] + "</li>";
    }
    output += "</ul>";
    document.getElementById("unordered").innerHTML = output;
}

function sortedBooks() {
    output = "<ul>";
    for (var i = 0; i < bookNames.length; i++) { 
        var index = i;
        for (var j = i+1; j < bookNames.length-1; j++) {
            if (Date.parse(bookDates[j]) <  Date.parse(bookDates[index])) {
                index = j;
            }
        }
        if (index != i) {
            var temp = bookDates[i];
            bookDates[i] = bookDates[index];
            bookDates[index] = temp;
            var tempName = bookNames[i];
            bookNames[i] = bookNames[index];
            bookNames[index] = tempName;
        }
        output += "<li>" + bookNames[i] +
        " - " + bookDates[i] + "</li>";
    }
    document.getElementById("ordered").innerHTML = output;
}

function displayAllBooks(){
    displayBooks();
    sortedBooks();
}
window.onload = displayAllBooks();