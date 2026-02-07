**Measures of Position** which describe the relative position of a certain data value within the entire set of data.

**Z-Score** represents the distance that a data value is from the mean in terms of number of standard deviations. We find it by subtracting the mean from the data value and dividing this result by the standard deviation.

**Population Z-Score**: $Z = \frac{x-\mu}{\sigma}$
**Sample z-Score** $z = \frac{x-\bar{x}}{s}$
The z-Score is unitless. It has a mean - and a standard deviation of 1

---
The **Kth percentile**, denoted Pk, of a set of data is a value such that k percent of the observations are less than or equal to the value.

**Quartiles** separate datasets into fourths.
- 2nd quartile (50%) = median 

**The Interquartile Range (IQR)** is the range of the middle 50% of the observations in a data set. That is the IQR is the difference between thee first and third quartiles and is found using this formula"
$IQR = Q3 - Q1$

![[221ab677bd4fc5da8ea217cae8c122eb.avif]]

---
When analyzing data we must check for extreme observations, called outliers. Outliers can occur by chance, because of errors in the measurement of a variable, during data entry, or from errors in sampling.

Outliers distort the means and standard deviations because they are not resistant.

## Checking for Outliers by Using Quartiles

**Step 1.** Determine the first and third quartiles of the data.

**Step 2.** Compute the interquartile range.

**Step 3.** Determine the fences. **Fences** serve as cutoff points for determining outliers.
- $Lower Fence = Q1 - 1.5(IQR)$
- Upper Fence = Q3 + 1.5(IQR)$

**Step 4.** If a data value is less than the lower fence or greater than the upper fence, it is considered an outlier.