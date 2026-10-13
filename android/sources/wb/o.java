package wb;

import java.util.Set;

/* loaded from: classes3.dex */
public final class o implements tb.f {
    public final Set a;

    /* renamed from: b, reason: collision with root package name */
    public final i f19714b;

    /* renamed from: c, reason: collision with root package name */
    public final p f19715c;

    public o(Set set, i iVar, p pVar) {
        this.a = set;
        this.f19714b = iVar;
        this.f19715c = pVar;
    }

    public final f9.b a(String str, tb.c cVar, tb.e eVar) {
        Set set = this.a;
        if (set.contains(cVar)) {
            return new f9.b(this.f19714b, str, cVar, eVar, this.f19715c);
        }
        throw new IllegalArgumentException(String.format("%s is not supported byt this factory. Supported encodings are: %s.", cVar, set));
    }
}
