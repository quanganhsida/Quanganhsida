--SELECT * FROM DimCustomer

SELECT DimCustomer.FirstName, DimCustomer.MiddleName, DimCustomer.LastName
FROM DimCustomer

SELECT DimCustomer.FirstName, DimCustomer.MiddleName, DimCustomer.LastName
FROM DimCustomer
GO
CREATE INDEX IDX_CustomerName
ON DimCustomer(FirstName, MiddleName, LastName)