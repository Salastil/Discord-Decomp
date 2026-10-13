package com.discord.chat.presentation.textutils;

import android.os.Bundle;
import android.text.Spanned;
import android.text.style.ClickableSpan;
import android.view.View;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.TextView;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004\bÂ\u0002\u0018\u00002\u00020\u0001:\u0001\u0015B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0015\u0010\u0006\u001a\u0004\u0018\u00010\u0005*\u00020\u0004H\u0002¢\u0006\u0004\b\u0006\u0010\u0007J\u001f\u0010\f\u001a\u00020\u000b2\u0006\u0010\b\u001a\u00020\u00042\u0006\u0010\n\u001a\u00020\tH\u0016¢\u0006\u0004\b\f\u0010\rJ)\u0010\u0013\u001a\u00020\u00122\u0006\u0010\b\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\u000e2\b\u0010\u0011\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\b\u0013\u0010\u0014¨\u0006\u0016"}, d2 = {"Lcom/discord/chat/presentation/textutils/SingleLinkAccessibilityDelegate;", "Landroidx/core/view/b;", "<init>", "()V", "Landroid/view/View;", "Lcom/discord/chat/presentation/textutils/SingleLinkAccessibilityDelegate$SpanLink;", "singleLink", "(Landroid/view/View;)Lcom/discord/chat/presentation/textutils/SingleLinkAccessibilityDelegate$SpanLink;", "host", "Landroidx/core/view/accessibility/AccessibilityNodeInfoCompat;", "info", "", "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroidx/core/view/accessibility/AccessibilityNodeInfoCompat;)V", "", "action", "Landroid/os/Bundle;", "args", "", "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z", "SpanLink", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
final class SingleLinkAccessibilityDelegate extends androidx.core.view.b {

    @NotNull
    public static final SingleLinkAccessibilityDelegate INSTANCE = new SingleLinkAccessibilityDelegate();

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\r\n\u0002\b\u0007\b\u0002\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\f"}, d2 = {"Lcom/discord/chat/presentation/textutils/SingleLinkAccessibilityDelegate$SpanLink;", "", "span", "Landroid/text/style/ClickableSpan;", "label", "", "<init>", "(Landroid/text/style/ClickableSpan;Ljava/lang/CharSequence;)V", "getSpan", "()Landroid/text/style/ClickableSpan;", "getLabel", "()Ljava/lang/CharSequence;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class SpanLink {

        @NotNull
        private final CharSequence label;

        @NotNull
        private final ClickableSpan span;

        public SpanLink(@NotNull ClickableSpan span, @NotNull CharSequence label) {
            Intrinsics.checkNotNullParameter(span, "span");
            Intrinsics.checkNotNullParameter(label, "label");
            this.span = span;
            this.label = label;
        }

        @NotNull
        public final CharSequence getLabel() {
            return this.label;
        }

        @NotNull
        public final ClickableSpan getSpan() {
            return this.span;
        }
    }

    private SingleLinkAccessibilityDelegate() {
    }

    private final SpanLink singleLink(View view) {
        TextView textView = view instanceof TextView ? (TextView) view : null;
        CharSequence text = textView != null ? textView.getText() : null;
        Spanned spanned = text instanceof Spanned ? (Spanned) text : null;
        if (spanned != null) {
            Object[] spans = spanned.getSpans(0, spanned.length(), ClickableSpan.class);
            Intrinsics.checkNotNullExpressionValue(spans, "getSpans(...)");
            Intrinsics.checkNotNullParameter(spans, "<this>");
            ClickableSpan clickableSpan = (ClickableSpan) (spans.length == 1 ? spans[0] : null);
            if (clickableSpan != null) {
                return new SpanLink(clickableSpan, spanned.subSequence(spanned.getSpanStart(clickableSpan), spanned.getSpanEnd(clickableSpan)));
            }
        }
        return null;
    }

    @Override // androidx.core.view.b
    public void onInitializeAccessibilityNodeInfo(@NotNull View host, @NotNull AccessibilityNodeInfoCompat info) {
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(info, "info");
        super.onInitializeAccessibilityNodeInfo(host, info);
        SpanLink singleLink = singleLink(host);
        if (singleLink == null) {
            return;
        }
        info.p(true);
        info.a.removeAction((AccessibilityNodeInfo.AccessibilityAction) androidx.core.view.accessibility.a.f1555g.a);
        info.b(new androidx.core.view.accessibility.a(16, singleLink.getLabel()));
    }

    @Override // androidx.core.view.b
    public boolean performAccessibilityAction(@NotNull View host, int action, Bundle args) {
        SpanLink singleLink;
        Intrinsics.checkNotNullParameter(host, "host");
        if (action != 16 || (singleLink = singleLink(host)) == null) {
            return super.performAccessibilityAction(host, action, args);
        }
        singleLink.getSpan().onClick(host);
        return true;
    }
}
