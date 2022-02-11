use std::env;
use std::io::{self, BufRead};
use std::fs::OpenOptions;
use std::io::Write;

fn main() {
	let stdin = io::stdin();

	let args: Vec<String> = env::args().collect();
	let mut filename="mail.txt";
	if args.len()>1 {
		filename = &args[1];
	}
	let mut file = OpenOptions::new().create(true).append(true).open(filename).expect("cannot open file");
	for line in stdin.lock().lines() {
		let line = line.expect("Could not read line from standard in");
		file.write_all(line.as_bytes()).expect("write failed");
		file.write_all("\n".as_bytes()).expect("write failed");
	}
}
