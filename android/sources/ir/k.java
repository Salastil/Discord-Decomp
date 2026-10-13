package ir;

import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.u0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;

/* loaded from: classes3.dex */
public final class k extends kotlin.collections.m {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f12269i = 0;

    /* renamed from: d, reason: collision with root package name */
    public Object f12270d;

    /* renamed from: e, reason: collision with root package name */
    public int f12271e;

    public k(int i5) {
    }

    @Override // kotlin.collections.m
    public final int a() {
        return this.f12271e;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v10, types: [java.util.AbstractCollection, java.util.HashSet, java.util.LinkedHashSet] */
    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean add(Object obj) {
        Object[] objArr;
        int i5 = this.f12271e;
        if (i5 == 0) {
            this.f12270d = obj;
        } else if (i5 == 1) {
            if (Intrinsics.areEqual(this.f12270d, obj)) {
                return false;
            }
            this.f12270d = new Object[]{this.f12270d, obj};
        } else if (i5 < 5) {
            Object obj2 = this.f12270d;
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Array<T of org.jetbrains.kotlin.utils.SmartSet>");
            Object[] objArr2 = (Object[]) obj2;
            if (x.p(obj, objArr2)) {
                return false;
            }
            int i6 = this.f12271e;
            if (i6 == 4) {
                Object[] elements = Arrays.copyOf(objArr2, objArr2.length);
                Intrinsics.checkNotNullParameter(elements, "elements");
                ?? linkedHashSet = new LinkedHashSet(u0.a(elements.length));
                x.F(elements, linkedHashSet);
                linkedHashSet.add(obj);
                objArr = linkedHashSet;
            } else {
                Object[] copyOf = Arrays.copyOf(objArr2, i6 + 1);
                Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                copyOf[copyOf.length - 1] = obj;
                objArr = copyOf;
            }
            this.f12270d = objArr;
        } else {
            Object obj3 = this.f12270d;
            Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.collections.MutableSet<T of org.jetbrains.kotlin.utils.SmartSet>");
            if (!TypeIntrinsics.asMutableSet(obj3).add(obj)) {
                return false;
            }
        }
        this.f12271e++;
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final void clear() {
        this.f12270d = null;
        this.f12271e = 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (a() == 0) {
            return false;
        }
        if (a() == 1) {
            return Intrinsics.areEqual(this.f12270d, obj);
        }
        if (a() < 5) {
            Object obj2 = this.f12270d;
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Array<T of org.jetbrains.kotlin.utils.SmartSet>");
            return x.p(obj, (Object[]) obj2);
        }
        Object obj3 = this.f12270d;
        Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.collections.Set<T of org.jetbrains.kotlin.utils.SmartSet>");
        return ((Set) obj3).contains(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        int i5 = this.f12271e;
        if (i5 == 0) {
            return Collections.EMPTY_SET.iterator();
        }
        if (i5 == 1) {
            return new j(this.f12270d);
        }
        if (i5 < 5) {
            Object obj = this.f12270d;
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Array<T of org.jetbrains.kotlin.utils.SmartSet>");
            return new i((Object[]) obj);
        }
        Object obj2 = this.f12270d;
        Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.collections.MutableSet<T of org.jetbrains.kotlin.utils.SmartSet>");
        return TypeIntrinsics.asMutableSet(obj2).iterator();
    }
}
