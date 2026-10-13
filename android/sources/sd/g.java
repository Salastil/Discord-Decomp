package sd;

import java.util.List;

/* loaded from: classes3.dex */
public final class g extends pd.b {

    /* renamed from: v, reason: collision with root package name */
    public final List f17866v;

    /* renamed from: w, reason: collision with root package name */
    public final long f17867w;

    public g(long j, List list) {
        super(0L, list.size() - 1);
        this.f17867w = j;
        this.f17866v = list;
    }

    @Override // pd.m
    public final long c() {
        a();
        return this.f17867w + ((td.g) this.f17866v.get((int) this.f16347i)).f18288w;
    }

    @Override // pd.m
    public final long i() {
        a();
        td.g gVar = (td.g) this.f17866v.get((int) this.f16347i);
        return this.f17867w + gVar.f18288w + gVar.f18286i;
    }
}
