SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE PostalCode = '91940'
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE StateProvinceID = 177
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE StateProvinceID > 177
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE StateProvinceID < 177
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE city like 'ott%'
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE city like '_t%'
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE city like '_tt%'
SELECT AddressLine1, City, StateProvinceID, PostalCode
FROM [AdventureWorks2019].[Person].[Address]
WHERE city like '_t%'
ORDER BY City