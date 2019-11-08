#include <stdio.h>
#include <cjson/cJSON.h>
#include <stdlib.h>
#include<string.h>

int main() {


    char *path = "./data/users.json";

    FILE *file = fopen(path, "rb");

    // 获取文件长度
    fseek(file, 0, SEEK_END);
    long length = ftell(file);

    // 分配一个文件内容的长度的内存
    char *jsonStr = (char *) malloc(length * sizeof(char));

    rewind(file);

    fread(jsonStr, sizeof(char), length, file);

    fclose(file);

    printf("%s\n", jsonStr);

    cJSON *json = cJSON_Parse(jsonStr);

    printf("%d\n", cJSON_IsArray(json));

    cJSON *one;
    cJSON_ArrayForEach(one, json) {
        cJSON *name = cJSON_GetObjectItemCaseSensitive(one, "name");
        cJSON *age = cJSON_GetObjectItemCaseSensitive(one, "age");

        printf("name=%s ", name->valuestring);
        printf("age=%d\n", age->valueint);
    }

    // 数组里面追加一个jerry，  age= 18， gender = 0， address= American
    // 再写到文件里面

    cJSON *item=cJSON_CreateObject();
    cJSON_AddStringToObject(item, "name", "jerry");
    cJSON_AddStringToObject(item, "age", "18");
    cJSON_AddStringToObject(item, "gender", "0");
    cJSON_AddStringToObject(item, "address", "American");
    cJSON_AddItemToArray(json,item);
    printf("%s\n",cJSON_Print(json));
    file=fopen("./data/user_re.json","wb");
    fwrite(item,sizeof(char), strlen(file),file);
    fclose(file);

    // 把文件内容一次性读取到内存中作为字符串

    // 转换成json
//
    cJSON *user = cJSON_CreateObject();

    cJSON_AddStringToObject(user, "userName", "张三");
    printf("isarray=%d\n", cJSON_IsArray(user));

    char *userStr = cJSON_Print(user);
    printf("%s", userStr);
    return 0;
}