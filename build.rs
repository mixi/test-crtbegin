extern crate cc;

fn main() {
    cc::Build::new()
        .cpp(true)
        .cpp_link_stdlib("static=stdc++")
        .file("src/test.cpp")
        .compile("test");
}
