/*

PROBLEM STATEMENT :

SAMPLE INPUT  :
SAMPLE OUTPUT :

*/
#include<iostream>
#include<string>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
    }
};

class Trie {

    public :
        TrieNode* root;

        Trie() {
            root = new TrieNode();
        }

        void insert(string word) {
            TrieNode* node = root;
            for (int i = 0; i < word.length(); i++) {
                int index = word[i] - 'a';
                if (node->children[index] == NULL) {
                    node->children[index] = new TrieNode();
                }
                node = node->children[index];
            }
            node->isEndOfWord = true;
        }

        bool search(string word) {
            TrieNode* node = root;
            for (int i = 0; i < word.length(); i++) {
                int index = word[i] - 'a';
                if (node->children[index] == NULL) {
                    return false;
                }
                node = node->children[index];
            }
            return node->isEndOfWord;
        }

        bool startsWith(string prefix) {
            TrieNode* node = root;
            for (int i = 0; i < prefix.length(); i++) {
                int index = prefix[i] - 'a';
                if (node->children[index] == NULL) {
                    return false;
                }
                node = node->children[index];
            }
            return true;
        }

        bool isEmpty() {
            for (int i = 0; i < 26; i++) {
                if (root->children[i] != NULL) {
                    return false;
                }
            }
            return true;
        }

};

int main() {

    Trie t;

    t.insert("hello");
    t.insert("hey");
    t.insert("world");

    if (t.search("hello")) {
        cout << "\"hello\" is Present mere dost " << endl;
    }
    else {
        cout << "\"hello\" is Not Present mere dost " << endl;
    }

    if (t.search("hell")) {
        cout << "\"hell\" is Present mere dost " << endl;
    }
    else {
        cout << "\"hell\" is Not Present mere dost " << endl;
    }

    if (t.startsWith("hel")) {
        cout << "Prefix \"hel\" exists mere dost " << endl;
    }
    else {
        cout << "Prefix \"hel\" does not exist mere dost " << endl;
    }

    if (t.isEmpty()) {
        cout << "Trie is Empty mere dost " << endl;
    }
    else {
        cout << "Trie is not Empty mere dost " << endl;
    }

    return 0;
}
