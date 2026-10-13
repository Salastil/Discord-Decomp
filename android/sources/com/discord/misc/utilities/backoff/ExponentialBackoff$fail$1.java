package com.discord.misc.utilities.backoff;

import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.misc.utilities.backoff.ExponentialBackoff$fail$1", f = "ExponentialBackoff.kt", l = {40, 41}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ExponentialBackoff$fail$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Function1<Continuation, Object> $action;
    int label;
    final /* synthetic */ ExponentialBackoff this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public ExponentialBackoff$fail$1(ExponentialBackoff exponentialBackoff, Function1<? super Continuation, ? extends Object> function1, Continuation continuation) {
        super(2, continuation);
        this.this$0 = exponentialBackoff;
        this.$action = function1;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ExponentialBackoff$fail$1(this.this$0, this.$action, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x0036, code lost:
    
        if (r7.invoke(r6) == r0) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0038, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x002b, code lost:
    
        if (nr.x.j(r4, r6) == r0) goto L15;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        long j;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            j = this.this$0.currentDelay;
            this.label = 1;
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
                return Unit.a;
            }
            b.R(obj);
        }
        Function1<Continuation, Object> function1 = this.$action;
        this.label = 2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ExponentialBackoff$fail$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
