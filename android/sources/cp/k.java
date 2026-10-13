package cp;

import java.lang.reflect.Field;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k extends zk.a {
    public final Field j;

    public k(Field field) {
        Intrinsics.checkNotNullParameter(field, "field");
        this.j = field;
    }

    @Override // zk.a
    public final String d() {
        StringBuilder sb2 = new StringBuilder();
        Field field = this.j;
        String name = field.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        sb2.append(rp.x.a(name));
        sb2.append("()");
        Class<?> type = field.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        sb2.append(op.c.b(type));
        return sb2.toString();
    }
}
