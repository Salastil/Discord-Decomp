package app.rive.core;

import app.rive.core.DeferredResult;
import fo.n;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.sync.Mutex;
import org.jetbrains.annotations.NotNull;
import wr.b;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u0000*\u0004\b\u0000\u0010\u00012\u00020\u0002B#\u0012\u001c\u0010\u0003\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u0005\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0004¢\u0006\u0002\u0010\u0006J\u000e\u0010\f\u001a\u00028\u0000H\u0086@¢\u0006\u0002\u0010\rR&\u0010\u0003\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u0005\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0004X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0007R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\n\u001a\b\u0012\u0004\u0012\u00028\u00000\u000bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lapp/rive/core/SuspendLazy;", "T", "", "block", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "(Lkotlin/jvm/functions/Function1;)V", "Lkotlin/jvm/functions/Function1;", "mutex", "Lkotlinx/coroutines/sync/Mutex;", "result", "Lapp/rive/core/DeferredResult;", "await", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSuspendLazy.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SuspendLazy.kt\napp/rive/core/SuspendLazy\n+ 2 Mutex.kt\nkotlinx/coroutines/sync/MutexKt\n*L\n1#1,55:1\n116#2,10:56\n*S KotlinDebug\n*F\n+ 1 SuspendLazy.kt\napp/rive/core/SuspendLazy\n*L\n35#1:56,10\n*E\n"})
/* loaded from: classes.dex */
public final class SuspendLazy<T> {
    public static final int $stable = 8;

    @NotNull
    private final Function1<Continuation, Object> block;

    @NotNull
    private final Mutex mutex;

    @NotNull
    private volatile DeferredResult<? extends T> result;

    /* JADX WARN: Multi-variable type inference failed */
    public SuspendLazy(@NotNull Function1<? super Continuation, ? extends Object> block) {
        Intrinsics.checkNotNullParameter(block, "block");
        this.block = block;
        this.result = DeferredResult.Uninitialized.INSTANCE;
        this.mutex = new b();
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x007e A[Catch: all -> 0x0085, TryCatch #2 {all -> 0x0085, blocks: (B:32:0x0078, B:34:0x007e, B:35:0x0087, B:37:0x008b, B:39:0x00c1, B:40:0x00c6, B:49:0x00c7, B:50:0x00cd), top: B:31:0x0078 }] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0087 A[Catch: all -> 0x0085, TryCatch #2 {all -> 0x0085, blocks: (B:32:0x0078, B:34:0x007e, B:35:0x0087, B:37:0x008b, B:39:0x00c1, B:40:0x00c6, B:49:0x00c7, B:50:0x00cd), top: B:31:0x0078 }] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object await(@NotNull Continuation continuation) {
        SuspendLazy$await$1 suspendLazy$await$1;
        int i5;
        Mutex mutex;
        SuspendLazy<T> suspendLazy;
        DeferredResult<? extends T> deferredResult;
        Mutex mutex2;
        Throwable th2;
        SuspendLazy<T> suspendLazy2;
        Object value;
        try {
            if (continuation instanceof SuspendLazy$await$1) {
                suspendLazy$await$1 = (SuspendLazy$await$1) continuation;
                int i6 = suspendLazy$await$1.label;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    suspendLazy$await$1.label = i6 - Integer.MIN_VALUE;
                    Object obj = suspendLazy$await$1.result;
                    ko.a aVar = ko.a.f13464d;
                    i5 = suspendLazy$await$1.label;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        DeferredResult<? extends T> deferredResult2 = this.result;
                        if (deferredResult2 instanceof DeferredResult.Success) {
                            return ((DeferredResult.Success) deferredResult2).getValue();
                        }
                        if (deferredResult2 instanceof DeferredResult.Failure) {
                            throw ((DeferredResult.Failure) deferredResult2).getError();
                        }
                        if (!Intrinsics.areEqual(deferredResult2, DeferredResult.Uninitialized.INSTANCE)) {
                            throw new n();
                        }
                        mutex = this.mutex;
                        suspendLazy$await$1.L$0 = this;
                        suspendLazy$await$1.L$1 = mutex;
                        suspendLazy$await$1.label = 1;
                        if (mutex.a(suspendLazy$await$1) != aVar) {
                            suspendLazy = this;
                        }
                        return aVar;
                    }
                    if (i5 != 1) {
                        if (i5 != 2) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        mutex2 = (Mutex) suspendLazy$await$1.L$1;
                        suspendLazy2 = (SuspendLazy) suspendLazy$await$1.L$0;
                        try {
                            ki.b.R(obj);
                            suspendLazy2.result = new DeferredResult.Success(obj);
                            value = obj;
                            mutex = mutex2;
                            mutex.b(null);
                            return value;
                        } catch (Throwable th3) {
                            th2 = th3;
                            try {
                                suspendLazy2.result = new DeferredResult.Failure(th2);
                                throw th2;
                            } catch (Throwable th4) {
                                th = th4;
                                mutex = mutex2;
                                mutex.b(null);
                                throw th;
                            }
                        }
                    }
                    Mutex mutex3 = (Mutex) suspendLazy$await$1.L$1;
                    suspendLazy = (SuspendLazy) suspendLazy$await$1.L$0;
                    ki.b.R(obj);
                    mutex = mutex3;
                    deferredResult = suspendLazy.result;
                    if (!(deferredResult instanceof DeferredResult.Success)) {
                        value = ((DeferredResult.Success) deferredResult).getValue();
                        mutex.b(null);
                        return value;
                    }
                    if (deferredResult instanceof DeferredResult.Failure) {
                        throw ((DeferredResult.Failure) deferredResult).getError();
                    }
                    if (!Intrinsics.areEqual(deferredResult, DeferredResult.Uninitialized.INSTANCE)) {
                        throw new n();
                    }
                    try {
                        Function1<Continuation, Object> function1 = suspendLazy.block;
                        suspendLazy$await$1.L$0 = suspendLazy;
                        suspendLazy$await$1.L$1 = mutex;
                        suspendLazy$await$1.label = 2;
                        Object invoke = function1.invoke(suspendLazy$await$1);
                        if (invoke != aVar) {
                            mutex2 = mutex;
                            obj = invoke;
                            suspendLazy2 = suspendLazy;
                            suspendLazy2.result = new DeferredResult.Success(obj);
                            value = obj;
                            mutex = mutex2;
                            mutex.b(null);
                            return value;
                        }
                        return aVar;
                    } catch (Throwable th5) {
                        mutex2 = mutex;
                        th2 = th5;
                        suspendLazy2 = suspendLazy;
                        suspendLazy2.result = new DeferredResult.Failure(th2);
                        throw th2;
                    }
                }
            }
            deferredResult = suspendLazy.result;
            if (!(deferredResult instanceof DeferredResult.Success)) {
            }
        } catch (Throwable th6) {
            th = th6;
            mutex.b(null);
            throw th;
        }
        suspendLazy$await$1 = new SuspendLazy$await$1(this, continuation);
        Object obj2 = suspendLazy$await$1.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = suspendLazy$await$1.label;
        if (i5 != 0) {
        }
    }
}
