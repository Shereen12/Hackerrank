string happyLadybugs(string b) {
    
    int arr[205] = {0};
    int dash = 0;
    for(int i = 0 ; i < b.size(); i++){
        if(b[i] == '_'){
            dash += 1;
        }
        else{
            arr[b[i]] += 1;
        }
    }
    
    for(int i = 1; i < 205 ;i++){
        if(arr[i] > 0 && arr[i] < 2){
            return "NO";
        }
    }
    
    if(!dash){
        for(int i = 0 ; i < b.size(); i++){
            if(i > 0 && i < b.size() - 1; i++){
                if(b[i] != b[i - 1] && b[i] != b[i + 1])
                    return "NO";
            }
        }
        return "YES";
    }
    
    return "YES";
}
