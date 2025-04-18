-- 创建数据库
CREATE DATABASE IF NOT EXISTS company_db;

-- 使用数据库
USE company_db;

-- 创建员工表
CREATE TABLE IF NOT EXISTS employees (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL,
    department VARCHAR(50),
    salary DECIMAL(10,2),
    hire_date DATE
);

-- 插入示例数据
INSERT INTO employees (name, department, salary, hire_date) VALUES 
    ('张三', '技术部', 8000.00, '2022-01-15'),
    ('李四', '市场部', 7500.00, '2022-03-20'),
    ('王五', '技术部', 9000.00, '2021-11-05'),
    ('赵六', '人事部', 6500.00, '2022-06-01'),
    ('王子月月','厕所部',1000.00,'2025-04-08');

-- 查询示例
-- 1. 查询所有员工信息
SELECT * FROM employees;

-- 2. 按部门统计平均工资
SELECT 
    department,
    AVG(salary) as avg_salary
FROM employees
GROUP BY department;

-- 3. 查询工资最高的前3名员工
SELECT name, department, salary
FROM employees
ORDER BY salary DESC
LIMIT 3;

-- 4. 查询特定部门的员工
SELECT name, salary
FROM employees
WHERE department = '技术部';

SELECT name, salary
FROM employees
WHERE department = '人事部';