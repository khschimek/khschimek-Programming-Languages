//ChatGPT gave me this
#include <iostream>
#include <ocaml/ocaml.h>

extern "C" {
#include <caml/mlvalues.h>
#include <caml/callback.h>
}

int main() {
    // Initialize the OCaml runtime
    caml_startup(nullptr);

    // Call an OCaml function
    value result = caml_callback(*caml_named_value("my_ocaml_function"), Val_unit);

    // Convert the OCaml result to a C++ value if needed

    // Print the result
    std::cout << "OCaml result: " << Int_val(result) << std::endl;

    // Clean up the OCaml runtime
    caml_shutdown();

    return 0;
}
