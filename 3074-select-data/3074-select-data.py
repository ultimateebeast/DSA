import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    row = students.query("student_id == 101")[['name','age']]
    return row