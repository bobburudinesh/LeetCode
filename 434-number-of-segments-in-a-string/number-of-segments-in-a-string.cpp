class Solution {
public:
    int countSegments(string s) {
        int segs = 0;
        int seg_len = 0;
        //auto it = s.begin();
        // while(it < s.end()) {
        //     if(*it != ' ') {
        //         seg_len++;
                
        //     } else {
        //         if(seg_len > 0) {
        //             segs++;
        //             seg_len = 0;
        //         }
        //     }
        //     ++it;

        // }
        // if((it == s.end()) && seg_len > 0) {
        //     segs++;
        // }
        for (char c : s) {
            if(c != ' ') {
                seg_len++;
            } else {
                if(seg_len > 0) {
                    segs++;
                    seg_len = 0;
                }
            }
        }
        if(seg_len > 0) {
            segs++;
        }
        return segs;
    }
};