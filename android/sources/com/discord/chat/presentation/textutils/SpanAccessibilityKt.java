package com.discord.chat.presentation.textutils;

import android.widget.TextView;
import androidx.core.view.s0;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0007¨\u0006\u0003"}, d2 = {"enableAccessibleSpanClickListener", "", "Landroid/widget/TextView;", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SpanAccessibilityKt {
    public static final void enableAccessibleSpanClickListener(@NotNull TextView textView) {
        Intrinsics.checkNotNullParameter(textView, "<this>");
        NestedScrollOnTouchUtilsKt.enableNestedSpanClickListener(textView, true);
        s0.p(textView, SingleLinkAccessibilityDelegate.INSTANCE);
    }
}
