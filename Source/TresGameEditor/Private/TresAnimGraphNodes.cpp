#include "TresAnimGraphNodes.h"



UTresAnimGraphNode_ModifyBoneCurve::UTresAnimGraphNode_ModifyBoneCurve(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FLinearColor UTresAnimGraphNode_ModifyBoneCurve::GetNodeTitleColor() const
{
    return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_ModifyBoneCurve::GetNodeCategory() const
{
    return TEXT("SQEX");
}




UTresAnimGraphNode_AnimSetEvaluator::UTresAnimGraphNode_AnimSetEvaluator(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FLinearColor UTresAnimGraphNode_AnimSetEvaluator::GetNodeTitleColor() const
{
    return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_AnimSetEvaluator::GetNodeCategory() const
{
    return TEXT("SQEX");
}


UTresAnimGraphNode_AnimSetPlayer::UTresAnimGraphNode_AnimSetPlayer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}


FLinearColor UTresAnimGraphNode_AnimSetPlayer::GetNodeTitleColor() const
{
    return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_AnimSetPlayer::GetNodeCategory() const
{
    return TEXT("SQEX");
}


UTresAnimGraphNode_ExDropWaist::UTresAnimGraphNode_ExDropWaist(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FLinearColor UTresAnimGraphNode_ExDropWaist::GetNodeTitleColor() const
{
    return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_ExDropWaist::GetNodeCategory() const
{
    return TEXT("SQEX");
}



UTresAnimGraphNode_SaveCachedPose::UTresAnimGraphNode_SaveCachedPose(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FLinearColor UTresAnimGraphNode_SaveCachedPose::GetNodeTitleColor() const
{
	return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_SaveCachedPose::GetNodeCategory() const
{
	return TEXT("SQEX");
}



UTresAnimGraphNode_SplineAnchor::UTresAnimGraphNode_SplineAnchor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    
}

FLinearColor UTresAnimGraphNode_SplineAnchor::GetNodeTitleColor() const
{
    return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_SplineAnchor::GetNodeCategory() const
{
    return TEXT("SQEX");
}



UTresAnimGraphNode_UseCachedPose::UTresAnimGraphNode_UseCachedPose(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FLinearColor UTresAnimGraphNode_UseCachedPose::GetNodeTitleColor() const
{
    return FLinearColor(0.0f, 0.4f, 0.8f);
}

FString UTresAnimGraphNode_UseCachedPose::GetNodeCategory() const
{
    return TEXT("SQEX");
}

