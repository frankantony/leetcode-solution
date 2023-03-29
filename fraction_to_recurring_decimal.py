class Solution:
    def fractionToDecimal(self, numerator, denominator):
        if numerator == 0:
            return "0"
        signal = ""
        if (numerator // denominator < 0):
            signal = "-"
        numerator = abs(numerator)
        denominator = abs (denominator)
        rest = numerator % denominator
        quotient = numerator // denominator

        integer = str (quotient)
        if rest == 0:
            return signal + integer

        frac = ""
        table = {}
        while rest != 0:
            if rest in table:
                index = table[rest]
                frac = frac[:index] + '(' + frac[index:] + ')'
                break
            
            table[rest] = len(frac)
            rest = rest * 10
            frac = frac + str (rest // denominator)
            rest = rest % denominator
        
        return signal + integer + "." + frac
        
