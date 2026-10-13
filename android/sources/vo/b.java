package vo;

import kotlin.jvm.internal.Intrinsics;
import kotlin.properties.ReadWriteProperty;
import kotlin.reflect.KProperty;
import s4.h;

/* loaded from: classes3.dex */
public final class b implements ReadWriteProperty {

    /* renamed from: d, reason: collision with root package name */
    public Object f19455d;

    @Override // vo.d
    public final Object getValue(Object obj, KProperty property) {
        Intrinsics.checkNotNullParameter(property, "property");
        Object obj2 = this.f19455d;
        if (obj2 != null) {
            return obj2;
        }
        throw new IllegalStateException("Property " + property.getName() + " should be initialized before get.");
    }

    @Override // kotlin.properties.ReadWriteProperty
    public final void setValue(Object obj, KProperty property, Object value) {
        Intrinsics.checkNotNullParameter(property, "property");
        Intrinsics.checkNotNullParameter(value, "value");
        this.f19455d = value;
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder("NotNullProperty(");
        if (this.f19455d != null) {
            str = "value=" + this.f19455d;
        } else {
            str = "value not initialized yet";
        }
        return h.h(sb2, str, ')');
    }
}
