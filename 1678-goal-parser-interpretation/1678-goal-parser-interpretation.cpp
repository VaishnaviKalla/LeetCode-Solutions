class Solution {
public:
    string interpret(string command) {
        string str;

        for(int i=0; i< command.size(); ){
            if(command[i] == 'G'){
                str+= 'G';
                i++;
            }

            else if(command[i+1]==')'){
                str += 'o';
                i+=2;
            }
            else{
                str += "al";
                i += 4;
            }

        }
        return str;
    }
};