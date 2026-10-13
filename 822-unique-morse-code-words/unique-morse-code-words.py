class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
                 "....", "..", ".---", "-.-", ".-..", "--", "-.",
                 "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                 "...-", ".--", "-..-", "-.--", "--.."]

        un = set()

        for word in words:
            trn = ""

            for ch in word:
                trn += morse[ord(ch) - ord('a')]

            un.add(trn)

        return len(un)