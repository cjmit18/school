// Hard coded phrase and category
const secretPhrase = "JAVASCRIPT ROCKS";
const categoryText = "Programming phrase";

let displayedPhrase = "";
let attemptsLeft = 10;
let guessedLetters = [];
let gameOver = false;
let finalAttemptUsed = false;

// Cache DOM elements
const welcomeEl = document.getElementById("welcome");
const datetimeEl = document.getElementById("datetime");
const categoryEl = document.getElementById("category");
const puzzleEl = document.getElementById("puzzle");
const guessedLettersEl = document.getElementById("guessed-letters");
const attemptsRemainingEl = document.getElementById("attempts-remaining");
const messageEl = document.getElementById("message");
const guessInputEl = document.getElementById("guess-input");
const guessButtonEl = document.getElementById("guess-button");

// Initialize game when script loads
initGame();

function initGame() {
    // Prompt for player name
    const playerName = prompt("Welcome to Wheel of Fortune! What is your name?");
    const safeName = playerName && playerName.trim() !== "" ? playerName.trim() : "Player";

    welcomeEl.innerHTML = "Welcome, " + safeName + ", to Wheel of Fortune!";

    // Display current date and time
    const now = new Date();
    datetimeEl.innerHTML = "Current date and time: " + now.toLocaleString();

    // Category and initial puzzle display
    categoryEl.innerHTML = categoryText;

    // Build initial display with dashes for letters and spaces preserved
    displayedPhrase = buildInitialDisplay(secretPhrase);
    puzzleEl.innerHTML = displayedPhrase;

    attemptsRemainingEl.innerHTML = attemptsLeft.toString();

    // Attach event listener
    guessButtonEl.addEventListener("click", handleGuess);
    guessInputEl.addEventListener("keyup", function (event) {
        if (event.key === "Enter") {
            handleGuess();
        }
    });
}

function buildInitialDisplay(phrase) {
    let result = "";
    for (let ch of phrase) {
        if (ch === " ") {
            result += " ";
        } else {
            result += "-";
        }
    }
    return result;
}

function handleGuess() {
    if (gameOver) {
        return;
    }

    const rawInput = guessInputEl.value.trim();
    guessInputEl.value = "";

    if (rawInput === "") {
        messageEl.innerHTML = "Please enter a letter or a phrase.";
        return;
    }

    const guess = rawInput.toUpperCase();

    // If input length is 1, treat it as a letter guess
    if (guess.length === 1) {
        handleLetterGuess(guess);
    } else {
        // More than 1 character means user is trying to solve
        handlePhraseGuess(guess);
    }
}

function handleLetterGuess(letter) {
    if (!letter.match(/[A-Z]/)) {
        messageEl.innerHTML = "Please enter a valid letter.";
        return;
    }

    if (guessedLetters.includes(letter)) {
        messageEl.innerHTML = "You already guessed the letter " + letter + ".";
        return;
    }

    if (attemptsLeft <= 0) {
        messageEl.innerHTML = "You have no letter attempts left.";
        return;
    }

    guessedLetters.push(letter);
    updateGuessedLettersDisplay();

    attemptsLeft -= 1;
    attemptsRemainingEl.innerHTML = attemptsLeft.toString();

    if (secretPhrase.includes(letter)) {
        displayedPhrase = revealLetters(secretPhrase, displayedPhrase, letter);
        puzzleEl.innerHTML = displayedPhrase;
        messageEl.innerHTML = "Good guess! The letter " + letter + " is in the phrase.";

        if (displayedPhrase === secretPhrase) {
            messageEl.innerHTML = "Congratulations! You solved the phrase: " + secretPhrase;
            endGame();
            return;
        }
    } else {
        messageEl.innerHTML = "Sorry, the letter " + letter + " is not in the phrase.";
    }

    // After 10 letter attempts, give one final attempt to solve
    if (attemptsLeft === 0 && !finalAttemptUsed && displayedPhrase !== secretPhrase) {
        finalAttemptUsed = true;
        finalSolveAttempt();
    }
}

function handlePhraseGuess(guessPhrase) {
    if (guessPhrase === secretPhrase) {
        messageEl.innerHTML = "Amazing! You solved the phrase: " + secretPhrase;
        puzzleEl.innerHTML = secretPhrase;
        endGame();
    } else {
        messageEl.innerHTML = "Incorrect solution. Game over. The correct phrase was: " + secretPhrase;
        puzzleEl.innerHTML = secretPhrase;
        endGame();
    }
}

function finalSolveAttempt() {
    const finalGuess = prompt(
        "This is your final attempt. Enter a letter or the complete phrase:"
    );

    if (finalGuess === null) {
        messageEl.innerHTML =
            "You skipped your final attempt. Game over. The phrase was: " + secretPhrase;
        puzzleEl.innerHTML = secretPhrase;
        endGame();
        return;
    }

    const cleaned = finalGuess.trim().toUpperCase();

    // Check if it's a single letter guess
    if (cleaned.length === 1 && cleaned.match(/[A-Z]/)) {
        if (secretPhrase.includes(cleaned)) {
            displayedPhrase = revealLetters(secretPhrase, displayedPhrase, cleaned);
            puzzleEl.innerHTML = displayedPhrase;
            
            if (displayedPhrase === secretPhrase) {
                messageEl.innerHTML = "Great job! You solved the phrase: " + secretPhrase;
            } else {
                messageEl.innerHTML = "The letter " + cleaned + " is in the phrase, but you didn't solve it. The phrase was: " + secretPhrase;
                puzzleEl.innerHTML = secretPhrase;
            }
        } else {
            messageEl.innerHTML = "The letter " + cleaned + " is not in the phrase. Game over. The phrase was: " + secretPhrase;
            puzzleEl.innerHTML = secretPhrase;
        }
    } else {
        // Treat as full phrase guess
        if (cleaned === secretPhrase) {
            messageEl.innerHTML = "Great job! You solved the phrase: " + secretPhrase;
            puzzleEl.innerHTML = secretPhrase;
        } else {
            messageEl.innerHTML =
                "That was not correct. Game over. The phrase was: " + secretPhrase;
            puzzleEl.innerHTML = secretPhrase;
        }
    }

    endGame();
}

function revealLetters(phrase, currentDisplay, letter) {
    let result = "";
    for (let i = 0; i < phrase.length; i++) {
        if (phrase[i] === letter) {
            result += letter;
        } else {
            result += currentDisplay[i];
        }
    }
    return result;
}

function updateGuessedLettersDisplay() {
    if (guessedLetters.length === 0) {
        guessedLettersEl.innerHTML = "None";
    } else {
        guessedLettersEl.innerHTML = guessedLetters.join(", ");
    }
}

function endGame() {
    gameOver = true;
    guessButtonEl.disabled = true;
    guessInputEl.disabled = true;
}
