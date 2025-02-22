#include <stdio.h>
#include <string.h>

// 简单的哈希函数示例
unsigned int simple_hash(const char *str) {
    unsigned int hash = 0;
    while (*str) {
        // 对每个字节进行操作，适用于UTF-8编码的中文
        hash = hash * 31 + *(unsigned char *)str++;
    }
    return hash;
}

int main() {
    // 假设name数组已经包含了中文句子，且使用UTF-8编码
    char name[] = "这是一句中文话"; // UTF-8编码

    // 计算哈希值
    unsigned int hash_value = simple_hash(name);

    // 打印哈希值
    printf("哈希值: %u\n", hash_value);

    return 0;
}
