package op;

import java.lang.annotation.Annotation;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g extends e implements yp.a {

    /* renamed from: b, reason: collision with root package name */
    public final Object[] f16161b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(hq.e eVar, Object[] values) {
        super(eVar);
        Intrinsics.checkNotNullParameter(values, "values");
        this.f16161b = values;
    }

    public final ArrayList a() {
        Object[] objArr = this.f16161b;
        ArrayList arrayList = new ArrayList(objArr.length);
        for (Object value : objArr) {
            Intrinsics.checkNotNull(value);
            Intrinsics.checkNotNullParameter(value, "value");
            arrayList.add(c.e(value.getClass()) ? new s(null, (Enum) value) : value instanceof Annotation ? new f(null, (Annotation) value) : value instanceof Object[] ? new g(null, (Object[]) value) : value instanceof Class ? new o(null, (Class) value) : new u(null, value));
        }
        return arrayList;
    }
}
