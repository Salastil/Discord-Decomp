package com.discord.chat.presentation.message.view.botuikit;

import com.discord.chat.bridge.botuikit.Component;
import com.discord.chat.bridge.botuikit.VersionedComponent;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\u001a\u001a\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0001H\u0002\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0004H\u0002\u001a\u0012\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u0006\u0012\u0002\b\u00030\u0005H\u0002\u001a\u0018\u0010\u0006\u001a\u00020\u0007*\u0006\u0012\u0002\b\u00030\u00052\u0006\u0010\b\u001a\u00020\u0004H\u0000¨\u0006\t"}, d2 = {"componentViewKey", "", "componentName", "versionKey", "Lcom/discord/chat/bridge/botuikit/Component;", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentView;", "canReuse", "", "component", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ComponentInflaterKt {
    public static final boolean canReuse(@NotNull ComponentView<?> componentView, @NotNull Component component) {
        Intrinsics.checkNotNullParameter(componentView, "<this>");
        Intrinsics.checkNotNullParameter(component, "component");
        return Intrinsics.areEqual(componentView.getComponentType(), Reflection.getOrCreateKotlinClass(component.getClass())) && Intrinsics.areEqual(componentViewKey(componentView), componentViewKey(component));
    }

    private static final String componentViewKey(String str, String str2) {
        return str2 == null ? str : d.l(str, ":", str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final String componentViewKey(Component component) {
        String simpleName = component.getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
        VersionedComponent versionedComponent = component instanceof VersionedComponent ? (VersionedComponent) component : null;
        return componentViewKey(simpleName, versionedComponent != null ? versionedComponent.getComponentVersionKey() : null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String componentViewKey(ComponentView<?> componentView) {
        String simpleName = componentView.getComponentType().getSimpleName();
        if (simpleName == null) {
            return null;
        }
        VersionedComponentView versionedComponentView = componentView instanceof VersionedComponentView ? (VersionedComponentView) componentView : null;
        return componentViewKey(simpleName, versionedComponentView != null ? versionedComponentView.getVersion() : null);
    }
}
