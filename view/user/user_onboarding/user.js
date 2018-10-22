function random_genertor()
{
    var a = Math.floor(100000 + Math.random() * 900000)
    a = a.toString().substring(0, 4);
    a =  parseInt(a);
    document.getElementById("test_id").innerHTML = "2468";
}
