/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/RedshiftDatabase.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RedshiftDatabaseCredentials.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>Describes the data specification of an Amazon Redshift
   * <code>DataSource</code>.</p>
   */
  class AWS_MACHINELEARNING_API RedshiftDataSpec
  {
  public:
    RedshiftDataSpec();
    RedshiftDataSpec(const Aws::Utils::Json::JsonValue& jsonValue);
    RedshiftDataSpec& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>ClusterIdentifier</code>
     * for an Amazon Redshift <code>DataSource</code>.</p>
     */
    inline const RedshiftDatabase& GetDatabaseInformation() const{ return m_databaseInformation; }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>ClusterIdentifier</code>
     * for an Amazon Redshift <code>DataSource</code>.</p>
     */
    inline void SetDatabaseInformation(const RedshiftDatabase& value) { m_databaseInformationHasBeenSet = true; m_databaseInformation = value; }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>ClusterIdentifier</code>
     * for an Amazon Redshift <code>DataSource</code>.</p>
     */
    inline void SetDatabaseInformation(RedshiftDatabase&& value) { m_databaseInformationHasBeenSet = true; m_databaseInformation = value; }

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>ClusterIdentifier</code>
     * for an Amazon Redshift <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDatabaseInformation(const RedshiftDatabase& value) { SetDatabaseInformation(value); return *this;}

    /**
     * <p>Describes the <code>DatabaseName</code> and <code>ClusterIdentifier</code>
     * for an Amazon Redshift <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDatabaseInformation(RedshiftDatabase&& value) { SetDatabaseInformation(value); return *this;}

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetSelectSqlQuery() const{ return m_selectSqlQuery; }

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline void SetSelectSqlQuery(const Aws::String& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = value; }

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline void SetSelectSqlQuery(Aws::String&& value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery = value; }

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline void SetSelectSqlQuery(const char* value) { m_selectSqlQueryHasBeenSet = true; m_selectSqlQuery.assign(value); }

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithSelectSqlQuery(const Aws::String& value) { SetSelectSqlQuery(value); return *this;}

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithSelectSqlQuery(Aws::String&& value) { SetSelectSqlQuery(value); return *this;}

    /**
     * <p>Describes the SQL Query to execute on an Amazon Redshift database for an
     * Amazon Redshift <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithSelectSqlQuery(const char* value) { SetSelectSqlQuery(value); return *this;}

    /**
     * <p>Describes AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon Redshift database.</p>
     */
    inline const RedshiftDatabaseCredentials& GetDatabaseCredentials() const{ return m_databaseCredentials; }

    /**
     * <p>Describes AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon Redshift database.</p>
     */
    inline void SetDatabaseCredentials(const RedshiftDatabaseCredentials& value) { m_databaseCredentialsHasBeenSet = true; m_databaseCredentials = value; }

    /**
     * <p>Describes AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon Redshift database.</p>
     */
    inline void SetDatabaseCredentials(RedshiftDatabaseCredentials&& value) { m_databaseCredentialsHasBeenSet = true; m_databaseCredentials = value; }

    /**
     * <p>Describes AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon Redshift database.</p>
     */
    inline RedshiftDataSpec& WithDatabaseCredentials(const RedshiftDatabaseCredentials& value) { SetDatabaseCredentials(value); return *this;}

    /**
     * <p>Describes AWS Identity and Access Management (IAM) credentials that are used
     * connect to the Amazon Redshift database.</p>
     */
    inline RedshiftDataSpec& WithDatabaseCredentials(RedshiftDatabaseCredentials&& value) { SetDatabaseCredentials(value); return *this;}

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline const Aws::String& GetS3StagingLocation() const{ return m_s3StagingLocation; }

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline void SetS3StagingLocation(const Aws::String& value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation = value; }

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline void SetS3StagingLocation(Aws::String&& value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation = value; }

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline void SetS3StagingLocation(const char* value) { m_s3StagingLocationHasBeenSet = true; m_s3StagingLocation.assign(value); }

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline RedshiftDataSpec& WithS3StagingLocation(const Aws::String& value) { SetS3StagingLocation(value); return *this;}

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline RedshiftDataSpec& WithS3StagingLocation(Aws::String&& value) { SetS3StagingLocation(value); return *this;}

    /**
     * <p>Describes an Amazon S3 location to store the result set of the
     * <code>SelectSqlQuery</code> query.</p>
     */
    inline RedshiftDataSpec& WithS3StagingLocation(const char* value) { SetS3StagingLocation(value); return *this;}

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataRearrangement() const{ return m_dataRearrangement; }

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline void SetDataRearrangement(const Aws::String& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = value; }

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline void SetDataRearrangement(Aws::String&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = value; }

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline void SetDataRearrangement(const char* value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement.assign(value); }

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDataRearrangement(const Aws::String& value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDataRearrangement(Aws::String&& value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>Describes the splitting specifications for a <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDataRearrangement(const char* value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline const Aws::String& GetDataSchema() const{ return m_dataSchema; }

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline void SetDataSchema(const Aws::String& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = value; }

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline void SetDataSchema(Aws::String&& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = value; }

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline void SetDataSchema(const char* value) { m_dataSchemaHasBeenSet = true; m_dataSchema.assign(value); }

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline RedshiftDataSpec& WithDataSchema(const Aws::String& value) { SetDataSchema(value); return *this;}

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline RedshiftDataSpec& WithDataSchema(Aws::String&& value) { SetDataSchema(value); return *this;}

    /**
     * <p>A JSON string that represents the schema for an Amazon Redshift
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>A <code>DataSchema</code> is not required if you
     * specify a <code>DataSchemaUri</code>.</p> <p>Define your <code>DataSchema</code>
     * as a series of key-value pairs. <code>attributes</code> and
     * <code>excludedVariableNames</code> have an array of key-value pairs for their
     * value. Use the following format to define your <code>DataSchema</code>.</p> <p>{
     * "version": "1.0",</p> <p> "recordAnnotationFieldName": "F1",</p> <p>
     * "recordWeightFieldName": "F2",</p> <p> "targetFieldName": "F3",</p> <p>
     * "dataFormat": "CSV",</p> <p> "dataFileContainsHeader": true,</p> <p>
     * "attributes": [</p> <p> { "fieldName": "F1", "fieldType": "TEXT" }, {
     * "fieldName": "F2", "fieldType": "NUMERIC" }, { "fieldName": "F3", "fieldType":
     * "CATEGORICAL" }, { "fieldName": "F4", "fieldType": "NUMERIC" }, { "fieldName":
     * "F5", "fieldType": "CATEGORICAL" }, { "fieldName": "F6", "fieldType": "TEXT" },
     * { "fieldName": "F7", "fieldType": "WEIGHTED_INT_SEQUENCE" }, { "fieldName":
     * "F8", "fieldType": "WEIGHTED_STRING_SEQUENCE" } ],</p> <p>
     * "excludedVariableNames": [ "F6" ] } </p>
     */
    inline RedshiftDataSpec& WithDataSchema(const char* value) { SetDataSchema(value); return *this;}

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDataSchemaUri() const{ return m_dataSchemaUri; }

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline void SetDataSchemaUri(const Aws::String& value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri = value; }

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline void SetDataSchemaUri(Aws::String&& value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri = value; }

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline void SetDataSchemaUri(const char* value) { m_dataSchemaUriHasBeenSet = true; m_dataSchemaUri.assign(value); }

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDataSchemaUri(const Aws::String& value) { SetDataSchemaUri(value); return *this;}

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDataSchemaUri(Aws::String&& value) { SetDataSchemaUri(value); return *this;}

    /**
     * <p>Describes the schema location for an Amazon Redshift
     * <code>DataSource</code>.</p>
     */
    inline RedshiftDataSpec& WithDataSchemaUri(const char* value) { SetDataSchemaUri(value); return *this;}

  private:
    RedshiftDatabase m_databaseInformation;
    bool m_databaseInformationHasBeenSet;
    Aws::String m_selectSqlQuery;
    bool m_selectSqlQueryHasBeenSet;
    RedshiftDatabaseCredentials m_databaseCredentials;
    bool m_databaseCredentialsHasBeenSet;
    Aws::String m_s3StagingLocation;
    bool m_s3StagingLocationHasBeenSet;
    Aws::String m_dataRearrangement;
    bool m_dataRearrangementHasBeenSet;
    Aws::String m_dataSchema;
    bool m_dataSchemaHasBeenSet;
    Aws::String m_dataSchemaUri;
    bool m_dataSchemaUriHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
