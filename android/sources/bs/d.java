package bs;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class d extends u {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f3171b;

    /* renamed from: c, reason: collision with root package name */
    public final q0 f3172c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(KSerializer element, char c6) {
        super(element);
        Intrinsics.checkNotNullParameter(element, "element");
    }

    @Override // bs.a
    public final Object a() {
        switch (this.f3171b) {
            case 0:
                return new ArrayList();
            case 1:
                return new HashSet();
            default:
                return new LinkedHashSet();
        }
    }

    @Override // bs.a
    public final int b(Object obj) {
        switch (this.f3171b) {
            case 0:
                ArrayList arrayList = (ArrayList) obj;
                Intrinsics.checkNotNullParameter(arrayList, "<this>");
                return arrayList.size();
            case 1:
                HashSet hashSet = (HashSet) obj;
                Intrinsics.checkNotNullParameter(hashSet, "<this>");
                return hashSet.size();
            default:
                LinkedHashSet linkedHashSet = (LinkedHashSet) obj;
                Intrinsics.checkNotNullParameter(linkedHashSet, "<this>");
                return linkedHashSet.size();
        }
    }

    @Override // bs.a
    public final void c(int i5, Object obj) {
        switch (this.f3171b) {
            case 0:
                ArrayList arrayList = (ArrayList) obj;
                Intrinsics.checkNotNullParameter(arrayList, "<this>");
                arrayList.ensureCapacity(i5);
                break;
            case 1:
                Intrinsics.checkNotNullParameter((HashSet) obj, "<this>");
                break;
            default:
                Intrinsics.checkNotNullParameter((LinkedHashSet) obj, "<this>");
                break;
        }
    }

    @Override // bs.a
    public final Iterator d(Object obj) {
        Collection collection = (Collection) obj;
        Intrinsics.checkNotNullParameter(collection, "<this>");
        return collection.iterator();
    }

    @Override // bs.a
    public final int e(Object obj) {
        Collection collection = (Collection) obj;
        Intrinsics.checkNotNullParameter(collection, "<this>");
        return collection.size();
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        switch (this.f3171b) {
        }
        return (c) this.f3172c;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        switch (this.f3171b) {
            case 0:
                Intrinsics.checkNotNullParameter(null, "<this>");
                return new ArrayList((Collection) null);
            case 1:
                Intrinsics.checkNotNullParameter(null, "<this>");
                return new HashSet((Collection) null);
            default:
                Intrinsics.checkNotNullParameter(null, "<this>");
                return new LinkedHashSet((Collection) null);
        }
    }

    @Override // bs.a
    public final Object j(Object obj) {
        switch (this.f3171b) {
            case 0:
                ArrayList arrayList = (ArrayList) obj;
                Intrinsics.checkNotNullParameter(arrayList, "<this>");
                return arrayList;
            case 1:
                HashSet hashSet = (HashSet) obj;
                Intrinsics.checkNotNullParameter(hashSet, "<this>");
                return hashSet;
            default:
                LinkedHashSet linkedHashSet = (LinkedHashSet) obj;
                Intrinsics.checkNotNullParameter(linkedHashSet, "<this>");
                return linkedHashSet;
        }
    }

    @Override // bs.u
    public final void k(int i5, Object obj, Object obj2) {
        switch (this.f3171b) {
            case 0:
                ArrayList arrayList = (ArrayList) obj;
                Intrinsics.checkNotNullParameter(arrayList, "<this>");
                arrayList.add(i5, obj2);
                break;
            case 1:
                HashSet hashSet = (HashSet) obj;
                Intrinsics.checkNotNullParameter(hashSet, "<this>");
                hashSet.add(obj2);
                break;
            default:
                LinkedHashSet linkedHashSet = (LinkedHashSet) obj;
                Intrinsics.checkNotNullParameter(linkedHashSet, "<this>");
                linkedHashSet.add(obj2);
                break;
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public d(KSerializer eSerializer, int i5) {
        this(eSerializer, (char) 0);
        this.f3171b = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(eSerializer, "eSerializer");
                this(eSerializer, (char) 0);
                SerialDescriptor elementDesc = eSerializer.getDescriptor();
                Intrinsics.checkNotNullParameter(elementDesc, "elementDesc");
                this.f3172c = new c(elementDesc, 2);
                break;
            case 2:
                Intrinsics.checkNotNullParameter(eSerializer, "eSerializer");
                this(eSerializer, (char) 0);
                SerialDescriptor elementDesc2 = eSerializer.getDescriptor();
                Intrinsics.checkNotNullParameter(elementDesc2, "elementDesc");
                this.f3172c = new c(elementDesc2, 3);
                break;
            default:
                Intrinsics.checkNotNullParameter(eSerializer, "element");
                SerialDescriptor elementDesc3 = eSerializer.getDescriptor();
                Intrinsics.checkNotNullParameter(elementDesc3, "elementDesc");
                this.f3172c = new c(elementDesc3, 1);
                break;
        }
    }
}
