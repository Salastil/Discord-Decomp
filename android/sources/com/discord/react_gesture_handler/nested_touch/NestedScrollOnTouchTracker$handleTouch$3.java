package com.discord.react_gesture_handler.nested_touch;

import android.view.View;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchTracker;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchTracker$handleTouch$3", f = "NestedScrollOnTouchTracker.kt", l = {119, 125}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class NestedScrollOnTouchTracker$handleTouch$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ View $view;
    int label;
    final /* synthetic */ NestedScrollOnTouchTracker this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NestedScrollOnTouchTracker$handleTouch$3(NestedScrollOnTouchTracker nestedScrollOnTouchTracker, View view, Continuation continuation) {
        super(2, continuation);
        this.this$0 = nestedScrollOnTouchTracker;
        this.$view = view;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new NestedScrollOnTouchTracker$handleTouch$3(this.this$0, this.$view, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:25:0x004c, code lost:
    
        if (nr.x.j(r4, r8) == r0) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x004e, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x002d, code lost:
    
        if (nr.x.j(r4, r8) == r0) goto L15;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        NestedScrollOnTouchTracker.Companion companion;
        NestedScrollOnTouchTracker.Companion companion2;
        NestedScrollOnTouchTracker.Companion companion3;
        boolean z5;
        NestedClickableSpan nestedClickableSpan;
        View.OnClickListener onClickListener;
        View.OnClickListener onClickListener2;
        NestedClickableSpan nestedClickableSpan2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            companion = NestedScrollOnTouchTracker.Companion;
            long double_click_min_time = companion.getDOUBLE_CLICK_MIN_TIME();
            this.label = 1;
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                this.this$0.consideringDoubleClick = false;
                z5 = this.this$0.activeClick;
                if (z5) {
                    this.this$0.cleanupDoubleClickJob();
                } else {
                    nestedClickableSpan = this.this$0.spanBeingTouched;
                    if (nestedClickableSpan != null) {
                        nestedClickableSpan2 = this.this$0.spanBeingTouched;
                        if (nestedClickableSpan2 != null) {
                            nestedClickableSpan2.onClick(this.$view);
                        }
                    } else {
                        onClickListener = this.this$0.onClickListener;
                        if (onClickListener != null) {
                            this.$view.setPressed(true);
                            onClickListener2 = this.this$0.onClickListener;
                            onClickListener2.onClick(this.$view);
                        }
                    }
                    this.this$0.cleanUp(this.$view);
                }
                return Unit.a;
            }
            ki.b.R(obj);
        }
        this.this$0.consideringDoubleClick = true;
        companion2 = NestedScrollOnTouchTracker.Companion;
        long double_click_time = companion2.getDOUBLE_CLICK_TIME();
        companion3 = NestedScrollOnTouchTracker.Companion;
        long double_click_min_time2 = double_click_time - companion3.getDOUBLE_CLICK_MIN_TIME();
        this.label = 2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((NestedScrollOnTouchTracker$handleTouch$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
