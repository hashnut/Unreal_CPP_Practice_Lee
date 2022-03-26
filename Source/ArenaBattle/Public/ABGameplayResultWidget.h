// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "ABGameplayWidget.h"
#include "ABGameplayResultWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABGameplayResultWidget : public UABGameplayWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;
};
