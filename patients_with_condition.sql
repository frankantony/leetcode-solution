# Write your MySQL query statement below
select patient_id, patient_name, conditions
from Patients
where conditions like 'DIAB1%' || conditions like '% DIAB1%'

