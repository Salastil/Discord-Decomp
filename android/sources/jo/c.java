package jo;

import fo.r;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class c implements Continuation, CoroutineStackFrame {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    private static final b f12992e = new b(null);

    /* renamed from: i, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f12993i = AtomicReferenceFieldUpdater.newUpdater(c.class, Object.class, "result");

    /* renamed from: d, reason: collision with root package name */
    public final Continuation f12994d;
    private volatile Object result;

    public c(Continuation delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        ko.a aVar = ko.a.f13465e;
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f12994d = delegate;
        this.result = aVar;
    }

    public final Object a() {
        Object obj = this.result;
        ko.a aVar = ko.a.f13465e;
        if (obj == aVar) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f12993i;
            ko.a aVar2 = ko.a.f13464d;
            while (!atomicReferenceFieldUpdater.compareAndSet(this, aVar, aVar2)) {
                if (atomicReferenceFieldUpdater.get(this) != aVar) {
                    obj = this.result;
                }
            }
            return ko.a.f13464d;
        }
        if (obj == ko.a.f13466i) {
            return ko.a.f13464d;
        }
        if (obj instanceof r) {
            throw ((r) obj).f8832d;
        }
        return obj;
    }

    @Override // kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public final CoroutineStackFrame getCallerFrame() {
        Continuation continuation = this.f12994d;
        if (continuation instanceof CoroutineStackFrame) {
            return (CoroutineStackFrame) continuation;
        }
        return null;
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return this.f12994d.getContext();
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        while (true) {
            Object obj2 = this.result;
            ko.a aVar = ko.a.f13465e;
            if (obj2 == aVar) {
                AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f12993i;
                while (!atomicReferenceFieldUpdater.compareAndSet(this, aVar, obj)) {
                    if (atomicReferenceFieldUpdater.get(this) != aVar) {
                        break;
                    }
                }
                return;
            }
            ko.a aVar2 = ko.a.f13464d;
            if (obj2 != aVar2) {
                throw new IllegalStateException("Already resumed");
            }
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = f12993i;
            ko.a aVar3 = ko.a.f13466i;
            while (!atomicReferenceFieldUpdater2.compareAndSet(this, aVar2, aVar3)) {
                if (atomicReferenceFieldUpdater2.get(this) != aVar2) {
                    break;
                }
            }
            this.f12994d.resumeWith(obj);
            return;
        }
    }

    public final String toString() {
        return "SafeContinuation for " + this.f12994d;
    }
}
