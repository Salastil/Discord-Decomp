package com.discord.misc.utilities.touch;

import android.text.Spanned;
import android.view.MotionEvent;
import android.widget.TextView;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import yo.j;

@Metadata(d1 = {"\u00008\n\u0000\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\u001aE\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\n\b\u0000\u0010\u0002\u0018\u0001*\u00020\u0003*\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0014\b\n\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u0002H\u0002\u0012\u0004\u0012\u00020\t0\bH\u0086\bø\u0001\u0000¢\u0006\u0002\u0010\n\u001aS\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\u00020\f\"\b\b\u0000\u0010\u0002*\u00020\u0003*\u00020\r2\f\u0010\u000e\u001a\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00102\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u0002H\u0002\u0012\u0004\u0012\u00020\t0\bH\u0001¢\u0006\u0002\u0010\u0012\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0013"}, d2 = {"getSpansUnderMotionEvent", "", "T", "", "Landroid/widget/TextView;", "event", "Landroid/view/MotionEvent;", "matchesOutsideLineBounds", "Lkotlin/Function1;", "", "(Landroid/widget/TextView;Landroid/view/MotionEvent;Lkotlin/jvm/functions/Function1;)[Ljava/lang/Object;", "filterSpansOutsideLineBounds", "", "Landroid/text/Spanned;", "spans", "lineStart", "", "lineEnd", "(Landroid/text/Spanned;[Ljava/lang/Object;IILkotlin/jvm/functions/Function1;)Ljava/util/List;", "misc_utilities_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTextViewTouchUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TextViewTouchUtils.kt\ncom/discord/misc/utilities/touch/TextViewTouchUtilsKt\n+ 2 ArraysJVM.kt\nkotlin/collections/ArraysKt__ArraysJVMKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,84:1\n37#2:85\n36#2,3:86\n3829#3:89\n4344#3:90\n12637#3,2:91\n4345#3:93\n*S KotlinDebug\n*F\n+ 1 TextViewTouchUtils.kt\ncom/discord/misc/utilities/touch/TextViewTouchUtilsKt\n*L\n56#1:85\n56#1:86,3\n76#1:89\n76#1:90\n78#1:91,2\n76#1:93\n*E\n"})
/* loaded from: classes.dex */
public final class TextViewTouchUtilsKt {
    @NotNull
    public static final <T> List<T> filterSpansOutsideLineBounds(@NotNull Spanned spanned, @NotNull T[] spans, int i5, int i6, @NotNull Function1<? super T, Boolean> matchesOutsideLineBounds) {
        Intrinsics.checkNotNullParameter(spanned, "<this>");
        Intrinsics.checkNotNullParameter(spans, "spans");
        Intrinsics.checkNotNullParameter(matchesOutsideLineBounds, "matchesOutsideLineBounds");
        if (spans.length == 0) {
            return m0.f13512d;
        }
        PaintsFullLineWidth[] paintsFullLineWidthArr = (PaintsFullLineWidth[]) spanned.getSpans(i5, i6, PaintsFullLineWidth.class);
        Intrinsics.checkNotNull(paintsFullLineWidthArr);
        if (paintsFullLineWidthArr.length == 0) {
            return m0.f13512d;
        }
        ArrayList arrayList = new ArrayList();
        for (T t5 : spans) {
            if (((Boolean) matchesOutsideLineBounds.invoke(t5)).booleanValue()) {
                int length = paintsFullLineWidthArr.length;
                int i10 = 0;
                while (true) {
                    if (i10 < length) {
                        PaintsFullLineWidth paintsFullLineWidth = paintsFullLineWidthArr[i10];
                        if (spanned.getSpanStart(paintsFullLineWidth) >= spanned.getSpanStart(t5) && spanned.getSpanEnd(paintsFullLineWidth) <= spanned.getSpanEnd(t5)) {
                            arrayList.add(t5);
                            break;
                        }
                        i10++;
                    }
                }
            }
        }
        return arrayList;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final /* synthetic */ <T> T[] getSpansUnderMotionEvent(TextView textView, MotionEvent event, Function1<? super T, Boolean> matchesOutsideLineBounds) {
        Intrinsics.checkNotNullParameter(textView, "<this>");
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(matchesOutsideLineBounds, "matchesOutsideLineBounds");
        CharSequence text = textView.getText();
        Spanned spanned = text instanceof Spanned ? (Spanned) text : null;
        if (spanned == null) {
            Intrinsics.reifiedOperationMarker(0, "T");
            return (T[]) new Object[0];
        }
        int scrollX = textView.getScrollX() + (((int) event.getX()) - textView.getTotalPaddingLeft());
        int lineForVertical = textView.getLayout().getLineForVertical(textView.getScrollY() + (((int) event.getY()) - textView.getTotalPaddingTop()));
        float lineRight = textView.getLayout().getLineRight(lineForVertical);
        float lineLeft = textView.getLayout().getLineLeft(lineForVertical);
        float f2 = scrollX;
        boolean z5 = f2 > lineRight || (scrollX >= 0 && f2 < lineLeft);
        int offsetForHorizontal = textView.getLayout().getOffsetForHorizontal(lineForVertical, j.c(f2, lineLeft, lineRight));
        Intrinsics.reifiedOperationMarker(4, "T");
        T[] tArr = (T[]) spanned.getSpans(offsetForHorizontal, offsetForHorizontal, Object.class);
        if (!z5) {
            Intrinsics.checkNotNull(tArr);
            return tArr;
        }
        Intrinsics.checkNotNull(tArr);
        List filterSpansOutsideLineBounds = filterSpansOutsideLineBounds(spanned, tArr, textView.getLayout().getLineStart(lineForVertical), textView.getLayout().getLineEnd(lineForVertical), matchesOutsideLineBounds);
        Intrinsics.reifiedOperationMarker(0, "T?");
        return (T[]) filterSpansOutsideLineBounds.toArray(new Object[0]);
    }

    public static /* synthetic */ Object[] getSpansUnderMotionEvent$default(TextView textView, MotionEvent event, Function1 matchesOutsideLineBounds, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            Intrinsics.needClassReification();
            matchesOutsideLineBounds = TextViewTouchUtilsKt$getSpansUnderMotionEvent$1.INSTANCE;
        }
        Intrinsics.checkNotNullParameter(textView, "<this>");
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(matchesOutsideLineBounds, "matchesOutsideLineBounds");
        CharSequence text = textView.getText();
        Spanned spanned = text instanceof Spanned ? (Spanned) text : null;
        if (spanned == null) {
            Intrinsics.reifiedOperationMarker(0, "T");
            return new Object[0];
        }
        int scrollX = textView.getScrollX() + (((int) event.getX()) - textView.getTotalPaddingLeft());
        int lineForVertical = textView.getLayout().getLineForVertical(textView.getScrollY() + (((int) event.getY()) - textView.getTotalPaddingTop()));
        float lineRight = textView.getLayout().getLineRight(lineForVertical);
        float lineLeft = textView.getLayout().getLineLeft(lineForVertical);
        float f2 = scrollX;
        boolean z5 = f2 > lineRight || (scrollX >= 0 && f2 < lineLeft);
        int offsetForHorizontal = textView.getLayout().getOffsetForHorizontal(lineForVertical, j.c(f2, lineLeft, lineRight));
        Intrinsics.reifiedOperationMarker(4, "T");
        Object[] spans = spanned.getSpans(offsetForHorizontal, offsetForHorizontal, Object.class);
        if (!z5) {
            Intrinsics.checkNotNull(spans);
            return spans;
        }
        Intrinsics.checkNotNull(spans);
        List filterSpansOutsideLineBounds = filterSpansOutsideLineBounds(spanned, spans, textView.getLayout().getLineStart(lineForVertical), textView.getLayout().getLineEnd(lineForVertical), matchesOutsideLineBounds);
        Intrinsics.reifiedOperationMarker(0, "T?");
        return filterSpansOutsideLineBounds.toArray(new Object[0]);
    }
}
