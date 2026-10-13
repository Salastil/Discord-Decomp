package fo;

import java.io.Serializable;
import kotlin.Lazy;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m0 implements Lazy, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public Function0 f8830d;

    /* renamed from: e, reason: collision with root package name */
    public Object f8831e;

    @Override // kotlin.Lazy
    public final Object getValue() {
        if (this.f8831e == h0.a) {
            Function0 function0 = this.f8830d;
            Intrinsics.checkNotNull(function0);
            this.f8831e = function0.invoke();
            this.f8830d = null;
        }
        return this.f8831e;
    }

    public final String toString() {
        return this.f8831e != h0.a ? String.valueOf(getValue()) : "Lazy value not initialized yet.";
    }
}
