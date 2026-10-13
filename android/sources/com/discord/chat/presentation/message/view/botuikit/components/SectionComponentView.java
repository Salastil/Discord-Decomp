package com.discord.chat.presentation.message.view.botuikit.components;

import android.content.Context;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.LinearLayout;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.discord.chat.bridge.botuikit.Component;
import com.discord.chat.bridge.botuikit.SectionAccessory;
import com.discord.chat.bridge.botuikit.SectionChildComponent;
import com.discord.chat.bridge.botuikit.SectionComponent;
import com.discord.chat.databinding.MessageComponentSectionViewBinding;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.ComponentProvider;
import com.discord.chat.presentation.message.view.botuikit.ComponentView;
import com.discord.chat.presentation.message.view.botuikit.MessageComponentsViewKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import com.google.android.flexbox.FlexboxLayout;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KClass;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u0000 !2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u0002:\u0001!B'\b\u0007\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\u000e\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00030\u0014H\u0016J \u0010\u0015\u001a\u00020\u00122\u0006\u0010\u0016\u001a\u00020\u00032\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0017\u001a\u00020\u0018H\u0016J\u0018\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u0017\u001a\u00020\u0018H\u0002J\n\u0010\u001d\u001a\u0004\u0018\u00010\u001cH\u0002J\u0010\u0010\u001e\u001a\u00020\u00122\u0006\u0010\u001f\u001a\u00020\u001cH\u0002J\b\u0010 \u001a\u00020\u0012H\u0002R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\""}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/SectionComponentView;", "Landroid/widget/LinearLayout;", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentView;", "Lcom/discord/chat/bridge/botuikit/SectionComponent;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "binding", "Lcom/discord/chat/databinding/MessageComponentSectionViewBinding;", "textComponentViews", "componentProvider", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentProvider;", "onRecycle", "", "getComponentType", "Lkotlin/reflect/KClass;", "configure", "component", "componentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "accessoryFitsInline", "", "accessoryView", "Landroid/view/View;", "getCurrentAccessoryView", "setAccessoryView", "newView", "removeAndRecycleAccessoryView", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSectionComponentView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SectionComponentView.kt\ncom/discord/chat/presentation/message/view/botuikit/components/SectionComponentView\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,197:1\n1761#2,3:198\n1573#2:205\n1604#2,4:206\n257#3,2:201\n257#3,2:203\n257#3,2:210\n257#3,2:212\n*S KotlinDebug\n*F\n+ 1 SectionComponentView.kt\ncom/discord/chat/presentation/message/view/botuikit/components/SectionComponentView\n*L\n88#1:198,3\n97#1:205\n97#1:206,4\n91#1:201,2\n94#1:203,2\n115#1:210,2\n141#1:212,2\n*E\n"})
/* loaded from: classes.dex */
public final class SectionComponentView extends LinearLayout implements ComponentView<SectionComponent> {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final MessageComponentSectionViewBinding binding;
    private ComponentProvider componentProvider;

    @NotNull
    private final LinearLayout textComponentViews;

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/components/SectionComponentView$Companion;", "", "<init>", "()V", "inflateComponent", "Lcom/discord/chat/presentation/message/view/botuikit/components/SectionComponentView;", "context", "Landroid/content/Context;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final SectionComponentView inflateComponent(@NotNull Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            return new SectionComponentView(context, null, 0, 6, null);
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public SectionComponentView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final boolean accessoryFitsInline(View accessoryView, ComponentContext componentContext) {
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        accessoryView.measure(makeMeasureSpec, makeMeasureSpec);
        return ((float) accessoryView.getMeasuredWidth()) <= ((float) componentContext.getWidthInfo().getAvailableWidth()) * 0.35f;
    }

    private final View getCurrentAccessoryView() {
        if (this.binding.sectionLayoutBox.getChildCount() > 1) {
            return this.binding.sectionLayoutBox.getChildAt(1);
        }
        return null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void removeAndRecycleAccessoryView() {
        View currentAccessoryView = getCurrentAccessoryView();
        if (currentAccessoryView != 0) {
            this.binding.sectionLayoutBox.removeView(currentAccessoryView);
            ComponentProvider componentProvider = this.componentProvider;
            if (componentProvider != null) {
                componentProvider.recycleComponentView((ComponentView) currentAccessoryView);
            }
        }
    }

    private final void setAccessoryView(View newView) {
        if (Intrinsics.areEqual(newView, getCurrentAccessoryView())) {
            return;
        }
        removeAndRecycleAccessoryView();
        this.binding.sectionLayoutBox.addView(newView);
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    @NotNull
    public KClass getComponentType() {
        return Reflection.getOrCreateKotlinClass(SectionComponent.class);
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void onRecycle(@NotNull ComponentProvider componentProvider) {
        Intrinsics.checkNotNullParameter(componentProvider, "componentProvider");
        MessageComponentsViewKt.recycleChildComponents(this.textComponentViews, componentProvider);
        removeAndRecycleAccessoryView();
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public SectionComponentView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    @Override // com.discord.chat.presentation.message.view.botuikit.ComponentView
    public void configure(@NotNull SectionComponent component, @NotNull ComponentProvider componentProvider, @NotNull ComponentContext componentContext) {
        Intrinsics.checkNotNullParameter(component, "component");
        Intrinsics.checkNotNullParameter(componentProvider, "componentProvider");
        Intrinsics.checkNotNullParameter(componentContext, "componentContext");
        this.componentProvider = componentProvider;
        List<SectionChildComponent<?>> components = component.getComponents();
        if (components == null || !components.isEmpty()) {
            Iterator<T> it = components.iterator();
            while (it.hasNext()) {
                if (((SectionChildComponent) it.next()) instanceof SectionChildComponent.Unknown) {
                    break;
                }
            }
        }
        if (!(component.getAccessory() instanceof SectionAccessory.Unknown)) {
            setVisibility(0);
            List<SectionChildComponent<?>> components2 = component.getComponents();
            ArrayList arrayList = new ArrayList(d0.l(components2, 10));
            int i5 = 0;
            for (Object obj : components2) {
                int i6 = i5 + 1;
                if (i5 < 0) {
                    c0.k();
                    throw null;
                }
                Component component2 = ((SectionChildComponent) obj).getComponent();
                Intrinsics.checkNotNull(component2);
                arrayList.add(componentProvider.getConfiguredComponentView(component2, componentContext, this.textComponentViews, i5));
                i5 = i6;
            }
            ArrayList I = CollectionsKt.I(arrayList);
            Object component3 = component.getAccessory().getComponent();
            Intrinsics.checkNotNull(component3);
            FlexboxLayout sectionLayoutBox = this.binding.sectionLayoutBox;
            Intrinsics.checkNotNullExpressionValue(sectionLayoutBox, "sectionLayoutBox");
            Object configuredComponentView = componentProvider.getConfiguredComponentView(component3, componentContext, sectionLayoutBox, 1);
            if (I.isEmpty() || configuredComponentView == null) {
                setVisibility(8);
                return;
            }
            MessageComponentsViewKt.replaceViews$default(this.textComponentViews, I, componentProvider, SizeUtilsKt.getDpToPx(4), 0, 8, null);
            View view = (View) configuredComponentView;
            setAccessoryView(view);
            if (componentContext.getWidthInfo().isLargeWidthRenderingMode()) {
                this.binding.sectionLayoutBox.setFlexDirection(0);
            } else {
                FlexboxLayout flexboxLayout = this.binding.sectionLayoutBox;
                SectionAccessory<?> accessory = component.getAccessory();
                int i10 = 2;
                if (!(accessory instanceof SectionAccessory.Button) ? (accessory instanceof SectionAccessory.Thumbnail) : accessoryFitsInline(view, componentContext)) {
                    i10 = 0;
                }
                flexboxLayout.setFlexDirection(i10);
            }
            ConstraintLayout root = this.binding.sectionComponentViewGroupErrorRow.getRoot();
            Intrinsics.checkNotNullExpressionValue(root, "getRoot(...)");
            root.setVisibility(component.getErrorText() != null ? 0 : 8);
            String errorText = component.getErrorText();
            if (errorText != null) {
                SimpleDraweeView viewInteractionFailedLabelIcon = this.binding.sectionComponentViewGroupErrorRow.viewInteractionFailedLabelIcon;
                Intrinsics.checkNotNullExpressionValue(viewInteractionFailedLabelIcon, "viewInteractionFailedLabelIcon");
                ReactAssetUtilsKt.setReactAsset(viewInteractionFailedLabelIcon, ReactAsset.CircleErrorIcon);
                SimpleDraweeView viewInteractionFailedLabelIcon2 = this.binding.sectionComponentViewGroupErrorRow.viewInteractionFailedLabelIcon;
                Intrinsics.checkNotNullExpressionValue(viewInteractionFailedLabelIcon2, "viewInteractionFailedLabelIcon");
                ColorUtilsKt.setTintColor(viewInteractionFailedLabelIcon2, Integer.valueOf(ThemeManagerKt.getTheme().getIconFeedbackCritical()));
                this.binding.sectionComponentViewGroupErrorRow.viewInteractionFailedLabelMessage.setText(errorText);
                this.binding.sectionComponentViewGroupErrorRow.viewInteractionFailedLabelMessage.setTextColor(ThemeManagerKt.getTheme().getIconFeedbackCritical());
                return;
            }
            return;
        }
        setVisibility(8);
    }

    public /* synthetic */ SectionComponentView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SectionComponentView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        MessageComponentSectionViewBinding inflate = MessageComponentSectionViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        LinearLayout linearLayout = new LinearLayout(context);
        this.textComponentViews = linearLayout;
        setOrientation(1);
        setLayoutParams(new LinearLayout.LayoutParams(-1, -2));
        linearLayout.setOrientation(1);
        FlexboxLayout.LayoutParams layoutParams = new FlexboxLayout.LayoutParams(-2, -2);
        layoutParams.f5601e = 1.0f;
        linearLayout.setLayoutParams(layoutParams);
        inflate.sectionLayoutBox.addView(linearLayout);
    }
}
