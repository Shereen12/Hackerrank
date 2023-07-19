bool exists(vector<string>G, vector<string> P){
    int a, b, row = -1;
    bool equal = true;

    for(int i = 0 ; i < G.size(); i++){
        row = -1;
        for(int j = 0 ; j < G[i].size(); j++){
            int k;
            bool found = true;
            int m = j;
            for(k = 0; k < P[0].size(); k++){
                if(P[0][k] != G[i][m]){
                    found = false;
                    break;
                }
                m += 1;
            }
            if(found != false){
                a = m - P[0].size();
                b = m - 1;
                row = i;
                if(row == G.size() - 1){
                    return true;
                }
                
                if(row != -1){
                    equal = true;
                    int m = 1;
                    for(int t = row + 1; t < G.size(); t++){
                        int k = 0;
                        
                        for(int j = a ; j <= b ; j++){
                            cout << G[t][j] << "   " << P[m][k] << endl;
                            if(G[t][j] != P[m][k]){
                                    equal = false;
                                    break;
                                }
                            k += 1;
                        }
                        if(equal == false){
                            break;
                        }
                        m += 1; 
                        if(m == P.size())   
                            break;
                    }
                    if(equal){
                    return true;
                    }
                }
            }
        }
        
        
    }
    
    return false;
}
