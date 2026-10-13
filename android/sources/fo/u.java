package fo;

import java.io.Serializable;
import kotlin.Lazy;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class u implements Lazy, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public Function0 f8837d;

    /* renamed from: e, reason: collision with root package name */
    public volatile Object f8838e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8839i;

    public u(Function0 initializer, Object obj, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        obj = (i5 & 2) != 0 ? null : obj;
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        this.f8837d = initializer;
        this.f8838e = h0.a;
        this.f8839i = obj == null ? this : obj;
    }

    @Override // kotlin.Lazy
    public final Object getValue() {
        Object obj;
        Object obj2 = this.f8838e;
        h0 h0Var = h0.a;
        if (obj2 != h0Var) {
            return obj2;
        }
        synchronized (this.f8839i) {
            obj = this.f8838e;
            if (obj == h0Var) {
                Function0 function0 = this.f8837d;
                Intrinsics.checkNotNull(function0);
                obj = function0.invoke();
                this.f8838e = obj;
                this.f8837d = null;
            }
        }
        return obj;
    }

    public final String toString() {
        return this.f8838e != h0.a ? String.valueOf(getValue()) : "Lazy value not initialized yet.";
    }
}
