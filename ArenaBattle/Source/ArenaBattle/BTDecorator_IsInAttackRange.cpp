// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsInAttackRange.h"
#include "ABAIController.h"
#include "ABCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsInAttackRange::UBTDecorator_IsInAttackRange()
{
	NodeName = TEXT("CanAttack");
}

bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn)
		return false;

	auto Target = Cast<AABCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AABAIController::TargetKey));

	ABLOG(Warning, TEXT("Target's name : %s"), Target->GetClass()->GetName() );

	if (nullptr == Target)
		return false;

	bResult = (Target->GetDistanceTo(ControllingPawn) <= 200.0f);
	ABLOG(Warning, TEXT("Distance from ControllingPawn to Target is : %f"), Target->GetDistanceTo(ControllingPawn));
	ABLOG(Warning, TEXT("bResult : %s"), (bResult ?  TEXT("True") : TEXT("False")));

	return bResult;
}
