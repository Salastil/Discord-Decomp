package com.discord.span.utilities;

import android.text.Spannable;
import android.text.style.LeadingMarginSpan;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\u001a\u0015\u0010\u0000\u001a\u00020\u0001\"\u0006\b\u0000\u0010\u0002\u0018\u0001*\u00020\u0003H\u0086\b\u001a\u0012\u0010\u0004\u001a\u00020\u0005*\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0007\u001a\n\u0010\b\u001a\u00020\u0005*\u00020\u0003¨\u0006\t"}, d2 = {"hasSpan", "", "T", "Landroid/text/Spannable;", "coverWithSpan", "", "what", "", "alignLeadingMarginsToParagraphs", "span_utilities_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSpannableExtensions.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SpannableExtensions.kt\ncom/discord/span/utilities/SpannableExtensionsKt\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,31:1\n13472#2:32\n13473#2:34\n1#3:33\n*S KotlinDebug\n*F\n+ 1 SpannableExtensions.kt\ncom/discord/span/utilities/SpannableExtensionsKt\n*L\n20#1:32\n20#1:34\n*E\n"})
/* loaded from: classes.dex */
public final class SpannableExtensionsKt {
    public static final void alignLeadingMarginsToParagraphs(@NotNull Spannable spannable) {
        Intrinsics.checkNotNullParameter(spannable, "<this>");
        Object[] spans = spannable.getSpans(0, spannable.length(), LeadingMarginSpan.class);
        Intrinsics.checkNotNullExpressionValue(spans, "getSpans(...)");
        for (Object obj : spans) {
            LeadingMarginSpan leadingMarginSpan = (LeadingMarginSpan) obj;
            int spanEnd = spannable.getSpanEnd(leadingMarginSpan);
            if (spanEnd != 0 && spannable.charAt(spanEnd - 1) != '\n') {
                int I = StringsKt.I(spannable, '\n', spanEnd, 4);
                Integer valueOf = Integer.valueOf(I);
                if (I < 0) {
                    valueOf = null;
                }
                int intValue = valueOf != null ? valueOf.intValue() : spannable.length();
                if (intValue != spanEnd) {
                    spannable.setSpan(leadingMarginSpan, spannable.getSpanStart(leadingMarginSpan), intValue, spannable.getSpanFlags(leadingMarginSpan));
                }
            }
        }
    }

    public static final void coverWithSpan(@NotNull Spannable spannable, @NotNull Object what) {
        Intrinsics.checkNotNullParameter(spannable, "<this>");
        Intrinsics.checkNotNullParameter(what, "what");
        spannable.setSpan(what, 0, spannable.length(), 18);
    }

    public static final /* synthetic */ <T> boolean hasSpan(Spannable spannable) {
        Intrinsics.checkNotNullParameter(spannable, "<this>");
        int length = spannable.length();
        Intrinsics.reifiedOperationMarker(4, "T");
        Object[] spans = spannable.getSpans(0, length, Object.class);
        Intrinsics.checkNotNullExpressionValue(spans, "getSpans(...)");
        return !(spans.length == 0);
    }
}
