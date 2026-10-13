package com.discord.span.utilities.spannable;

import a3.e;
import ab.a;
import android.graphics.LinearGradient;
import android.graphics.Shader;
import android.text.TextPaint;
import android.view.View;
import android.widget.TextView;
import b1.c;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react_gesture_handler.nested_touch.NestedClickableSpan;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.x;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000Z\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u0000\n\u0002\b\u0013\b\u0086\b\u0018\u00002\u00020\u00012\u00020\u0002B\u007f\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0003\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\b\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\n\u001a\u00020\t\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000b\u0012\u0014\b\u0002\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u000b0\r\u0012\b\b\u0002\u0010\u0010\u001a\u00020\u000b\u0012\u0012\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00110\r¢\u0006\u0004\b\u0013\u0010\u0014J\u0012\u0010\u0015\u001a\u0004\u0018\u00010\u0005HÂ\u0003¢\u0006\u0004\b\u0015\u0010\u0016J\u0012\u0010\u0017\u001a\u0004\u0018\u00010\u0005HÂ\u0003¢\u0006\u0004\b\u0017\u0010\u0016J\u0012\u0010\u0018\u001a\u0004\u0018\u00010\u0005HÂ\u0003¢\u0006\u0004\b\u0018\u0010\u0016J\u0010\u0010\u0019\u001a\u00020\tHÂ\u0003¢\u0006\u0004\b\u0019\u0010\u001aJ\u0012\u0010\u001b\u001a\u0004\u0018\u00010\u000bHÂ\u0003¢\u0006\u0004\b\u001b\u0010\u001cJ\u001c\u0010\u001d\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u000b0\rHÂ\u0003¢\u0006\u0004\b\u001d\u0010\u001eJ\u001c\u0010\u001f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00110\rHÂ\u0003¢\u0006\u0004\b\u001f\u0010\u001eJ\u0017\u0010\"\u001a\u00020\u00112\u0006\u0010!\u001a\u00020 H\u0016¢\u0006\u0004\b\"\u0010#J\u0017\u0010%\u001a\u00020\u00112\u0006\u0010$\u001a\u00020\u000eH\u0016¢\u0006\u0004\b%\u0010&J\u0017\u0010'\u001a\u00020\u000b2\u0006\u0010$\u001a\u00020\u000eH\u0016¢\u0006\u0004\b'\u0010(J\u0017\u0010+\u001a\u00020\u00112\u0006\u0010*\u001a\u00020)H\u0016¢\u0006\u0004\b+\u0010,J\u0010\u0010-\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b-\u0010.J\u0010\u0010/\u001a\u00020\u000bHÆ\u0003¢\u0006\u0004\b/\u00100J\u008a\u0001\u00101\u001a\u00020\u00002\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0003\u0010\u0006\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010\u0007\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010\b\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\n\u001a\u00020\t2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000b2\u0014\b\u0002\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u000b0\r2\b\b\u0002\u0010\u0010\u001a\u00020\u000b2\u0014\b\u0002\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00110\rHÆ\u0001¢\u0006\u0004\b1\u00102J\u0010\u00104\u001a\u000203HÖ\u0001¢\u0006\u0004\b4\u00105J\u0010\u00106\u001a\u00020\u0005HÖ\u0001¢\u0006\u0004\b6\u00107J\u001a\u0010:\u001a\u00020\u000b2\b\u00109\u001a\u0004\u0018\u000108HÖ\u0003¢\u0006\u0004\b:\u0010;R\u001a\u0010\u0004\u001a\u00020\u00038\u0016X\u0096\u0004¢\u0006\f\n\u0004\b\u0004\u0010<\u001a\u0004\b=\u0010.R\u0016\u0010\u0006\u001a\u0004\u0018\u00010\u00058\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0006\u0010>R\u0016\u0010\u0007\u001a\u0004\u0018\u00010\u00058\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0007\u0010>R\u0016\u0010\b\u001a\u0004\u0018\u00010\u00058\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\b\u0010>R\u0014\u0010\n\u001a\u00020\t8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\n\u0010?R\u0016\u0010\f\u001a\u0004\u0018\u00010\u000b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\f\u0010@R \u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u000b0\r8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u000f\u0010AR\u001a\u0010\u0010\u001a\u00020\u000b8\u0016X\u0096\u0004¢\u0006\f\n\u0004\b\u0010\u0010B\u001a\u0004\bC\u00100R \u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00110\r8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0012\u0010AR(\u0010E\u001a\u0004\u0018\u00010 2\b\u0010D\u001a\u0004\u0018\u00010 8\u0002@BX\u0082\u000e¢\u0006\f\n\u0004\bE\u0010F\"\u0004\bG\u0010#R\u0019\u0010J\u001a\u00020\u0005*\u00020\u00058Ã\u0002X\u0082\u0004¢\u0006\u0006\u001a\u0004\bH\u0010I¨\u0006K"}, d2 = {"Lcom/discord/span/utilities/spannable/ClickableSpan;", "Landroid/text/style/ClickableSpan;", "Lcom/discord/react_gesture_handler/nested_touch/NestedClickableSpan;", "Lcom/discord/react_gesture_handler/nested_touch/NestedClickableSpan$TouchPriority;", "touchPriority", "", "primaryColor", "secondaryColor", "tertiaryColor", "", "gradientPatternWidth", "", "underlineText", "Lkotlin/Function1;", "Landroid/view/View;", "onLongClickListener", "expandsTouchTargetToLineBounds", "", "onClickListener", "<init>", "(Lcom/discord/react_gesture_handler/nested_touch/NestedClickableSpan$TouchPriority;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;FLjava/lang/Boolean;Lkotlin/jvm/functions/Function1;ZLkotlin/jvm/functions/Function1;)V", "component2", "()Ljava/lang/Integer;", "component3", "component4", "component5", "()F", "component6", "()Ljava/lang/Boolean;", "component7", "()Lkotlin/jvm/functions/Function1;", "component9", "Landroid/widget/TextView;", "textView", "enableHighlight", "(Landroid/widget/TextView;)V", "view", ViewProps.ON_CLICK, "(Landroid/view/View;)V", "onLongClick", "(Landroid/view/View;)Z", "Landroid/text/TextPaint;", "textPaint", "updateDrawState", "(Landroid/text/TextPaint;)V", "component1", "()Lcom/discord/react_gesture_handler/nested_touch/NestedClickableSpan$TouchPriority;", "component8", "()Z", "copy", "(Lcom/discord/react_gesture_handler/nested_touch/NestedClickableSpan$TouchPriority;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;FLjava/lang/Boolean;Lkotlin/jvm/functions/Function1;ZLkotlin/jvm/functions/Function1;)Lcom/discord/span/utilities/spannable/ClickableSpan;", "", "toString", "()Ljava/lang/String;", "hashCode", "()I", "", JankRecordStore.SCREEN_OTHER, "equals", "(Ljava/lang/Object;)Z", "Lcom/discord/react_gesture_handler/nested_touch/NestedClickableSpan$TouchPriority;", "getTouchPriority", "Ljava/lang/Integer;", "F", "Ljava/lang/Boolean;", "Lkotlin/jvm/functions/Function1;", "Z", "getExpandsTouchTargetToLineBounds", "value", "spanView", "Landroid/widget/TextView;", "setSpanView", "getDarken", "(I)I", "darken", "span_utilities_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nClickableSpan.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ClickableSpan.kt\ncom/discord/span/utilities/spannable/ClickableSpan\n*L\n1#1,96:1\n43#1:97\n*S KotlinDebug\n*F\n+ 1 ClickableSpan.kt\ncom/discord/span/utilities/spannable/ClickableSpan\n*L\n81#1:97\n*E\n"})
/* loaded from: classes.dex */
public final /* data */ class ClickableSpan extends android.text.style.ClickableSpan implements NestedClickableSpan {
    private final boolean expandsTouchTargetToLineBounds;
    private final float gradientPatternWidth;

    @NotNull
    private final Function1<View, Unit> onClickListener;

    @NotNull
    private final Function1<View, Boolean> onLongClickListener;
    private final Integer primaryColor;
    private final Integer secondaryColor;
    private TextView spanView;
    private final Integer tertiaryColor;

    @NotNull
    private final NestedClickableSpan.TouchPriority touchPriority;
    private final Boolean underlineText;

    public /* synthetic */ ClickableSpan(NestedClickableSpan.TouchPriority touchPriority, Integer num, Integer num2, Integer num3, float f2, Boolean bool, Function1 function1, boolean z5, Function1 function12, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? NestedClickableSpan.TouchPriority.DEFAULT : touchPriority, (i5 & 2) != 0 ? null : num, (i5 & 4) != 0 ? null : num2, (i5 & 8) != 0 ? null : num3, (i5 & 16) != 0 ? 150.0f : f2, (i5 & 32) != 0 ? Boolean.FALSE : bool, (i5 & 64) != 0 ? new a(6) : function1, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : z5, function12);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean _init_$lambda$0(View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return false;
    }

    /* renamed from: component2, reason: from getter */
    private final Integer getPrimaryColor() {
        return this.primaryColor;
    }

    /* renamed from: component3, reason: from getter */
    private final Integer getSecondaryColor() {
        return this.secondaryColor;
    }

    /* renamed from: component4, reason: from getter */
    private final Integer getTertiaryColor() {
        return this.tertiaryColor;
    }

    /* renamed from: component5, reason: from getter */
    private final float getGradientPatternWidth() {
        return this.gradientPatternWidth;
    }

    /* renamed from: component6, reason: from getter */
    private final Boolean getUnderlineText() {
        return this.underlineText;
    }

    private final Function1<View, Boolean> component7() {
        return this.onLongClickListener;
    }

    private final Function1<View, Unit> component9() {
        return this.onClickListener;
    }

    public static /* synthetic */ ClickableSpan copy$default(ClickableSpan clickableSpan, NestedClickableSpan.TouchPriority touchPriority, Integer num, Integer num2, Integer num3, float f2, Boolean bool, Function1 function1, boolean z5, Function1 function12, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            touchPriority = clickableSpan.touchPriority;
        }
        if ((i5 & 2) != 0) {
            num = clickableSpan.primaryColor;
        }
        if ((i5 & 4) != 0) {
            num2 = clickableSpan.secondaryColor;
        }
        if ((i5 & 8) != 0) {
            num3 = clickableSpan.tertiaryColor;
        }
        if ((i5 & 16) != 0) {
            f2 = clickableSpan.gradientPatternWidth;
        }
        if ((i5 & 32) != 0) {
            bool = clickableSpan.underlineText;
        }
        if ((i5 & 64) != 0) {
            function1 = clickableSpan.onLongClickListener;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            z5 = clickableSpan.expandsTouchTargetToLineBounds;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            function12 = clickableSpan.onClickListener;
        }
        boolean z6 = z5;
        Function1 function13 = function12;
        Boolean bool2 = bool;
        Function1 function14 = function1;
        float f10 = f2;
        Integer num4 = num2;
        return clickableSpan.copy(touchPriority, num, num4, num3, f10, bool2, function14, z6, function13);
    }

    private final int getDarken(int i5) {
        return c.b(i5, -16777216, 0.1f);
    }

    private final void setSpanView(TextView textView) {
        if (textView != null) {
            textView.invalidate();
        } else {
            TextView textView2 = this.spanView;
            if (textView2 != null) {
                textView2.invalidate();
            }
        }
        this.spanView = textView;
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final NestedClickableSpan.TouchPriority getTouchPriority() {
        return this.touchPriority;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getExpandsTouchTargetToLineBounds() {
        return this.expandsTouchTargetToLineBounds;
    }

    @NotNull
    public final ClickableSpan copy(@NotNull NestedClickableSpan.TouchPriority touchPriority, Integer primaryColor, Integer secondaryColor, Integer tertiaryColor, float gradientPatternWidth, Boolean underlineText, @NotNull Function1<? super View, Boolean> onLongClickListener, boolean expandsTouchTargetToLineBounds, @NotNull Function1<? super View, Unit> onClickListener) {
        Intrinsics.checkNotNullParameter(touchPriority, "touchPriority");
        Intrinsics.checkNotNullParameter(onLongClickListener, "onLongClickListener");
        Intrinsics.checkNotNullParameter(onClickListener, "onClickListener");
        return new ClickableSpan(touchPriority, primaryColor, secondaryColor, tertiaryColor, gradientPatternWidth, underlineText, onLongClickListener, expandsTouchTargetToLineBounds, onClickListener);
    }

    @Override // com.discord.react_gesture_handler.nested_touch.NestedClickableSpan
    public void enableHighlight(@NotNull TextView textView) {
        Intrinsics.checkNotNullParameter(textView, "textView");
        setSpanView(textView);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ClickableSpan)) {
            return false;
        }
        ClickableSpan clickableSpan = (ClickableSpan) other;
        return this.touchPriority == clickableSpan.touchPriority && Intrinsics.areEqual(this.primaryColor, clickableSpan.primaryColor) && Intrinsics.areEqual(this.secondaryColor, clickableSpan.secondaryColor) && Intrinsics.areEqual(this.tertiaryColor, clickableSpan.tertiaryColor) && Float.compare(this.gradientPatternWidth, clickableSpan.gradientPatternWidth) == 0 && Intrinsics.areEqual(this.underlineText, clickableSpan.underlineText) && Intrinsics.areEqual(this.onLongClickListener, clickableSpan.onLongClickListener) && this.expandsTouchTargetToLineBounds == clickableSpan.expandsTouchTargetToLineBounds && Intrinsics.areEqual(this.onClickListener, clickableSpan.onClickListener);
    }

    @Override // com.discord.react_gesture_handler.nested_touch.NestedClickableSpan
    public boolean getExpandsTouchTargetToLineBounds() {
        return this.expandsTouchTargetToLineBounds;
    }

    @Override // com.discord.react_gesture_handler.nested_touch.NestedClickableSpan
    @NotNull
    public NestedClickableSpan.TouchPriority getTouchPriority() {
        return this.touchPriority;
    }

    public int hashCode() {
        int hashCode = this.touchPriority.hashCode() * 31;
        Integer num = this.primaryColor;
        int hashCode2 = (hashCode + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.secondaryColor;
        int hashCode3 = (hashCode2 + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.tertiaryColor;
        int a = e.a((hashCode3 + (num3 == null ? 0 : num3.hashCode())) * 31, 31, this.gradientPatternWidth);
        Boolean bool = this.underlineText;
        return this.onClickListener.hashCode() + d.d(com.discord.chat.bridge.botuikit.a.f((a + (bool != null ? bool.hashCode() : 0)) * 31, 31, this.onLongClickListener), 31, this.expandsTouchTargetToLineBounds);
    }

    @Override // android.text.style.ClickableSpan, com.discord.react_gesture_handler.nested_touch.NestedClickableSpan
    public void onClick(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        this.onClickListener.invoke(view);
        Unit unit = Unit.a;
        setSpanView(null);
    }

    @Override // com.discord.react_gesture_handler.nested_touch.NestedClickableSpan
    public boolean onLongClick(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        Boolean bool = (Boolean) this.onLongClickListener.invoke(view);
        bool.getClass();
        setSpanView(null);
        return bool.booleanValue();
    }

    @Override // android.text.style.ClickableSpan
    @NotNull
    public String toString() {
        NestedClickableSpan.TouchPriority touchPriority = this.touchPriority;
        Integer num = this.primaryColor;
        Integer num2 = this.secondaryColor;
        Integer num3 = this.tertiaryColor;
        float f2 = this.gradientPatternWidth;
        Boolean bool = this.underlineText;
        Function1<View, Boolean> function1 = this.onLongClickListener;
        boolean z5 = this.expandsTouchTargetToLineBounds;
        Function1<View, Unit> function12 = this.onClickListener;
        StringBuilder sb2 = new StringBuilder("ClickableSpan(touchPriority=");
        sb2.append(touchPriority);
        sb2.append(", primaryColor=");
        sb2.append(num);
        sb2.append(", secondaryColor=");
        d.s(sb2, num2, ", tertiaryColor=", num3, ", gradientPatternWidth=");
        sb2.append(f2);
        sb2.append(", underlineText=");
        sb2.append(bool);
        sb2.append(", onLongClickListener=");
        sb2.append(function1);
        sb2.append(", expandsTouchTargetToLineBounds=");
        sb2.append(z5);
        sb2.append(", onClickListener=");
        sb2.append(function12);
        sb2.append(")");
        return sb2.toString();
    }

    @Override // android.text.style.ClickableSpan, android.text.style.CharacterStyle
    public void updateDrawState(@NotNull TextPaint textPaint) {
        Intrinsics.checkNotNullParameter(textPaint, "textPaint");
        super.updateDrawState(textPaint);
        Integer num = this.primaryColor;
        if (num != null) {
            Integer num2 = this.secondaryColor;
            if (num2 != null) {
                Integer[] elements = {num, num2, this.tertiaryColor};
                Intrinsics.checkNotNullParameter(elements, "elements");
                textPaint.setShader(new LinearGradient(0.0f, 0.0f, this.gradientPatternWidth, 0.0f, CollectionsKt.h0(x.r(elements)), (float[]) null, Shader.TileMode.MIRROR));
            } else {
                textPaint.setShader(null);
                textPaint.setColor(this.spanView != null ? c.b(this.primaryColor.intValue(), -16777216, 0.1f) : this.primaryColor.intValue());
                Unit unit = Unit.a;
            }
        } else {
            textPaint.setShader(null);
        }
        Boolean bool = this.underlineText;
        if (bool != null) {
            textPaint.setUnderlineText(bool.booleanValue());
        } else {
            textPaint.setUnderlineText(false);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ClickableSpan(@NotNull NestedClickableSpan.TouchPriority touchPriority, Integer num, Integer num2, Integer num3, float f2, Boolean bool, @NotNull Function1<? super View, Boolean> onLongClickListener, boolean z5, @NotNull Function1<? super View, Unit> onClickListener) {
        Intrinsics.checkNotNullParameter(touchPriority, "touchPriority");
        Intrinsics.checkNotNullParameter(onLongClickListener, "onLongClickListener");
        Intrinsics.checkNotNullParameter(onClickListener, "onClickListener");
        this.touchPriority = touchPriority;
        this.primaryColor = num;
        this.secondaryColor = num2;
        this.tertiaryColor = num3;
        this.gradientPatternWidth = f2;
        this.underlineText = bool;
        this.onLongClickListener = onLongClickListener;
        this.expandsTouchTargetToLineBounds = z5;
        this.onClickListener = onClickListener;
    }
}
