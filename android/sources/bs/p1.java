package bs;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class p1 extends u {

    /* renamed from: b, reason: collision with root package name */
    public final KClass f3224b;

    /* renamed from: c, reason: collision with root package name */
    public final c f3225c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p1(KClass kClass, KSerializer eSerializer) {
        super(eSerializer);
        Intrinsics.checkNotNullParameter(kClass, "kClass");
        Intrinsics.checkNotNullParameter(eSerializer, "eSerializer");
        this.f3224b = kClass;
        SerialDescriptor elementDesc = eSerializer.getDescriptor();
        Intrinsics.checkNotNullParameter(elementDesc, "elementDesc");
        this.f3225c = new c(elementDesc, 0);
    }

    @Override // bs.a
    public final Object a() {
        return new ArrayList();
    }

    @Override // bs.a
    public final int b(Object obj) {
        ArrayList arrayList = (ArrayList) obj;
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        return arrayList.size();
    }

    @Override // bs.a
    public final void c(int i5, Object obj) {
        ArrayList arrayList = (ArrayList) obj;
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        arrayList.ensureCapacity(i5);
    }

    @Override // bs.a
    public final Iterator d(Object obj) {
        Object[] objArr = (Object[]) obj;
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        return ArrayIteratorKt.iterator(objArr);
    }

    @Override // bs.a
    public final int e(Object obj) {
        Object[] objArr = (Object[]) obj;
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        return objArr.length;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return this.f3225c;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        Intrinsics.checkNotNullParameter(null, "<this>");
        kotlin.collections.u.b(null);
        throw null;
    }

    @Override // bs.a
    public final Object j(Object obj) {
        ArrayList arrayList = (ArrayList) obj;
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        KClass eClass = this.f3224b;
        Intrinsics.checkNotNullParameter(eClass, "eClass");
        Object newInstance = Array.newInstance((Class<?>) com.facebook.imagepipeline.nativecode.c.z(eClass), arrayList.size());
        Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type kotlin.Array<E of kotlinx.serialization.internal.PlatformKt.toNativeArrayImpl>");
        Object[] array = arrayList.toArray((Object[]) newInstance);
        Intrinsics.checkNotNullExpressionValue(array, "toArray(...)");
        return array;
    }

    @Override // bs.u
    public final void k(int i5, Object obj, Object obj2) {
        ArrayList arrayList = (ArrayList) obj;
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        arrayList.add(i5, obj2);
    }
}
