
class TrieNode:
    def __init__(self):    
        self.__R = 26
        self.__links = [None] * self.__R
        self.__isEnd = False
    
    def containsKey(self, ch):
        return self.__links[ord(ch) - ord('a')] is not None
    

    def get(self, ch):
        return self.__links[ord(ch) - ord('a')]


    def put(self, ch, node):
        self.__links[ord(ch) - ord('a')] = node


    def setEnd(self):
        self.__isEnd = True


    def isEnd(self):
        return self.__isEnd


class Trie:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root = TrieNode()
        

    def insert(self, word):
        """
        Inserts a word into the trie.
        """
        node = self.root
        for c in word:
            if node.containsKey(c) == False:
                node.put(c, TrieNode())
            node = node.get(c)
        node.setEnd()
        

    def __searchPrefix(self, word):
        node = self.root
        for c in word:
            if node.containsKey(c) == True:
                node = node.get(c)
            else:
                return None
        return node


    def search(self, word):
        """
        Returns if the word is in the trie.
        """
        node = self.__searchPrefix(word)
        return node is not None and node.isEnd()
        

    def startsWith(self, prefix):
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        node = self.__searchPrefix(prefix)
        return node is not None


if __name__ == "__main__":
    obj = Trie()
    word = 'dugu'
    prefix = 'dugulala'
    obj.insert(word)
    print(obj.search(word))
    print(obj.startsWith(prefix))

