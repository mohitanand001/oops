

input_ = map(int, raw_input().split(','))
price_per_sandwich = int(raw_input())
total_sand = 0
soln = 0
for i in range(0, len(input_) - 1, 1):
	total_sand += (input_[i] - input_[i + 1])
	if(total_sand < 0):
		soln = max(soln, abs(total_sand) * price_per_sandwich)
        
        
print soln + input_[0] * price_per_sandwich

