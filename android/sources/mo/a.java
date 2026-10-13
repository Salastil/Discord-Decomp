package mo;

import java.io.Serializable;
import kotlin.collections.c;
import kotlin.collections.f;
import kotlin.collections.x;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends f implements EnumEntries, Serializable {

    /* renamed from: e, reason: collision with root package name */
    public final Enum[] f14569e;

    public a(Enum[] entries) {
        Intrinsics.checkNotNullParameter(entries, "entries");
        this.f14569e = entries;
    }

    @Override // kotlin.collections.a
    public final int a() {
        return this.f14569e.length;
    }

    @Override // kotlin.collections.a, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        if (!(obj instanceof Enum)) {
            return false;
        }
        Enum element = (Enum) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        return ((Enum) x.v(element.ordinal(), this.f14569e)) == element;
    }

    @Override // kotlin.collections.f, java.util.List
    public final Object get(int i5) {
        c cVar = f.f13497d;
        Enum[] enumArr = this.f14569e;
        int length = enumArr.length;
        cVar.getClass();
        c.b(i5, length);
        return enumArr[i5];
    }

    @Override // kotlin.collections.f, java.util.List
    public final int indexOf(Object obj) {
        if (!(obj instanceof Enum)) {
            return -1;
        }
        Enum element = (Enum) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        int ordinal = element.ordinal();
        if (((Enum) x.v(ordinal, this.f14569e)) == element) {
            return ordinal;
        }
        return -1;
    }

    @Override // kotlin.collections.f, java.util.List
    public final int lastIndexOf(Object obj) {
        if (!(obj instanceof Enum)) {
            return -1;
        }
        Enum element = (Enum) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        return indexOf(element);
    }
}
