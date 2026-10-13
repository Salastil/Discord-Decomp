package j$.time.format;

import java.util.Locale;
import java.util.Map;

/* loaded from: classes2.dex */
public final class m implements f {
    public final j$.time.temporal.j a;

    /* renamed from: b, reason: collision with root package name */
    public final v f12311b;

    /* renamed from: c, reason: collision with root package name */
    public final b f12312c;

    /* renamed from: d, reason: collision with root package name */
    public volatile i f12313d;

    public m(j$.time.temporal.j jVar, v vVar, b bVar) {
        this.a = jVar;
        this.f12311b = vVar;
        this.f12312c = bVar;
    }

    @Override // j$.time.format.f
    public final boolean a(p pVar, StringBuilder sb2) {
        j$.time.chrono.e eVar;
        Map map;
        Long a = pVar.a(this.a);
        if (a == null) {
            return false;
        }
        j$.time.chrono.d dVar = (j$.time.chrono.d) pVar.a.c(j$.time.temporal.k.f12338b);
        String str = null;
        if (dVar == null || dVar == (eVar = j$.time.chrono.e.a)) {
            b bVar = this.f12312c;
            v vVar = this.f12311b;
            Locale locale = pVar.f12322b.f12296b;
            Map map2 = (Map) bVar.a.a.get(vVar);
            if (map2 != null) {
                str = (String) map2.get(a);
            }
        } else {
            b bVar2 = this.f12312c;
            j$.time.temporal.j jVar = this.a;
            v vVar2 = this.f12311b;
            Locale locale2 = pVar.f12322b.f12296b;
            if ((dVar == eVar || !(jVar instanceof j$.time.temporal.a)) && (map = (Map) bVar2.a.a.get(vVar2)) != null) {
                str = (String) map.get(a);
            }
        }
        if (str != null) {
            sb2.append(str);
            return true;
        }
        if (this.f12313d == null) {
            this.f12313d = new i(this.a, 1, 19, u.NORMAL);
        }
        return this.f12313d.a(pVar, sb2);
    }

    public final String toString() {
        v vVar = v.FULL;
        j$.time.temporal.j jVar = this.a;
        v vVar2 = this.f12311b;
        if (vVar2 == vVar) {
            return "Text(" + jVar + ")";
        }
        return "Text(" + jVar + "," + vVar2 + ")";
    }
}
