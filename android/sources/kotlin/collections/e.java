package kotlin.collections;

import java.util.RandomAccess;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends f implements RandomAccess {

    /* renamed from: e, reason: collision with root package name */
    public final f f13494e;

    /* renamed from: i, reason: collision with root package name */
    public final int f13495i;

    /* renamed from: v, reason: collision with root package name */
    public final int f13496v;

    public e(f list, int i5, int i6) {
        Intrinsics.checkNotNullParameter(list, "list");
        this.f13494e = list;
        this.f13495i = i5;
        c cVar = f.f13497d;
        int a = list.a();
        cVar.getClass();
        c.d(i5, i6, a);
        this.f13496v = i6 - i5;
    }

    @Override // kotlin.collections.a
    public final int a() {
        return this.f13496v;
    }

    @Override // kotlin.collections.f, java.util.List
    public final Object get(int i5) {
        f.f13497d.getClass();
        c.b(i5, this.f13496v);
        return this.f13494e.get(this.f13495i + i5);
    }
}
