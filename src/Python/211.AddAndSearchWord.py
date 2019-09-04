class WordDictionary:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        from collections import defaultdict
        self.lookup = {}
        

    def addWord(self, word: str) -> None:
        """
        Adds a word into the data structure.
        """
        tree = self.lookup
        for a in word:
            tree = tree.setdefault(a, {})
        tree["#"] = {}
        

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter.
        """
        
        def helper(word, tree):
            if not word:
                if "#" in tree:
                    return True
                return False
            if word[0] == ".":
                for t in tree:
                    if helper(word[1:], tree[t]):
                        return True
            elif word[0] in tree:
                if helper(word[1:], tree[word[0]]):
                    return True
            return False
        return helper(word, self.lookup)

