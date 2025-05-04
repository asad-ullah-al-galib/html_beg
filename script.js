const formContainer = document.querySelector('.form-container');

formContainer.addEventListener("submit", function (e) {
    e.preventDefault(); // Prevent actual form submission

    // console.log(e.target.elements.name.value);

    const name = document.getElementById("name").value;
    console.log(name)

    document.getElementById("asad").innerText = name;
});


const emailInput = document.getElementById("email");

emailInput.onchange = function () {
    document.getElementById("asad").innerText = emailInput.value;
};