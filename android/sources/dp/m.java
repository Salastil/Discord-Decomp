package dp;

import java.lang.reflect.Field;
import java.lang.reflect.Type;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class m extends w {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public m(Field field, boolean z5) {
        super(field, r0, z5 ? field.getDeclaringClass() : null, new Type[0]);
        Type genericType = field.getGenericType();
        Intrinsics.checkNotNullExpressionValue(genericType, "getGenericType(...)");
    }

    @Override // dp.g
    public Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        d(args);
        return ((Field) this.a).get(this.f7673c != null ? kotlin.collections.x.s(args) : null);
    }
}
