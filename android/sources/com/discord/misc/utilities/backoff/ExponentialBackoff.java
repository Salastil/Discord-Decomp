package com.discord.misc.utilities.backoff;

import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\u0018\u00002\u00020\u0001B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ)\u0010\u000f\u001a\u00020\u00102\u001c\u0010\u0011\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00100\u0013\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0012¢\u0006\u0002\u0010\u0014J\u0006\u0010\u0015\u001a\u00020\u0010J\u0006\u0010\u0016\u001a\u00020\u0010J\b\u0010\u0017\u001a\u00020\u0010H\u0002J\b\u0010\u0018\u001a\u00020\u0010H\u0002JV\u0010\u0019\u001a\u0002H\u001a\"\u0004\b\u0000\u0010\u001a2\u001c\u0010\u001b\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u001a0\u0013\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00122\"\u0010\u001c\u001a\u001e\b\u0001\u0012\u0004\u0012\u0002H\u001a\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u001e0\u0013\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u001dH\u0086@¢\u0006\u0002\u0010\u001fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\r\u001a\u0004\u0018\u00010\u000eX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006 "}, d2 = {"Lcom/discord/misc/utilities/backoff/ExponentialBackoff;", "", "scope", "Lkotlinx/coroutines/CoroutineScope;", "initialDelay", "", "maxDelay", "maxAttempts", "", "<init>", "(Lkotlinx/coroutines/CoroutineScope;JJI)V", "currentDelay", "currentAttempt", "job", "Lkotlinx/coroutines/Job;", "fail", "", "action", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "(Lkotlin/jvm/functions/Function1;)V", "succeed", "cancel", "reset", "cancelCurrentJob", "performBackoff", "T", "networkRequest", "shouldRetry", "Lkotlin/Function2;", "", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function2;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "misc_utilities_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ExponentialBackoff {
    private int currentAttempt;
    private long currentDelay;
    private final long initialDelay;
    private Job job;
    private final int maxAttempts;
    private final long maxDelay;

    @NotNull
    private final CoroutineScope scope;

    public ExponentialBackoff(@NotNull CoroutineScope scope, long j, long j5, int i5) {
        Intrinsics.checkNotNullParameter(scope, "scope");
        this.scope = scope;
        this.initialDelay = j;
        this.maxDelay = j5;
        this.maxAttempts = i5;
        this.currentAttempt = 1;
    }

    private final void cancelCurrentJob() {
        Job job = this.job;
        if (job != null) {
            job.f(null);
        }
    }

    private final void reset() {
        cancelCurrentJob();
        this.currentDelay = 0L;
        this.currentAttempt = 1;
    }

    public final void cancel() {
        reset();
    }

    public final void fail(@NotNull Function1<? super Continuation, ? extends Object> action) {
        long j;
        Intrinsics.checkNotNullParameter(action, "action");
        cancelCurrentJob();
        int i5 = this.currentAttempt;
        if (i5 > this.maxAttempts) {
            throw new MaxAttemptsExceededException(null, 1, null);
        }
        long j5 = this.currentDelay;
        if (j5 == 0) {
            j = this.initialDelay;
            if (j < 1) {
                j = 1;
            }
        } else {
            j = j5 * 2;
        }
        long j7 = this.maxDelay;
        if (j > j7) {
            j = j7;
        }
        this.currentDelay = j;
        this.currentAttempt = i5 + 1;
        this.job = x.t(this.scope, null, new ExponentialBackoff$fail$1(this, action, null), 3);
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0088, code lost:
    
        if (r15 == r1) goto L45;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00cf, code lost:
    
        if (r15 != r1) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0077, code lost:
    
        if (r15 == r1) goto L45;
     */
    /* JADX WARN: Removed duplicated region for block: B:43:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0024  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:30:0x00cf -> B:13:0x0037). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final <T> Object performBackoff(@NotNull Function1<? super Continuation, ? extends Object> function1, @NotNull Function2<? super T, ? super Continuation, ? extends Object> function2, @NotNull Continuation continuation) {
        ExponentialBackoff$performBackoff$1 exponentialBackoff$performBackoff$1;
        int i5;
        Function1<? super Continuation, ? extends Object> function12;
        Function1<? super Continuation, ? extends Object> function13;
        Function2<? super T, ? super Continuation, ? extends Object> function22;
        Object obj;
        if (continuation instanceof ExponentialBackoff$performBackoff$1) {
            exponentialBackoff$performBackoff$1 = (ExponentialBackoff$performBackoff$1) continuation;
            int i6 = exponentialBackoff$performBackoff$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                exponentialBackoff$performBackoff$1.label = i6 - Integer.MIN_VALUE;
                Object obj2 = exponentialBackoff$performBackoff$1.result;
                a aVar = a.f13464d;
                i5 = exponentialBackoff$performBackoff$1.label;
                if (i5 != 0) {
                    b.R(obj2);
                    exponentialBackoff$performBackoff$1.L$0 = function1;
                    exponentialBackoff$performBackoff$1.L$1 = function2;
                    exponentialBackoff$performBackoff$1.label = 1;
                    obj2 = function1.invoke(exponentialBackoff$performBackoff$1);
                } else if (i5 == 1) {
                    function2 = (Function2) exponentialBackoff$performBackoff$1.L$1;
                    function1 = (Function1) exponentialBackoff$performBackoff$1.L$0;
                    b.R(obj2);
                } else {
                    if (i5 == 2) {
                        obj = exponentialBackoff$performBackoff$1.L$2;
                        function2 = (Function2) exponentialBackoff$performBackoff$1.L$1;
                        function12 = (Function1) exponentialBackoff$performBackoff$1.L$0;
                        b.R(obj2);
                        if (!((Boolean) obj2).booleanValue()) {
                            return obj;
                        }
                        int i10 = this.currentAttempt;
                        if (i10 > this.maxAttempts) {
                            throw new MaxAttemptsExceededException(null, 1, null);
                        }
                        long j = this.currentDelay;
                        long j5 = j == 0 ? this.initialDelay : j * 2;
                        long j7 = this.maxDelay;
                        if (j5 > j7) {
                            j5 = j7;
                        }
                        this.currentDelay = j5;
                        this.currentAttempt = i10 + 1;
                        exponentialBackoff$performBackoff$1.L$0 = function12;
                        exponentialBackoff$performBackoff$1.L$1 = function2;
                        exponentialBackoff$performBackoff$1.L$2 = null;
                        exponentialBackoff$performBackoff$1.label = 3;
                        if (x.j(j5, exponentialBackoff$performBackoff$1) != aVar) {
                            function22 = function2;
                            function13 = function12;
                            exponentialBackoff$performBackoff$1.L$0 = function13;
                            exponentialBackoff$performBackoff$1.L$1 = function22;
                            exponentialBackoff$performBackoff$1.label = 4;
                            obj2 = function13.invoke(exponentialBackoff$performBackoff$1);
                        }
                        return aVar;
                    }
                    if (i5 == 3) {
                        function22 = (Function2) exponentialBackoff$performBackoff$1.L$1;
                        function13 = (Function1) exponentialBackoff$performBackoff$1.L$0;
                        b.R(obj2);
                        exponentialBackoff$performBackoff$1.L$0 = function13;
                        exponentialBackoff$performBackoff$1.L$1 = function22;
                        exponentialBackoff$performBackoff$1.label = 4;
                        obj2 = function13.invoke(exponentialBackoff$performBackoff$1);
                    } else {
                        if (i5 != 4) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        function22 = (Function2) exponentialBackoff$performBackoff$1.L$1;
                        function13 = (Function1) exponentialBackoff$performBackoff$1.L$0;
                        b.R(obj2);
                        function12 = function13;
                        function2 = function22;
                        obj = obj2;
                        exponentialBackoff$performBackoff$1.L$0 = function12;
                        exponentialBackoff$performBackoff$1.L$1 = function2;
                        exponentialBackoff$performBackoff$1.L$2 = obj;
                        exponentialBackoff$performBackoff$1.label = 2;
                        obj2 = function2.invoke(obj, exponentialBackoff$performBackoff$1);
                    }
                }
                function12 = function1;
                obj = obj2;
                exponentialBackoff$performBackoff$1.L$0 = function12;
                exponentialBackoff$performBackoff$1.L$1 = function2;
                exponentialBackoff$performBackoff$1.L$2 = obj;
                exponentialBackoff$performBackoff$1.label = 2;
                obj2 = function2.invoke(obj, exponentialBackoff$performBackoff$1);
            }
        }
        exponentialBackoff$performBackoff$1 = new ExponentialBackoff$performBackoff$1(this, continuation);
        Object obj22 = exponentialBackoff$performBackoff$1.result;
        a aVar2 = a.f13464d;
        i5 = exponentialBackoff$performBackoff$1.label;
        if (i5 != 0) {
        }
        function12 = function1;
        obj = obj22;
        exponentialBackoff$performBackoff$1.L$0 = function12;
        exponentialBackoff$performBackoff$1.L$1 = function2;
        exponentialBackoff$performBackoff$1.L$2 = obj;
        exponentialBackoff$performBackoff$1.label = 2;
        obj22 = function2.invoke(obj, exponentialBackoff$performBackoff$1);
    }

    public final void succeed() {
        reset();
    }

    public /* synthetic */ ExponentialBackoff(CoroutineScope coroutineScope, long j, long j5, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(coroutineScope, (i6 & 2) != 0 ? 1000L : j, (i6 & 4) != 0 ? LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES : j5, (i6 & 8) != 0 ? 10 : i5);
    }
}
