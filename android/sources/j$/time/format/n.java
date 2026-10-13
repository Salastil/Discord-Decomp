package j$.time.format;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes2.dex */
public final class n {

    /* renamed from: f, reason: collision with root package name */
    public static final a f12314f = new a(0);
    public n a;

    /* renamed from: b, reason: collision with root package name */
    public final n f12315b;

    /* renamed from: c, reason: collision with root package name */
    public final List f12316c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f12317d;

    /* renamed from: e, reason: collision with root package name */
    public int f12318e;

    static {
        HashMap hashMap = new HashMap();
        hashMap.put('G', j$.time.temporal.a.ERA);
        hashMap.put('y', j$.time.temporal.a.YEAR_OF_ERA);
        hashMap.put('u', j$.time.temporal.a.YEAR);
        j$.time.temporal.g gVar = j$.time.temporal.i.a;
        hashMap.put('Q', gVar);
        hashMap.put('q', gVar);
        j$.time.temporal.a aVar = j$.time.temporal.a.MONTH_OF_YEAR;
        hashMap.put('M', aVar);
        hashMap.put('L', aVar);
        hashMap.put('D', j$.time.temporal.a.DAY_OF_YEAR);
        hashMap.put('d', j$.time.temporal.a.DAY_OF_MONTH);
        hashMap.put('F', j$.time.temporal.a.ALIGNED_DAY_OF_WEEK_IN_MONTH);
        j$.time.temporal.a aVar2 = j$.time.temporal.a.DAY_OF_WEEK;
        hashMap.put('E', aVar2);
        hashMap.put('c', aVar2);
        hashMap.put('e', aVar2);
        hashMap.put('a', j$.time.temporal.a.AMPM_OF_DAY);
        hashMap.put('H', j$.time.temporal.a.HOUR_OF_DAY);
        hashMap.put('k', j$.time.temporal.a.CLOCK_HOUR_OF_DAY);
        hashMap.put('K', j$.time.temporal.a.HOUR_OF_AMPM);
        hashMap.put('h', j$.time.temporal.a.CLOCK_HOUR_OF_AMPM);
        hashMap.put('m', j$.time.temporal.a.MINUTE_OF_HOUR);
        hashMap.put('s', j$.time.temporal.a.SECOND_OF_MINUTE);
        j$.time.temporal.a aVar3 = j$.time.temporal.a.NANO_OF_SECOND;
        hashMap.put('S', aVar3);
        hashMap.put('A', j$.time.temporal.a.MILLI_OF_DAY);
        hashMap.put('n', aVar3);
        hashMap.put('N', j$.time.temporal.a.NANO_OF_DAY);
    }

    public n() {
        this.a = this;
        this.f12316c = new ArrayList();
        this.f12318e = -1;
        this.f12315b = null;
        this.f12317d = false;
    }

    public n(n nVar) {
        this.a = this;
        this.f12316c = new ArrayList();
        this.f12318e = -1;
        this.f12315b = nVar;
        this.f12317d = true;
    }

    public final void g(j$.time.temporal.j jVar, int i5) {
        Objects.requireNonNull(jVar, "field");
        if (i5 < 1 || i5 > 19) {
            throw new IllegalArgumentException("The width must be from 1 to 19 inclusive but was " + i5);
        }
        f(new i(jVar, i5, i5, u.NOT_NEGATIVE));
    }

    public final void h(j$.time.temporal.j jVar, int i5, int i6, u uVar) {
        if (i5 == i6 && uVar == u.NOT_NEGATIVE) {
            g(jVar, i6);
            return;
        }
        Objects.requireNonNull(jVar, "field");
        Objects.requireNonNull(uVar, "signStyle");
        if (i5 < 1 || i5 > 19) {
            throw new IllegalArgumentException("The minimum width must be from 1 to 19 inclusive but was " + i5);
        }
        if (i6 < 1 || i6 > 19) {
            throw new IllegalArgumentException("The maximum width must be from 1 to 19 inclusive but was " + i6);
        }
        if (i6 < i5) {
            throw new IllegalArgumentException("The maximum width must exceed or equal the minimum width but " + i6 + " < " + i5);
        }
        f(new i(jVar, i5, i6, uVar));
    }

    public final void f(i iVar) {
        u uVar;
        n nVar = this.a;
        int i5 = nVar.f12318e;
        if (i5 >= 0) {
            i iVar2 = (i) ((ArrayList) nVar.f12316c).get(i5);
            int i6 = iVar.f12304b;
            int i10 = iVar.f12305c;
            if (i6 != i10 || (uVar = iVar.f12306d) != u.NOT_NEGATIVE) {
                if (iVar2.f12307e != -1) {
                    iVar2 = new i(iVar2.a, iVar2.f12304b, iVar2.f12305c, iVar2.f12306d, -1);
                }
                this.a.f12318e = b(iVar);
            } else {
                iVar2 = new i(iVar2.a, iVar2.f12304b, iVar2.f12305c, iVar2.f12306d, iVar2.f12307e + i10);
                if (iVar.f12307e != -1) {
                    iVar = new i(iVar.a, i6, i10, uVar, -1);
                }
                b(iVar);
                this.a.f12318e = i5;
            }
            ((ArrayList) this.a.f12316c).set(i5, iVar2);
            return;
        }
        nVar.f12318e = b(iVar);
    }

    public final void e(j$.time.temporal.a aVar, Map map) {
        Objects.requireNonNull(aVar, "field");
        LinkedHashMap linkedHashMap = new LinkedHashMap(map);
        v vVar = v.FULL;
        b(new m(aVar, vVar, new b(new r(Collections.singletonMap(vVar, linkedHashMap)))));
    }

    public final void c(char c6) {
        b(new d(c6));
    }

    public final void d(String str) {
        if (str.length() > 0) {
            if (str.length() == 1) {
                b(new d(str.charAt(0)));
            } else {
                b(new l(str));
            }
        }
    }

    public final void j() {
        n nVar = this.a;
        nVar.f12318e = -1;
        this.a = new n(nVar);
    }

    public final void i() {
        n nVar = this.a;
        if (nVar.f12315b == null) {
            throw new IllegalStateException("Cannot call optionalEnd() as there was no previous call to optionalStart()");
        }
        if (((ArrayList) nVar.f12316c).size() > 0) {
            n nVar2 = this.a;
            e eVar = new e(nVar2.f12316c, nVar2.f12317d);
            this.a = this.a.f12315b;
            b(eVar);
            return;
        }
        this.a = this.a.f12315b;
    }

    public final int b(f fVar) {
        Objects.requireNonNull(fVar, "pp");
        n nVar = this.a;
        nVar.getClass();
        ((ArrayList) nVar.f12316c).add(fVar);
        this.a.f12318e = -1;
        return ((ArrayList) r2.f12316c).size() - 1;
    }

    public final void a(DateTimeFormatter dateTimeFormatter) {
        e eVar = dateTimeFormatter.a;
        if (eVar.f12300b) {
            eVar = new e(eVar.a, false);
        }
        b(eVar);
    }

    public final DateTimeFormatter k(t tVar, j$.time.chrono.e eVar) {
        Locale locale = Locale.getDefault();
        Objects.requireNonNull(locale, "locale");
        while (this.a.f12315b != null) {
            i();
        }
        e eVar2 = new e(this.f12316c, false);
        s sVar = s.a;
        return new DateTimeFormatter(eVar2, locale, tVar, eVar);
    }
}
