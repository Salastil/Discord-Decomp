package cp;

import java.lang.ref.SoftReference;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class w1 implements Function0 {

    /* renamed from: i, reason: collision with root package name */
    public static final x1 f6981i = new x1();

    /* renamed from: d, reason: collision with root package name */
    public final Function0 f6982d;

    /* renamed from: e, reason: collision with root package name */
    public volatile SoftReference f6983e;

    public w1(Object obj, Function0 function0) {
        if (function0 == null) {
            throw new IllegalArgumentException("Argument for @NotNull parameter 'initializer' of kotlin/reflect/jvm/internal/ReflectProperties$LazySoftVal.<init> must not be null");
        }
        this.f6983e = null;
        this.f6982d = function0;
        if (obj != null) {
            this.f6983e = new SoftReference(obj);
        }
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Object obj;
        Object obj2 = f6981i;
        SoftReference softReference = this.f6983e;
        if (softReference != null && (obj = softReference.get()) != null) {
            if (obj == obj2) {
                return null;
            }
            return obj;
        }
        Object invoke = this.f6982d.invoke();
        if (invoke != null) {
            obj2 = invoke;
        }
        this.f6983e = new SoftReference(obj2);
        return invoke;
    }
}
