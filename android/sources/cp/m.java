package cp;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class m extends zk.a {
    public final wq.r j;
    public final cq.i0 k;

    /* renamed from: l, reason: collision with root package name */
    public final fq.e f6917l;

    /* renamed from: m, reason: collision with root package name */
    public final eq.g f6918m;

    /* renamed from: n, reason: collision with root package name */
    public final a4.i f6919n;

    /* renamed from: o, reason: collision with root package name */
    public final String f6920o;

    public m(wq.r descriptor, cq.i0 proto, fq.e signature, eq.g nameResolver, a4.i typeTable) {
        String str;
        String n6;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(signature, "signature");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        this.j = descriptor;
        this.k = proto;
        this.f6917l = signature;
        this.f6918m = nameResolver;
        this.f6919n = typeTable;
        if ((signature.f8960e & 4) == 4) {
            n6 = nameResolver.getString(signature.f8963w.f8949i) + nameResolver.getString(signature.f8963w.f8950v);
        } else {
            gq.d b10 = gq.g.b(proto, nameResolver, typeTable, true);
            if (b10 == null) {
                throw new u1("No field signature for property: " + descriptor);
            }
            String str2 = b10.f9437v;
            String str3 = b10.f9438w;
            StringBuilder sb2 = new StringBuilder();
            sb2.append(rp.x.a(str2));
            ip.l h6 = descriptor.h();
            Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
            if (Intrinsics.areEqual(descriptor.getVisibility(), ip.q.f12158d) && (h6 instanceof wq.i)) {
                cq.k kVar = ((wq.i) h6).f20008w;
                iq.m classModuleName = fq.k.f9001i;
                Intrinsics.checkNotNullExpressionValue(classModuleName, "classModuleName");
                Integer num = (Integer) zk.a.q(kVar, classModuleName);
                String name = (num == null || (name = nameResolver.getString(num.intValue())) == null) ? "main" : name;
                StringBuilder sb3 = new StringBuilder("$");
                Regex regex = hq.f.a;
                Intrinsics.checkNotNullParameter(name, "name");
                sb3.append(hq.f.a.replace(name, "_"));
                str = sb3.toString();
            } else {
                if (Intrinsics.areEqual(descriptor.getVisibility(), ip.q.a) && (h6 instanceof ip.f0)) {
                    Intrinsics.checkNotNull(descriptor, "null cannot be cast to non-null type org.jetbrains.kotlin.serialization.deserialization.descriptors.DeserializedPropertyDescriptor");
                    wq.k kVar2 = descriptor.f20036c0;
                    if (kVar2 instanceof aq.h) {
                        aq.h hVar = (aq.h) kVar2;
                        if (hVar.f2638e != null) {
                            StringBuilder sb4 = new StringBuilder("$");
                            String d6 = hVar.f2637d.d();
                            Intrinsics.checkNotNullExpressionValue(d6, "getInternalName(...)");
                            hq.e e9 = hq.e.e(StringsKt.W('/', d6, d6));
                            Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                            sb4.append(e9.b());
                            str = sb4.toString();
                        }
                    }
                }
                str = "";
            }
            n6 = a3.e.n(sb2, str, "()", str3);
        }
        this.f6920o = n6;
    }

    @Override // zk.a
    public final String d() {
        return this.f6920o;
    }
}
