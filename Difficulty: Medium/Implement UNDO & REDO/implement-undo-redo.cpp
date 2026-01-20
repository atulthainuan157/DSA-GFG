class Solution {
  public:
  string doc="";
  stack<char>undoStack;
  stack<char>redoStack;
    void append(char x) {
        // append x into document
        doc.push_back(x);
        undoStack.push(x);
        
        while(!redoStack.empty()) {
            redoStack.pop();
        }
    }

    void undo() {
        // undo last change
        if(doc.empty()) {
            return;
        }
        char last = doc.back();
        doc.pop_back();
        
        undoStack.pop();
        redoStack.push(last);
    }

    void redo() {
        // redo changes
        if(redoStack.empty()) {
            return;
        }
        char ch = redoStack.top();
        redoStack.pop();
        doc.push_back(ch);
        undoStack.push(ch);
    }

    string read() {
        // read the document
        return doc;
    }
};