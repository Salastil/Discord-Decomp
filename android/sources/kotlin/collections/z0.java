package kotlin.collections;

import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class z0 extends f {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f13530e = 0;

    /* renamed from: i, reason: collision with root package name */
    public final Object f13531i;

    public z0(List delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f13531i = delegate;
    }

    @Override // kotlin.collections.a
    public final int a() {
        switch (this.f13530e) {
            case 0:
                return ((List) this.f13531i).size();
            default:
                return ((kotlin.text.m) this.f13531i).a.groupCount() + 1;
        }
    }

    @Override // kotlin.collections.a, java.util.Collection, java.util.List
    public /* bridge */ boolean contains(Object obj) {
        switch (this.f13530e) {
            case 1:
                if (obj instanceof String) {
                    return super.contains((String) obj);
                }
                return false;
            default:
                return super.contains(obj);
        }
    }

    @Override // kotlin.collections.f, java.util.List
    public final Object get(int i5) {
        switch (this.f13530e) {
            case 0:
                return ((List) this.f13531i).get(i0.v(i5, this));
            default:
                String group = ((kotlin.text.m) this.f13531i).a.group(i5);
                return group == null ? "" : group;
        }
    }

    @Override // kotlin.collections.f, java.util.List
    public /* bridge */ int indexOf(Object obj) {
        switch (this.f13530e) {
            case 1:
                if (obj instanceof String) {
                    return super.indexOf((String) obj);
                }
                return -1;
            default:
                return super.indexOf(obj);
        }
    }

    @Override // kotlin.collections.f, java.util.Collection, java.lang.Iterable, java.util.List
    public Iterator iterator() {
        switch (this.f13530e) {
            case 0:
                return new y0(this, 0);
            default:
                return super.iterator();
        }
    }

    @Override // kotlin.collections.f, java.util.List
    public /* bridge */ int lastIndexOf(Object obj) {
        switch (this.f13530e) {
            case 1:
                if (obj instanceof String) {
                    return super.lastIndexOf((String) obj);
                }
                return -1;
            default:
                return super.lastIndexOf(obj);
        }
    }

    @Override // kotlin.collections.f, java.util.List
    public ListIterator listIterator() {
        switch (this.f13530e) {
            case 0:
                return new y0(this, 0);
            default:
                return super.listIterator();
        }
    }

    @Override // kotlin.collections.f, java.util.List
    public ListIterator listIterator(int i5) {
        switch (this.f13530e) {
            case 0:
                return new y0(this, i5);
            default:
                return super.listIterator(i5);
        }
    }

    public z0(kotlin.text.m mVar) {
        this.f13531i = mVar;
    }
}
