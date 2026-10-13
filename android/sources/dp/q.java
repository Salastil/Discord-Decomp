package dp;

import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.util.Arrays;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class q extends w {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7665e = 0;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f7666f;

    public /* synthetic */ q(Method method, boolean z5, int i5) {
        this(method, (i5 & 2) != 0 ? !Modifier.isStatic(method.getModifiers()) : z5, method.getGenericParameterTypes());
    }

    @Override // dp.g
    public Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        d(args);
        ((Field) this.a).set(this.f7673c != null ? kotlin.collections.x.s(args) : null, kotlin.collections.x.B(args));
        return Unit.a;
    }

    @Override // dp.w
    public void d(Object[] args) {
        switch (this.f7665e) {
            case 0:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                if (this.f7666f && kotlin.collections.x.B(args) == null) {
                    throw new IllegalArgumentException("null is not allowed as a value for this property.");
                }
                return;
            default:
                super.d(args);
                return;
        }
    }

    public Object f(Object obj, Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        return this.f7666f ? Unit.a : ((Method) this.a).invoke(obj, Arrays.copyOf(args, args.length));
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public q(Method method, boolean z5, Type[] typeArr) {
        super(method, r0, z5 ? method.getDeclaringClass() : null, typeArr);
        Type genericReturnType = method.getGenericReturnType();
        Intrinsics.checkNotNullExpressionValue(genericReturnType, "getGenericReturnType(...)");
        this.f7666f = Intrinsics.areEqual(genericReturnType, Void.TYPE);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public q(Field field, boolean z5, boolean z6) {
        super(field, TYPE, z6 ? field.getDeclaringClass() : null, new Type[]{field.getGenericType()});
        Class TYPE = Void.TYPE;
        Intrinsics.checkNotNullExpressionValue(TYPE, "TYPE");
        this.f7666f = z5;
    }
}
