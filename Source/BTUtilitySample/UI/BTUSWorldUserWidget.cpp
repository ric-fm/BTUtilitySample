// Copyright (c) 2026 Ricardo Franco.
// Licensed under the MIT License. See LICENSE file in the project root for full license information.

#include "BTUSWorldUserWidget.h"

#include "BTUSWorldWidgetComponent.h"

void UBTUSWorldUserWidget::SetWorldWidgetComponent(UBTUSWorldWidgetComponent* InComponent)
{
	OwningWorldWidget = InComponent;
}

AActor* UBTUSWorldUserWidget::GetWidgetOwnerActor() const
{
	return OwningWorldWidget.IsValid() ? OwningWorldWidget->GetWidgetOwnerActor() : nullptr;
}
