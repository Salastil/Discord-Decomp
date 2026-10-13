package com.discord.react_gesture_handler.nested_touch;

import android.view.View;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchTracker;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchTracker$handleTouch$2", f = "NestedScrollOnTouchTracker.kt", l = {83, 91}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class NestedScrollOnTouchTracker$handleTouch$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ View $view;
    int label;
    final /* synthetic */ NestedScrollOnTouchTracker this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NestedScrollOnTouchTracker$handleTouch$2(NestedScrollOnTouchTracker nestedScrollOnTouchTracker, View view, Continuation continuation) {
        super(2, continuation);
        this.this$0 = nestedScrollOnTouchTracker;
        this.$view = view;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new NestedScrollOnTouchTracker$handleTouch$2(this.this$0, this.$view, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x0093, code lost:
    
        r9 = r8.this$0.spanBeingTouched;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x005c, code lost:
    
        if (nr.x.j(r4, r8) == r0) goto L20;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x005e, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x002d, code lost:
    
        if (nr.x.j(r4, r8) == r0) goto L20;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        NestedScrollOnTouchTracker.Companion companion;
        NestedClickableSpan nestedClickableSpan;
        NestedScrollOnTouchTracker.Companion companion2;
        NestedScrollOnTouchTracker.Companion companion3;
        View.OnLongClickListener onLongClickListener;
        NestedClickableSpan nestedClickableSpan2;
        View.OnLongClickListener onLongClickListener2;
        NestedClickableSpan nestedClickableSpan3;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            companion = NestedScrollOnTouchTracker.Companion;
            long click_max_down_time = companion.getCLICK_MAX_DOWN_TIME();
            this.label = 1;
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                nestedClickableSpan2 = this.this$0.spanBeingTouched;
                if (Intrinsics.areEqual(nestedClickableSpan2 != null ? Boolean.valueOf(nestedClickableSpan2.onLongClick(this.$view)) : null, Boolean.TRUE)) {
                    this.this$0.activeClick = false;
                } else {
                    onLongClickListener2 = this.this$0.onLongClickListener;
                    if ((onLongClickListener2 == null || !onLongClickListener2.onLongClick(this.$view)) && nestedClickableSpan3 != null) {
                        nestedClickableSpan3.onClick(this.$view);
                    }
                    this.this$0.activeClick = false;
                }
                this.this$0.cleanUp(this.$view);
                return Unit.a;
            }
            ki.b.R(obj);
        }
        nestedClickableSpan = this.this$0.spanBeingTouched;
        if (nestedClickableSpan == null) {
            onLongClickListener = this.this$0.onLongClickListener;
            if (onLongClickListener != null) {
                this.$view.setPressed(true);
            }
        }
        companion2 = NestedScrollOnTouchTracker.Companion;
        long long_press_down_time = companion2.getLONG_PRESS_DOWN_TIME();
        companion3 = NestedScrollOnTouchTracker.Companion;
        long click_max_down_time2 = long_press_down_time - companion3.getCLICK_MAX_DOWN_TIME();
        this.label = 2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((NestedScrollOnTouchTracker$handleTouch$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
