package zo;

import java.lang.reflect.GenericDeclaration;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KType;

/* loaded from: classes3.dex */
public final class z implements TypeVariable, Type {

    /* renamed from: d, reason: collision with root package name */
    public final t f21341d;

    public z(t typeParameter) {
        Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
        this.f21341d = typeParameter;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof TypeVariable) || !Intrinsics.areEqual(this.f21341d.getName(), ((TypeVariable) obj).getName())) {
            return false;
        }
        getGenericDeclaration();
        throw null;
    }

    @Override // java.lang.reflect.TypeVariable
    public final Type[] getBounds() {
        List upperBounds = this.f21341d.getUpperBounds();
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(upperBounds, 10));
        Iterator it = upperBounds.iterator();
        while (it.hasNext()) {
            arrayList.add(c0.m((KType) it.next(), true));
        }
        return (Type[]) arrayList.toArray(new Type[0]);
    }

    @Override // java.lang.reflect.TypeVariable
    public final GenericDeclaration getGenericDeclaration() {
        throw new fo.o(a3.e.k("An operation is not implemented: ", "getGenericDeclaration() is not yet supported for type variables created from KType: " + this.f21341d));
    }

    @Override // java.lang.reflect.TypeVariable
    public final String getName() {
        return this.f21341d.getName();
    }

    @Override // java.lang.reflect.Type
    public final String getTypeName() {
        return this.f21341d.getName();
    }

    public final int hashCode() {
        this.f21341d.getName().hashCode();
        getGenericDeclaration();
        throw null;
    }

    public final String toString() {
        return this.f21341d.getName();
    }
}
