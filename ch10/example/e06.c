#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * 判断字符串是否是空字符串
 * @param cp
 * @return 1 空字符串， 0 非空字符串
 */
int isEmpty(char *cp) {
    if (*cp == '\0') {
        return 1;
    } else {
        return 0;
    }
}

/**
 *  返回指定位置的字符
 * @param index
 * @return 0 如果index不合法或超出范围
 */
char charAt(char *cp, int index) {

    if (!isEmpty(&(*(cp + index)))) {

        return *(cp + index);
    } else {
        return 0;
    }
}


/**
 * 返回指定字符在此字符串中第一次出现处的下标
 * @param target 从该字符串中查找
 * @param check 查找的字符串
 * @return -1 如果没有找到，如果找到返回第一个字符的位置
 */
int indexOf(char *target, char *check) {
    int len = strlen(target);

    for (int i = 0 ; i < len ; i++) {
        if (*(target + i) == *check) {
            return i;
        }
    }

    return -1;
}

/**
 * 返回指定字符在此字符串中第一次出现处的下标，从末尾处开始反向查找
 * @param target 从该字符串中查找
 * @param check 查找的字符串
 * @return -1 如果没有找到
 */
int lastIndexOf(char *target, char *check) {
    int len = strlen(target);

    for (int i = len - 1 ; i >= 0 ; i--) {
        if (*(target + i) == *check) {
            return i;
        }
    }

    return -1;
}

/**
 * 判断两个字符串是否相等
 * @param str1
 * @param str2
 * @return 1 相等， 0 不相等（长度相等，内容相等）
 */
int equals(char *str1, char *str2) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    if (length1 == length2) {
        for (int i = 0 ; i < length1 ; i++) {
            if (*(str1 + i) != *(str2 + i)) {
                return 0;
            }
        }

        return 1;
    } else {
        return 0;
    }
}

/**
 * 将目标字符串中包含的字符串替换为另一个字符串
 * @param target
 * @param old 要被替换掉的字符串
 * @param new 替换后的字符串
 * @return
 */
/*char *replace(char *target, char *old, char *new) {
    int lengthT = strlen(target);
    int lengthO = strlen(old);
    int lengthN = strlen(new);
    int count = 0;
    int index = 0;

    for (int j = 0 ; j < lengthT ; j++) {
        if (*old == *(target + j)) {
            for (int i = 0 ; i < lengthO ; i++) {
                if (*(old + i) = *(target + j + i)) {
                    count++;
                }
            }
            if(count++ == lengthO){
	            for(int i =0 ; i<lengthO ; i++){
	            	*(target + j + i) =	*(target + j + i +1);
	            }
            }

        } else if ()
        }

}

*/


/**
 * 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
 * @param str1
 * @param str2
 * @return >0 的数str1大，<0 str1小，=0 两字符串相等
 */
int compare(char *str1, char *str2);

/**
 * 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
 * 比较的时候忽略大小写，'a'和'A'认为是相等
 * @param str1
 * @param str2
 * @return >0 的数str1大，<0 str1小，=0 两字符串相等
 */
int compareIgnoreCase(char *str1, char *str2);

/**
 * 将double类型数字转换成字符串
 * @param target
 * @param d
 */
void doubleToStr(char *target, double d){
    gcvt(d,10,target);
}

/**
 * 将传入字符串从指定位置切割，将分割后的字符串返回
 * @param cp
 * @param from 起始位置
 * @param end 结束位置
 * @return 返回起始位置到结束位置的字符串（将分割后的内容保存到cp中返回）
 */
char *subString(char *cp, int from, int end){
    *(cp+end) = '\0';
    for(int i = 0 ; i<end-from ;i++)
        *(cp+i) = *(cp + from+i+1);
    return cp;

}

/**
 * 根据传入的字符串，将目标字符串分割，返回分割后的第一部分
 * 如果没有找到，直接返回原始字符串
 * @param target
 * @param split
 */
char *splitFirst(char *target, char *split){
   int *p = strstr(target, split);
   for(int i = *p ; i<)
}


/**判断一个字符串是否含有另一个字符串,是返回大字符串中含有小字符串的起始下标 , 不是return 0*/
int haveStr(char *target , char *inStr){
	int length_target = strlen(target);
	int length_inStr = strlen(inStr);
	int index = 0;
	int count = 0;
	for(int i =0 ; i<length_target ; i++){
		if(*(inStr) == *(target+i)){
			for(int j =0 ; j<length_inStr ; i++){
				if(*(inStr+j) == *(target+i+j)){
					count++;
				}
			}
			if(count == length_inStr){
				return index;
			}
		}
		index++;
	}
	return 0;
}


int main(void) {
    char s[] = "HJFJKFKFGHFABC";
    //char n[] = "CBC";
    subString(s,3,6);
    printf("%s\n",s);

}










