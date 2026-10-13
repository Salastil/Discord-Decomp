package bg;

import java.util.AbstractMap;

/* loaded from: classes3.dex */
public final class t extends p {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ u f2993i;

    public t(u uVar) {
        this.f2993i = uVar;
    }

    @Override // java.util.List
    public final /* bridge */ /* synthetic */ Object get(int i5) {
        u uVar = this.f2993i;
        return new AbstractMap.SimpleImmutableEntry(uVar.f2994v.f2996i.f2943x.get(i5), uVar.f2994v.f2997v.get(i5));
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f2993i.f2994v.f2997v.size();
    }
}
