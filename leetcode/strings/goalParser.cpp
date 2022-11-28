class Solution {
public:
    string interpret(string command) {
        string goalparser;
        for(int i=0;i<command.length()-1;i++){
            if(command[i]=='G'){
                goalparser.push_back(command[i]);
            }
            else if(command[i]=='(' && command[i+1]==')'){
                goalparser.push_back('o');
            }
            else{
                goalparser.append("al");
            }
        }
        return goalparser;
    }
};