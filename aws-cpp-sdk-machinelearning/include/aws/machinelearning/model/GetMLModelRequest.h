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
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API GetMLModelRequest : public MachineLearningRequest
  {
  public:
    GetMLModelRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline GetMLModelRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline GetMLModelRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline GetMLModelRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

    /**
     * <p>Specifies whether the <code>GetMLModel</code> operation should return
     * <code>Recipe</code>.</p> <p>If true, <code>Recipe</code> is returned.</p> <p>If
     * false, <code>Recipe</code> is not returned.</p>
     */
    inline bool GetVerbose() const{ return m_verbose; }

    /**
     * <p>Specifies whether the <code>GetMLModel</code> operation should return
     * <code>Recipe</code>.</p> <p>If true, <code>Recipe</code> is returned.</p> <p>If
     * false, <code>Recipe</code> is not returned.</p>
     */
    inline void SetVerbose(bool value) { m_verboseHasBeenSet = true; m_verbose = value; }

    /**
     * <p>Specifies whether the <code>GetMLModel</code> operation should return
     * <code>Recipe</code>.</p> <p>If true, <code>Recipe</code> is returned.</p> <p>If
     * false, <code>Recipe</code> is not returned.</p>
     */
    inline GetMLModelRequest& WithVerbose(bool value) { SetVerbose(value); return *this;}

  private:
    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;
    bool m_verbose;
    bool m_verboseHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
