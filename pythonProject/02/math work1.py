import numpy as np
from scipy.sparse import csc_matrix
from scipy.sparse.linalg import spsolve

def solve_linear_equation(A, b):
    """
    求解线性方程组 Ax = b

    参数:
    A (np.ndarray): 系数矩阵，必须是方阵
    b (np.ndarray): 常数向量

    返回:
    np.ndarray: 方程组的解
    """
    # 将A转换为稀疏矩阵
    A_sparse = csc_matrix(A)

    # 验证输入
    if A.shape[0] != A.shape[1]:
        raise ValueError("系数矩阵A必须是方阵")
    elif A.shape[0] != b.shape[0]:
        raise ValueError("系数矩阵A的行数必须与常数向量b的长度相同")

    try:
        # 使用scipy.sparse.linalg.spsolve()函数求解线性方程组
        x = spsolve(A_sparse, b)
        return x
    except np.linalg.LinAlgError as e:
        raise RuntimeError(f"求解线性方程组时发生错误: {e}")

# 定义系数矩阵A和常数向量b
A = np.array([[3, 1], [1, 2]])
b = np.array([9, 8])

try:
    x = solve_linear_equation(A, b)
    print("方程组的解为:", x)
except Exception as e:
    print(e)
