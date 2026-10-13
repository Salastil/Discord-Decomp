package xq;

import a5.h0;
import cp.d0;
import kotlin.collections.b0;

/* loaded from: classes3.dex */
public final class d extends h implements m {

    /* renamed from: v, reason: collision with root package name */
    public volatile e4.c f20536v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ yq.g f20537w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(l lVar, d0 d0Var, yq.g gVar) {
        super(lVar, d0Var);
        this.f20537w = gVar;
        if (lVar == null) {
            d(0);
            throw null;
        }
        this.f20536v = null;
    }

    public static /* synthetic */ void a(int i5) {
        String str = i5 != 2 ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[i5 != 2 ? 2 : 3];
        if (i5 != 2) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$5";
        } else {
            objArr[0] = "value";
        }
        if (i5 != 2) {
            objArr[1] = "recursionDetected";
        } else {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$5";
        }
        if (i5 == 2) {
            objArr[2] = "doPostCompute";
        }
        String format = String.format(str, objArr);
        if (i5 == 2) {
            throw new IllegalArgumentException(format);
        }
    }

    public static /* synthetic */ void d(int i5) {
        String str = i5 != 2 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 2 ? 3 : 2];
        if (i5 == 1) {
            objArr[0] = "computable";
        } else if (i5 != 2) {
            objArr[0] = "storageManager";
        } else {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$LockBasedNotNullLazyValueWithPostCompute";
        }
        if (i5 != 2) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$LockBasedNotNullLazyValueWithPostCompute";
        } else {
            objArr[1] = "invoke";
        }
        if (i5 != 2) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 == 2) {
            throw new IllegalStateException(format);
        }
    }

    @Override // xq.h
    public final void b(Object obj) {
        this.f20536v = new e4.c(obj);
        try {
            if (obj != null) {
                this.f20537w.invoke(obj);
            } else {
                a(2);
                throw null;
            }
        } finally {
            this.f20536v = null;
        }
    }

    @Override // xq.h
    public final h0 c(boolean z5) {
        return new h0(new yq.h(b0.c(ar.l.f2694d)), false, 13);
    }

    @Override // xq.h, kotlin.jvm.functions.Function0
    public final Object invoke() {
        Object invoke;
        e4.c cVar = this.f20536v;
        if (cVar == null || ((Thread) cVar.f7940i) != Thread.currentThread()) {
            invoke = super.invoke();
        } else {
            if (((Thread) cVar.f7940i) != Thread.currentThread()) {
                throw new IllegalStateException("No value in this thread (hasValue should be checked before)");
            }
            invoke = cVar.f7939e;
        }
        if (invoke != null) {
            return invoke;
        }
        d(2);
        throw null;
    }
}
