package xq;

import a5.h0;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public class h implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final l f20540d;

    /* renamed from: e, reason: collision with root package name */
    public final Function0 f20541e;

    /* renamed from: i, reason: collision with root package name */
    public volatile Object f20542i;

    public h(l lVar, Function0 function0) {
        if (lVar == null) {
            a(0);
            throw null;
        }
        this.f20542i = k.f20546d;
        this.f20540d = lVar;
        this.f20541e = function0;
    }

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 2 || i5 == 3) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 2 || i5 == 3) ? 2 : 3];
        if (i5 == 1) {
            objArr[0] = "computable";
        } else if (i5 == 2 || i5 == 3) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$LockBasedLazyValue";
        } else {
            objArr[0] = "storageManager";
        }
        if (i5 == 2) {
            objArr[1] = "recursionDetected";
        } else if (i5 != 3) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$LockBasedLazyValue";
        } else {
            objArr[1] = "renderDebugInformation";
        }
        if (i5 != 2 && i5 != 3) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 2 && i5 != 3) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public h0 c(boolean z5) {
        h0 e9 = this.f20540d.e(null, "in a lazy value");
        if (e9 != null) {
            return e9;
        }
        a(2);
        throw null;
    }

    @Override // kotlin.jvm.functions.Function0
    public Object invoke() {
        Object invoke;
        k kVar = k.f20548i;
        k kVar2 = k.f20547e;
        Object obj = this.f20542i;
        if (!(obj instanceof k)) {
            ir.n.l(obj);
            return obj;
        }
        this.f20540d.a.lock();
        try {
            Object obj2 = this.f20542i;
            if (!(obj2 instanceof k)) {
                ir.n.l(obj2);
                return obj2;
            }
            try {
                if (obj2 == kVar2) {
                    this.f20542i = kVar;
                    h0 c6 = c(true);
                    if (!c6.f175e) {
                        invoke = c6.f176i;
                        return invoke;
                    }
                }
                if (obj2 == kVar) {
                    h0 c8 = c(false);
                    if (!c8.f175e) {
                        invoke = c8.f176i;
                        return invoke;
                    }
                }
                invoke = this.f20541e.invoke();
                b(invoke);
                this.f20542i = invoke;
                return invoke;
            } catch (Throwable th2) {
                if (ir.n.j(th2)) {
                    this.f20542i = k.f20546d;
                    throw th2;
                }
                if (this.f20542i == kVar2) {
                    this.f20542i = new ir.m(th2);
                }
                this.f20540d.f20552b.a(th2);
                throw null;
            }
            this.f20542i = kVar2;
        } finally {
            this.f20540d.a.unlock();
        }
    }

    public void b(Object obj) {
    }
}
