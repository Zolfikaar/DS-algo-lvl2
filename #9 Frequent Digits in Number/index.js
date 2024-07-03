const FrequentDigitsInNumber = (arr) => {
  const counts = {};

  for (const item of arr) {
    if (counts[item]) {
      counts[item]++;
    } else {
      counts[item] = 1;
    }
  }

  return counts;
};

const printFrequency = (counts) => {
  for (const digit in counts) {
    console.log(`Digit ${digit} Frequency is ${counts[digit]} Time(s)`);
  }
};

const array = [1, 2, 2, 3, 4, 4, 5];
const counts = FrequentDigitsInNumber(array);
printFrequency(counts);
