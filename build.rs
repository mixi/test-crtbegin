extern crate cc;

fn main() {
    cc::Build::new()
        .cpp(true)
        .cpp_link_stdlib(None)
        .file("src/test.cpp")
        .compile("test");
}
