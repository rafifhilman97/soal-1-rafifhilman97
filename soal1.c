/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5 (Foundation of Algorithm)
 *   Hari dan Tanggal    : Selasa, 4 Juni 2026
 *   Nama (NIM)          : Rafif Hilman Muhammad (13224073)
 *   Nama File           : soal1.c
 *   Deskripsi           : input integer banyaknya tanda buka atau tutup,  
                            dihasilkan kombinasi buka dan tutup
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// Struktur Node untuk Tree
typedef struct TreeNode {
    char data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Fungsi untuk membuat node baru
TreeNode* createTreeNode(char value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Fungsi (Rekursif) untuk memasukkan data ke dalam BST
TreeNode* insertTree(TreeNode* root, char value) {
    if (root == NULL) {
        return createTreeNode(value);
    }
    if (value < root->data) {
        root->left = insertTree(root->left, value);
    } else if (value > root->data) {
        root->right = insertTree(root->right, value);
    }
    return root;
}

// Prosedur Traversal: In-Order (Kiri, Akar, Kanan) - Menghasilkan urutan terurut
void inOrder(TreeNode* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Prosedur Traversal: Pre-Order (Akar, Kiri, Kanan)
void preOrder(TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Prosedur Traversal: Post-Order (Kiri, Kanan, Akar)
void postOrder(TreeNode* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}


int main(void){
    int n;
    scanf("%d", &n);

    for (int i; i < n; i++){
        createTreeNode('('); // pemisalan dari "("
        createTreeNode(')'); // pemisalan dari ")"

    }
    






    return 0;
}
