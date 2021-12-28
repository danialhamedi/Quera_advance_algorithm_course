const [n,k] = readline().split(' ').map(el => parseInt(el));
const a = readline().split(' ').map(el => parseInt(el));

let val = 1000 * 1000 * 1000;

for(let x = -100000; x < 100000; x++) {
	let t = 0;
	for(let i = 0; i < n; i++) {
		t += Math.abs((x + i * k) - a[i]);
	}
	val = Math.min(val, t);
}

console.log(val);
