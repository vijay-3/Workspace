CREATE TABLE employees (
    employee_id NUMBER PRIMARY KEY,
    first_name VARCHAR2(50),
    last_name VARCHAR2(50),
    email VARCHAR2(100) UNIQUE,
    hire_date DATE,
    salary NUMBER(10,2),
    department_id NUMBER,
    CONSTRAINT fk_department_id FOREIGN KEY (department_id) REFERENCES departments(department_id)
);