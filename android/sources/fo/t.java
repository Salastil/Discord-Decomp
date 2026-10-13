package fo;

import java.io.Serializable;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Lazy;
import kotlin.jvm.functions.Function0;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class t implements Lazy, Serializable {

    /* renamed from: i, reason: collision with root package name */
    @NotNull
    public static final s f8833i = new s(null);

    /* renamed from: v, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f8834v = AtomicReferenceFieldUpdater.newUpdater(t.class, Object.class, "e");

    /* renamed from: d, reason: collision with root package name */
    public volatile Function0 f8835d;

    /* renamed from: e, reason: collision with root package name */
    public volatile Object f8836e;

    @Override // kotlin.Lazy
    public final Object getValue() {
        Object obj = this.f8836e;
        h0 h0Var = h0.a;
        if (obj != h0Var) {
            return obj;
        }
        Function0 function0 = this.f8835d;
        if (function0 != null) {
            Object invoke = function0.invoke();
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f8834v;
            while (!atomicReferenceFieldUpdater.compareAndSet(this, h0Var, invoke)) {
                if (atomicReferenceFieldUpdater.get(this) != h0Var) {
                }
            }
            this.f8835d = null;
            return invoke;
        }
        return this.f8836e;
    }

    public final String toString() {
        return this.f8836e != h0.a ? String.valueOf(getValue()) : "Lazy value not initialized yet.";
    }
}
