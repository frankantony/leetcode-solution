class Solution:    
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        def intToBinary32Bits (n):
            binary = ""
            cont = 0
            while (n):
                number = chr((n % 2) + 48)
                print (number)
                binary = binary + number
                n = n / 2
                cont = cont + 1
                
            zeroes = ""
            cont = 32 - cont
            for i in range(cont):
                zeroes = zeroes + '0'
            
            binary = zeroes + binary[::-1]
            binary = binary[::-1]

            return binary

        str = intToBinary32Bits (n)
        result = 0
        pot = 1
        i = 31
        while i >= 0:
            value = (ord(str[i]) - 48) * pot
            result = result + value
            pot = pot * 2
            i = i - 1

        return result;
