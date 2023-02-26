// Get the current date and time
const today = new Date();

// Select the element to display the date and time
const dateTime = document.querySelector('#date-time');

// Update the text of the element with the current date and time
dateTime.textContent = today.toLocaleString();
