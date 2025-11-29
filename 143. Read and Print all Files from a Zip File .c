#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

int main(int c,char **v){
    if(c!=2) return 1;
    zip_t *z=zip_open(v[1],0,NULL); if(!z) return 1;
    for(zip_int64_t i=0,n=zip_get_num_entries(z,0);i<n;i++){
        struct zip_stat st; zip_stat_index(z,i,0,&st); printf("%s\n",st.name);
        if(zip_file_t *f=zip_fopen_index(z,i,0)){
            char *b=malloc(st.size+1); zip_fread(f,b,st.size); b[st.size]=0;
            printf("%s\n",b); free(b); zip_fclose(f);
        }
    }
    zip_close(z);
return 0;
}
