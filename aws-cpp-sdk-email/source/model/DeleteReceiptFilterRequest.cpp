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
#include <aws/email/model/DeleteReceiptFilterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DeleteReceiptFilterRequest::DeleteReceiptFilterRequest() : 
    m_filterNameHasBeenSet(false)
{
}

Aws::String DeleteReceiptFilterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteReceiptFilter&";
  if(m_filterNameHasBeenSet)
  {
    ss << "FilterName=" << StringUtils::URLEncode(m_filterName.c_str()) << "&";
  }
  ss << "Version=2010-12-01";
  return ss.str();
}

